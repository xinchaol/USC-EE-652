module BcpRateControllerP{
  provides
  {
    interface Send;
    //Provide StdControl for initializing and finalizing
    //interface StdControl as BcpRateControllerControl;
    interface BcpRateControlIF as RateControlIF;
  }
  uses
  {
    interface BcpDebugIF;
    interface Packet as subPacket;
    interface Get<uint16_t> as getBackpressure;
    interface Set<uint32_t> as setMean;
    interface Random as exponentialRandom;
    interface Pool<message_t> as modPool;
    interface Queue<message_t*> as modQueue;
    interface Timer<TMilli> as admissionTimer;
    interface Send as SubSend;
    interface BcpCongestionIF;    
  }
}
implementation{
  uint8_t Vmax = 100;
  uint8_t Valpha = 50;
  uint8_t seqNo = 0;
  uint8_t Tretx = 0;
  uint8_t Tthreshold = 3;

  uint16_t thirdRoot( uint32_t A_p )
  {
    uint16_t retVal = 2; // A Guess
    uint32_t retValCubed = 0;
    uint8_t  count = 0;
    // We'll just do 10 iterations
    for( count = 0; count < 10; count++ ){
      retValCubed = (uint32_t)retVal * (uint32_t)retVal;
//      retVal = (2*retVal + A_p/(retValCubed))/3;
    }
    return retVal;
  }

  uint16_t fourthRoot( uint32_t A_p )
  {
    uint16_t retVal = 2; // A Guess
    uint32_t retValCubed = 0;
    uint8_t  count = 0;
    // We'll just do 10 iterations
    dbg("fourthRoot", "%s: Calculating fourthRoot of %u.\n", __FUNCTION__, A_p);
    if (A_p == 0)
      return 0;

    for( count = 0; count < 10; count++ ){
      dbg("fourthRoot", "%s: Calculating fourthRoot, interation %hhu.\n", __FUNCTION__, count);
      retValCubed = (uint32_t)retVal * (uint32_t)retVal * (uint32_t)retVal;
      retVal = (3*retVal + A_p/(retValCubed))>>2;
      dbg("fourthRoot", "%s: Calculating fourthRoot, retVal %u.\n", __FUNCTION__, retVal);
    }
    return retVal;
  }
  
  void startAdmissionTimer(){
    uint32_t newMean = 0;

    // Prop Fair
    //newMean = 85 * call getBackpressure.get();
    //dbg("RateControl", "%s: Calculating newMean.\n", __FUNCTION__);
    // Max-Min Fair
    dbg("RateControl", "%s: Backpressure: %hhu.\n", __FUNCTION__, call getBackpressure.get());
    newMean = 150 * fourthRoot( 50 * call getBackpressure.get());
    //newMean = 150 * fourthRoot( Valpha * call getBackpressure.get() );

    // Truncate the Prop Fair controller for small Q size @ 10 PPS
    if( newMean < 100 ){
      // Random num Gen dies @ mean zero
      newMean = 100;
    }
    
    dbg("RateControl", "%s: Mean of Sending Rate is %hu, and Valpha is %hu.\n", __FUNCTION__, newMean, Valpha);

    // Set the new mean for the exponential R.V.
    call setMean.set( newMean );

    call admissionTimer.startOneShot( call exponentialRandom.rand32() );
  }

  event void BcpCongestionIF.congestionNotify() {
    dbg("RateControl", "%s: Notify Congestion.\n", __FUNCTION__);
    // Increase T re-tx 
    Tretx++;
    // When it reachs Threshold
    if (Tretx > Tthreshold) {  
      Tretx = 0;
      Valpha /= 2;
      dbg("RateControl", "%s: Congestion Occur, Valpha is %hu. \n", __FUNCTION__, Valpha);
    }
  }
  
  event void BcpCongestionIF.noCongestionNotify() {
    uint8_t inc = 1;
    if (Valpha < Vmax) {      
      Valpha += inc;
      dbg("RateControl", "%s: Increase Valpha to %hu, Vmax is %hu.\n", __FUNCTION__, Valpha, Vmax);
    }
  }
  
  event void BcpCongestionIF.updateRateControlInfo(uint16_t reVal, 
						    uint16_t reSeqNo) {
    if (seqNo < reSeqNo) {
      // update upper boud of valpha
      Vmax = reVal;
      dbg("RateControl", "%s: Update Vmax to %hu.\n", __FUNCTION__, Vmax);
    }
  }
  
  command uint8_t RateControlIF.getValphaUpper() {
    return Vmax;
  }

  command uint8_t RateControlIF.getValphaValue() {
    return Valpha;
  }
  
  command uint8_t RateControlIF.getSeqenceNo() {
    return seqNo;
  }
  /** 
    * Send a packet with a data payload of <tt>len</tt>. To determine
    * the maximum available size, use the Packet interface of the
    * component providing Send. If send returns SUCCESS, then the
    * component will signal the sendDone event in the future; if send
    * returns an error, it will not signal sendDone.  Note that a
    * component may accept a send request which it later finds it
    * cannot satisfy; in this case, it will signal sendDone with an
    * appropriate error code.
    *
    * @param   'message_t* ONE msg'     the packet to send
    * @param   len     the length of the packet payload
    * @return          SUCCESS if the request was accepted and will issue
    *                  a sendDone event, EBUSY if the component cannot accept
    *                  the request now but will be able to later, FAIL
    *                  if the stack is in a state that cannot accept requests
    *                  (e.g., it's off).
    */ 
  command error_t Send.send(message_t* msg, uint8_t len){
    error_t retVal;
    message_t * poolMsg;

    // Should do a length check, but this would require another Packet interface?
/*    if( len > call subPacket.maxPayloadLength() ){
      // Packet won't fit on the radio, bad!
      call BcpDebugIF.reportError( 0x7f );
      return ESIZE;
    }*/
    // Queue the send request so long as there is buffer space
    if( call modPool.empty() ){
      // No room right now, but will be later (we hope!)
      return EBUSY;
    } else {
      poolMsg = call modPool.get();
    }
    //dbg("RateControl", "%s: Get Memory Space.\n", __FUNCTION__);
    // Copy the packet contents
    memcpy(poolMsg, msg, sizeof(message_t));

    // Ok, there is room, place it in the queue
    retVal = call modQueue.enqueue( poolMsg );
    if( retVal != SUCCESS ){
      call BcpDebugIF.reportError( 0x77 ); 
      dbg("RateControl_Error", "%s: Cannot Enqueue.\n", __FUNCTION__);
      // Attempt to recover the memory 
      call modPool.put( poolMsg );
      return FAIL;
    }
    // Check that we have exponentialRandom timer running
    if(!call admissionTimer.isRunning() ){
      // Start a timer
      startAdmissionTimer();
    }
    signal Send.sendDone(msg, SUCCESS);
    return SUCCESS;
  }

  /**
    * Cancel a requested transmission. Returns SUCCESS if the 
    * transmission was cancelled properly (not sent in its
    * entirety). Note that the component may not know
    * if the send was successfully cancelled, if the radio is
    * handling much of the logic; in this case, a component
    * should be conservative and return an appropriate error code.
    *
    * @param   'message_t* ONE msg'    the packet whose transmission should be cancelled
    * @return         SUCCESS if the packet was successfully cancelled, FAIL
    *                 otherwise
    */
  command error_t Send.cancel(message_t* msg){
    // Due to the immediate sendDone response, cancel isn't supported
    return FAIL;
  }

   /**
   * Return the maximum payload length that this communication layer
   * can provide. This command behaves identically to
   * <tt>Packet.maxPayloadLength</tt> and is included in this
   * interface as a convenience.
   *
   * @return  the maximum payload length
   */
  command uint8_t Send.maxPayloadLength(){
    return call SubSend.maxPayloadLength();
  }

  /**
   * Return a pointer to a protocol's payload region in a packet which
   * at least a certain length.  If the payload region is smaller than
   * the len parameter, then getPayload returns NULL. This command
   * behaves identicallt to <tt>Packet.getPayload</tt> and is
   * included in this interface as a convenience.
   *
   * @param   'message_t* ONE msg'    the packet
   * @return  'void* COUNT_NOK(len)'  a pointer to the packet's payload
   */
  command void* Send.getPayload(message_t* msg, uint8_t len){
    return call SubSend.getPayload( msg, len );
  }

  /** 
    * Signaled in response to an accepted send request. <tt>msg</tt>
    * is the sent buffer, and <tt>error</tt> indicates whether the
    * send was succesful, and if not, the cause of the failure.
    * 
    * @param 'message_t* ONE msg'   the message which was requested to send
    * @param error SUCCESS if it was transmitted successfully, FAIL if
    *              it was not, ECANCEL if it was cancelled via <tt>cancel</tt>
    */ 
  event void SubSend.sendDone(message_t* msg, error_t error){
    // Dequeue the sent packet
    if( msg != call modQueue.head() ){
      // Something has gone wrong!
      dbg("RateControl_Error", "%s: Subsending sendDone Error.\n", __FUNCTION__);
      call BcpDebugIF.reportError( 0x7a );
      return;
    } else {
      //dbg("RateControl", "%s: Subsending Done.\n", __FUNCTION__);
      call modQueue.dequeue();
    }
    
    if( call modPool.put( msg ) != SUCCESS ){
      // Memory leak, yuck
      dbg("RateControl_Error", "%s: Subsending memory leak.\n", __FUNCTION__);
      call BcpDebugIF.reportError( 0x7b );
    }
  }

  event void admissionTimer.fired()
  {
    error_t err;
    uint8_t payloadLen = 0;
 
    if( call modQueue.empty() ){
      // Something is wrong!
      call BcpDebugIF.reportError( 0x7e );
      return;
    }

    payloadLen = call subPacket.payloadLength( call modQueue.head() );


    // Time to admit a packet
    //dbg("RateControl", "%s: Subsending Message.\n", __FUNCTION__);
    err = call SubSend.send( call modQueue.head(), payloadLen );

    if( err ){
      dbg("RateControl_Error", "%s: Subsending Error.\n", __FUNCTION__);
      call BcpDebugIF.reportValues( 0,0,0,0,0,0,err,0x7c );
      call BcpDebugIF.reportError( 0x7c );
    }

    // See if there is another packet to start a timer for
    //dbg("RateControl", "%s: Message has been send,\n", __FUNCTION__);
    if( ! call modQueue.empty() ){
      startAdmissionTimer();
    } 
  }

}
