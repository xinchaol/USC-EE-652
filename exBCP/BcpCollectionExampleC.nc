#include "BcpCollectionExample.h"
#include "TimeSyncMsg.h"
#if PROTO_CTP
#include <CtpDebugMsg.h>
#endif

module BcpCollectionExampleC{
  uses interface Boot;
  uses interface SplitControl as RadioControl;
  uses interface SplitControl as csmaControl;
  uses interface StdControl as ProtoControl;
  uses interface Leds;
  uses interface Timer<TMilli>;
  uses interface Timer<TMilli> as sinkTimer;
  uses interface RootControl;
  uses interface Receive;
  uses interface Send;
  uses interface Packet;
#if PROTO_BCP
  uses interface BcpPacket;
#else
  uses interface CtpPacket;
  uses interface Receive as DataSnoop;
#endif
  //Commented by Xinchao Liu
  //uses interface LowPowerListening as LPL; 
  uses interface AMPacket;
  uses interface Random;
  uses interface SafeSerialSendIF;
  uses interface Receive as UartReceive;
  uses interface StdControl as SerialControl;
//  uses interface GlobalTime<TMilli>;
//  uses interface StdControl as TimeStdControl;
//  uses interface Init as TimeInit;
//  uses interface TimeSyncMode;
#if PROTO_BCP
  provides interface BcpDebugIF;
#else
  provides interface CollectionDebug;
#endif
}
implementation{
  message_t packet;
  uint32_t startTestTime = 0;
  uint32_t radioOnDuration = 0;
  uint32_t radioOffDuration = 0;
  uint32_t lastRadioOnTime = 0;
  uint32_t lastRadioOffTime = 0;
  uint32_t count = 0;
  am_addr_t parent;
  uint8_t commandCount = 0;
  uint8_t commandCountAckCount = 0;
  uint16_t testTime = 0;

  typedef nx_struct BCPMsg {
    nx_uint32_t data;
  } BCPMsg;

  event void Boot.booted() {
    dbg("Boot", "Application has booted.\n");

    //call LPL.setLocalSleepInterval( LPL_SLEEP_INTERVAL_MS );
    if(TOS_NODE_ID == 1)
      call RootControl.setRoot();
    else {
      call RootControl.unsetRoot(); 
    }    
    call RadioControl.start();
    call SerialControl.start();

    //call TimeInit.init();
    //call TimeStdControl.start();
  }

  event void csmaControl.startDone( error_t err ){
      if( lastRadioOnTime == lastRadioOffTime ){
        // first time-stamp, we can't compute durations
        lastRadioOnTime = call Timer.getNow();
      } else {
        lastRadioOnTime = call Timer.getNow();
        radioOffDuration += lastRadioOnTime - lastRadioOffTime;
      }
  }

  event void csmaControl.stopDone( error_t err ){
    if( lastRadioOnTime == lastRadioOffTime ){
      // first time-stamp, we can't compute durations - shouldn't happen this way tho
      lastRadioOffTime = call Timer.getNow();
    } else {
      lastRadioOffTime = call Timer.getNow();
      radioOnDuration += lastRadioOffTime - lastRadioOnTime;
    }
  }

  event void RadioControl.startDone(error_t err) {
    if (err != SUCCESS) {    
      call RadioControl.start();
    } 
    else {

      dbg("Boot","Radio up, calling ProtoControl.start()\n");
      call ProtoControl.start();

      if (TOS_NODE_ID == 0x1) {
        call Leds.led2Off();
        call Leds.led1Off();
        call Leds.led0On();
      }
      else
      {
        // This timer is for simulations only
        call Timer.startOneShot(10000);

        call Leds.led2Off();
        call Leds.led1Off();
        call Leds.led0Off();
      }
    }
  }

  event void RadioControl.stopDone(error_t err) {
    // Radio has been shut down
    dbg("Boot","The radio has been shut down\n");
  }

  void sendMessage() {
    BCPMsg * newBCPMsg;
    error_t err;
    message_t* messagePtr;
    UartPacket* uartPacketPtr;

    // Log radio duty cycle info
    //call BcpDebugIF.reportValues( radioOnDuration,radioOffDuration,0,0,0,0,0,0xdc );

    // Send a packet to Bcp
    dbg("Source","Forming a packet\n");
#if PROTO_BCP
    dbg("TotalDelay","Sending <from,data,seqNo>=<%hhu,%u,%u>@%u ms\n", call AMPacket.address(), count, call BcpPacket.getSequenceNumber(&packet), call Timer.getNow());
#else
    dbg("TotalDelay","Sending <from,data,seqNo>=<%hhu,%u,%u>@%u ms\n", call AMPacket.address(), count, call CtpPacket.getSequenceNumber(&packet), call Timer.getNow());
#endif
    newBCPMsg = call Packet.getPayload(&packet, sizeof(BCPMsg));
    call Packet.setPayloadLength(&packet, sizeof(BCPMsg));
#if PROTO_BCP
    call BcpPacket.setOrigin(&packet, call AMPacket.address());
#else
    call CtpPacket.setOrigin(&packet, call AMPacket.address());
#endif
    newBCPMsg->data = count;
    //call LPL.setRxSleepInterval( &packet, LPL_SLEEP_INTERVAL_MS );
    dbg("Source", "Sending Message.\n");
    err = call Send.send(&packet, sizeof(BCPMsg)); 
    if(err){
      dbg("Source","Unable to send the packet, error %hu.\n", err);
      if( err == EOFF )
        dbg("Source","Radio is off for client?\n");
      // Send a serial packet notifying of packet failure 
      messagePtr = call SafeSerialSendIF.getMessageBuffer();
      if( messagePtr != 0 )
      {
        uartPacketPtr = (UartPacket *) call SafeSerialSendIF.getPayload(messagePtr, sizeof(UartPacket));
        if( uartPacketPtr != 0 )
        {
          uartPacketPtr->type = 0x08;
          uartPacketPtr->field1 = count;
          uartPacketPtr->field2 = 0;
          uartPacketPtr->field3 = 0;
          uartPacketPtr->field4 = 0;
          uartPacketPtr->field5 = 0;
          uartPacketPtr->field6 = 0;
          uartPacketPtr->field7 = 0;
          uartPacketPtr->field8 = err;
          uartPacketPtr->time = call Timer.getNow();
          dbg("Serial","%s:generated a serial packet notifying of packet admission failure.\n", __FUNCTION__);
          call SafeSerialSendIF.queueMessageBuffer(messagePtr);
        } else { dbg("Error", "%s:uartPacketPtr is NULL! Packet size error?\n",__FUNCTION__); }
      } else { dbg("Error", "%s:messagePtr is NULL! Packet size error?\n",__FUNCTION__); }
    } else {
      // Send a serial packet notifying of packet admission
      messagePtr = call SafeSerialSendIF.getMessageBuffer();
      if( messagePtr != 0 )
      {
        uartPacketPtr = (UartPacket *) call SafeSerialSendIF.getPayload(messagePtr, sizeof(UartPacket));
        if( uartPacketPtr != 0 )
        {
          uartPacketPtr->type = 0x02;
          uartPacketPtr->field1 = count;
          uartPacketPtr->field2 = 0;
          uartPacketPtr->field3 = 0;
          uartPacketPtr->field4 = 0;
          uartPacketPtr->field5 = 0;
          uartPacketPtr->field6 = 0;
          uartPacketPtr->field7 = 0;
          uartPacketPtr->field8 = 0;
          uartPacketPtr->time = call Timer.getNow();
          dbg("Serial","%s:generated a serial packet notifying of packet admission.\n", __FUNCTION__);
          call SafeSerialSendIF.queueMessageBuffer(messagePtr);
        } else { dbg("Error", "%s:uartPacketPtr is NULL! Packet size error?\n",__FUNCTION__); }
      } else { dbg("Error", "%s:messagePtr is NULL! Packet size error!\n",__FUNCTION__); }
      count++;
    }
  }

  event void sinkTimer.fired() {
    testTime++;
    
    if(TOS_NODE_ID == 1)
      call RootControl.setRoot();
    else {
      call RootControl.unsetRoot(); 
    }
    /* 
    // Experiment timeline handling
    if( testTime % 18 == 0 ){
      // 0 - 500 ms phase 0
      //call BcpDebugIF.reportValues( 0,0,0,0,0,0,0,0x7d );
      if(TOS_NODE_ID == 8 )
        call RootControl.setRoot();
      else {
        if( call RootControl.isRoot() )
          call RootControl.unsetRoot(); 
      }
    }
    else if( testTime % 18 == 1 ){
      // 0 - 500 ms phase 0
      //call BcpDebugIF.reportValues( 0,0,0,0,0,0,1,0x7d );
      if(TOS_NODE_ID == 1 )
        call RootControl.setRoot();
      else {
        if( call RootControl.isRoot() )
          call RootControl.unsetRoot(); 
      }
    }
    else if( testTime % 18 == 2 ){
      // 0 - 500 ms phase 0
      //call BcpDebugIF.reportValues( 0,0,0,0,0,0,2,0x7d );
      if(TOS_NODE_ID == 9 )
        call RootControl.setRoot();
      else {
        if( call RootControl.isRoot() )
          call RootControl.unsetRoot(); 
      }
    }
    else if( testTime % 18 == 3 ){
      // 0 - 500 ms phase 0
      //call BcpDebugIF.reportValues( 0,0,0,0,0,0,3,0x7d );
      if(TOS_NODE_ID == 10 )
        call RootControl.setRoot();
      else {
        if( call RootControl.isRoot() )
          call RootControl.unsetRoot(); 
      }
    }
    else if( testTime % 18 == 4 ){
      // 0 - 500 ms phase 0
      //call BcpDebugIF.reportValues( 0,0,0,0,0,0,4,0x7d );
      if(TOS_NODE_ID == 11 )
        call RootControl.setRoot();
      else {
        if( call RootControl.isRoot() )
          call RootControl.unsetRoot(); 
      }
    }
    else if( testTime % 18 == 5 ){
      // 0 - 500 ms phase 0
      //call BcpDebugIF.reportValues( 0,0,0,0,0,0,5,0x7d );
      if(TOS_NODE_ID == 12 )
        call RootControl.setRoot();
      else {
        if( call RootControl.isRoot() )
          call RootControl.unsetRoot(); 
      }
    }
    else if( testTime % 18 == 6 ){
      // 0 - 500 ms phase 0
      //call BcpDebugIF.reportValues( 0,0,0,0,0,0,6,0x7d );
      if(TOS_NODE_ID == 13 )
        call RootControl.setRoot();
      else {
        if( call RootControl.isRoot() )
          call RootControl.unsetRoot(); 
      }
    }
    else if( testTime % 18 == 7 ){
      // 0 - 500 ms phase 0
      //call BcpDebugIF.reportValues( 0,0,0,0,0,0,7,0x7d );
      if(TOS_NODE_ID == 14 )
        call RootControl.setRoot();
      else {
        if( call RootControl.isRoot() )
          call RootControl.unsetRoot(); 
      }
    }
    else if( testTime % 18 == 8 ){
      // 0 - 500 ms phase 0
      //call BcpDebugIF.reportValues( 0,0,0,0,0,0,8,0x7d );
      if(TOS_NODE_ID == 15 )
        call RootControl.setRoot();
      else {
        if( call RootControl.isRoot() )
          call RootControl.unsetRoot(); 
      }
    }
    else if( testTime % 18 == 9 ){
      // 0 - 500 ms phase 0
      //call BcpDebugIF.reportValues( 0,0,0,0,0,0,9,0x7d );
      if(TOS_NODE_ID == 16 )
        call RootControl.setRoot();
      else {
        if( call RootControl.isRoot() )
          call RootControl.unsetRoot(); 
      }
    }
    else if( testTime % 18 == 10 ){
      // 0 - 500 ms phase 0
      //call BcpDebugIF.reportValues( 0,0,0,0,0,0,10,0x7d );
      if(TOS_NODE_ID == 17 )
        call RootControl.setRoot();
      else {
        if( call RootControl.isRoot() )
          call RootControl.unsetRoot(); 
      }
    }
    else if( testTime % 18 == 11 ){
      // 0 - 500 ms phase 0
      //call BcpDebugIF.reportValues( 0,0,0,0,0,0,11,0x7d );
      if(TOS_NODE_ID == 18 )
        call RootControl.setRoot();
      else {
        if( call RootControl.isRoot() )
          call RootControl.unsetRoot(); 
      }
    }
    else if( testTime % 18 == 12 ){
      // 0 - 500 ms phase 0
      //call BcpDebugIF.reportValues( 0,0,0,0,0,0,12,0x7d );
      if(TOS_NODE_ID == 19 )
        call RootControl.setRoot();
      else {
        if( call RootControl.isRoot() )
          call RootControl.unsetRoot(); 
      }
    }
    else if( testTime % 18 == 13 ){
      // 0 - 500 ms phase 0
      //call BcpDebugIF.reportValues( 0,0,0,0,0,0,13,0x7d );
      if(TOS_NODE_ID == 22 )
        call RootControl.setRoot();
      else {
        if( call RootControl.isRoot() )
          call RootControl.unsetRoot(); 
      }
    }
    else if( testTime % 18 == 14 ){
      // 0 - 500 ms phase 0
      //call BcpDebugIF.reportValues( 0,0,0,0,0,0,14,0x7d );
      if(TOS_NODE_ID == 23 )
        call RootControl.setRoot();
      else {
        if( call RootControl.isRoot() )
          call RootControl.unsetRoot(); 
      }
    }
    else if( testTime % 18 == 15 ){
      // 0 - 500 ms phase 0
      //call BcpDebugIF.reportValues( 0,0,0,0,0,0,15,0x7d );
      if(TOS_NODE_ID == 24 )
        call RootControl.setRoot();
      else {
        if( call RootControl.isRoot() )
          call RootControl.unsetRoot(); 
      }
    }
    else if( testTime % 18 == 16 ){
      // 0 - 500 ms phase 0
      //call BcpDebugIF.reportValues( 0,0,0,0,0,0,16,0x7d );
      if(TOS_NODE_ID == 25 )
        call RootControl.setRoot();
      else {
        if( call RootControl.isRoot() )
          call RootControl.unsetRoot(); 
      }
    }
    else if( testTime % 18 == 17 ){
      // 0 - 500 ms phase 0
      //call BcpDebugIF.reportValues( 0,0,0,0,0,0,17,0x7d );
      if(TOS_NODE_ID == 26 )
        call RootControl.setRoot();
      else {
        if( call RootControl.isRoot() )
          call RootControl.unsetRoot(); 
      }
    }
   */
  }

  event void Timer.fired() {
    uint32_t r = call Random.rand32();
    //uint32_t r = MEAN_ADMIT_TIME;

    // Start the timer for the next event
    call Timer.startOneShot(r); // Wait random time 

    sendMessage(); 

  }
  
  event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len) {
    message_t *  messagePtr;
    UartPacket * uartPacketPtr;

    BCPMsg* myBCPMsg = (BCPMsg*)payload;
#if PROTO_BCP
    dbg("Root","Received a packet at the application layer from %d, data %d, seqNo %d, age %d, hopCount %d, txCount %u\n", call BcpPacket.getOrigin(msg), myBCPMsg->data, call BcpPacket.getSequenceNumber(msg), call BcpPacket.getDelay(msg), call BcpPacket.getHopCount(msg), call BcpPacket.getTxCount(msg));
    dbg("TotalDelay","Received <from,data,seqNo>=<%hhu,%u,%u,%u>@%u ms\n", call BcpPacket.getOrigin(msg), myBCPMsg->data, call BcpPacket.getSequenceNumber(msg), call BcpPacket.getDelay(msg), call Timer.getNow());
#else
    dbg("Root","Received a packet at the application layer from %d, data %d, seqNo %d, age %d, hopCount %d, txCount %u\n", call CtpPacket.getOrigin(msg), myBCPMsg->data, call CtpPacket.getSequenceNumber(msg), call CtpPacket.getDelay(msg), call CtpPacket.getHopCount(msg), call CtpPacket.getTxCount(msg));
    dbg("TotalDelay","Received <from,data,seqNo>=<%hhu,%u,%u,%u>@%u ms\n", call CtpPacket.getOrigin(msg), myBCPMsg->data, call CtpPacket.getSequenceNumber(msg), call CtpPacket.getDelay(msg), call Timer.getNow());
#endif   
    // Send a serial packet notifying of packet arrival
    messagePtr = call SafeSerialSendIF.getMessageBuffer();
    if( messagePtr == 0 )
      return msg;
    uartPacketPtr = (UartPacket *) call SafeSerialSendIF.getPayload(messagePtr, sizeof(UartPacket));
    if( uartPacketPtr == NULL )
      dbg("Error", "%s:uartPacketPtr is NULL! Packet size error?\n",__FUNCTION__);
    uartPacketPtr->type = 0x01;
    uartPacketPtr->field1 = myBCPMsg->data;
#ifdef PROTO_BCP    
    uartPacketPtr->field2 = call BcpPacket.getDelay(msg);
    uartPacketPtr->field4 = call BcpPacket.getTxCount(msg);
    uartPacketPtr->field6 = call BcpPacket.getBCPPktType(msg);
    uartPacketPtr->field7 = call BcpPacket.getHopCount(msg);
    uartPacketPtr->field8 = call BcpPacket.getOrigin(msg);
#else
    uartPacketPtr->field2 = call CtpPacket.getDelay(msg);
    uartPacketPtr->field4 = call CtpPacket.getTxCount(msg);
    uartPacketPtr->field6 = 0x01; // This is not a null packet (CTP never is)
    uartPacketPtr->field7 = call CtpPacket.getHopCount(msg);
    uartPacketPtr->field8 = call CtpPacket.getOrigin(msg);
#endif
    uartPacketPtr->time = call Timer.getNow();

    dbg("Serial","%s:generated a serial packet notifying of packet reception.\n", __FUNCTION__);
    call SafeSerialSendIF.queueMessageBuffer(messagePtr);
 
    return msg;
  }
  
  event void Send.sendDone(message_t *msg, error_t error)
  {
      dbg("Source","SendDone called.\n");      
  }

  event message_t* UartReceive.receive(message_t* bufPtr_p, void* payload_p,
                                       uint8_t len_p) {
    UartPacket* uartPacketPtr;
    message_t* messagePtr;

    if( len_p != sizeof(UartPacket) ) {return bufPtr_p;}
    uartPacketPtr = (UartPacket*)payload_p;
    if( uartPacketPtr->type == 0x01 ){ 
      // Start packet received, begin the Timer (first time give us 10 seconds to start)
      startTestTime = call Timer.getNow();
      call Timer.startOneShot(10000); // Wait 10 seconds to start 
      call sinkTimer.startPeriodic(1000); // Begin sink mobility recurring timer
    }
    else if( uartPacketPtr->type == 0x02 ){
      // Stop time Sync
      //call TimeSyncMode.setMode(TS_USER_MODE);
    }
    else if( uartPacketPtr->type == 0x03 ){
      // Stop traffic Timer and reset counter
      call Timer.stop();
      count = 0;
    }
    else if( uartPacketPtr->type == 0x04 ){
      // Start time Sync
      //call TimeSyncMode.setMode(TS_TIMER_MODE);
    }
    else if( uartPacketPtr->type == 0x05 ){
      // restart experiment, set command count to zero
      //call TimeSyncMode.setMode(TS_TIMER_MODE);
      call Timer.stop();
      commandCount = 0;
      commandCountAckCount = 0;
      count = 0;
    }

    if( commandCount != uartPacketPtr->field8 )
    {
      // New command, reset commandCountAckCount
      commandCountAckCount = 0;
    } else {
      commandCountAckCount++;
    }
 
    // After receiving a UartPacket, update commandCount and send a response
    commandCount = uartPacketPtr->field8;

    messagePtr = call SafeSerialSendIF.getMessageBuffer();
    if( messagePtr == 0 )
      return bufPtr_p;
    uartPacketPtr = (UartPacket *) call SafeSerialSendIF.getPayload(messagePtr, sizeof(UartPacket));
    if( uartPacketPtr == NULL )
      dbg("Error", "%s:uartPacketPtr is NULL! Packet size error?\n",__FUNCTION__);
    uartPacketPtr->type = 0x05;
    uartPacketPtr->field6 = commandCountAckCount;
    uartPacketPtr->field7 = call SafeSerialSendIF.droppedMessageCount();
    uartPacketPtr->field8 = commandCount;

    call SafeSerialSendIF.queueMessageBuffer(messagePtr);

    return bufPtr_p;
  }

#if PROTO_BCP
  command void BcpDebugIF.reportBackpressure(uint32_t dataQueueSize_p, uint32_t virtualQueueSize_p, uint16_t localTXCount_p, uint8_t origin_p, uint8_t originSeqNo_p, uint8_t reportSource_p)
  {
    message_t* messagePtr;
    UartPacket* uartPacketPtr;

    // Send a serial packet notifying of packet admission
    messagePtr = call SafeSerialSendIF.getMessageBuffer();
    if( messagePtr == 0 )
      return;
    uartPacketPtr = (UartPacket *) call SafeSerialSendIF.getPayload(messagePtr, sizeof(UartPacket));
    if( uartPacketPtr == NULL )
      dbg("Error", "%s:uartPacketPtr is NULL! Packet size error?\n",__FUNCTION__);
    uartPacketPtr->type = 0x03;
    uartPacketPtr->field1 = dataQueueSize_p;
    uartPacketPtr->field2 = virtualQueueSize_p;
    uartPacketPtr->field3 = localTXCount_p;
    uartPacketPtr->field6 = origin_p;
    uartPacketPtr->field7 = originSeqNo_p;
    uartPacketPtr->field8 = reportSource_p;


    uartPacketPtr->time = call Timer.getNow();

    call SafeSerialSendIF.queueMessageBuffer(messagePtr);
  }

  command void BcpDebugIF.reportError( uint8_t type_p )
  {
    message_t* messagePtr;
    UartPacket* uartPacketPtr;

    // Send a serial packet notifying of packet admission
    messagePtr = call SafeSerialSendIF.getMessageBuffer();
    if( messagePtr == 0 )
      return;
    uartPacketPtr = (UartPacket *) call SafeSerialSendIF.getPayload(messagePtr, sizeof(UartPacket));
    if( uartPacketPtr == NULL )
      dbg("Error", "%s:uartPacketPtr is NULL! Packet size error?\n",__FUNCTION__);
   
    uartPacketPtr->type = 0x0F;
    uartPacketPtr->field8 = type_p; 

    uartPacketPtr->time = call Timer.getNow();

    call SafeSerialSendIF.queueMessageBuffer(messagePtr);
  }

  command void BcpDebugIF.reportLinkRate(uint8_t neighbor_p, uint16_t previousLinkPacketTxTime_p, 
                                         uint16_t updateLinkPacketTxTime_p, uint16_t newLinkPacketTxTime_p,
                                         uint16_t latestLinkPacktLossEst_p)
  {
    message_t* messagePtr;
    UartPacket* uartPacketPtr;

    // Send a serial packet notifying of packet admission
    messagePtr = call SafeSerialSendIF.getMessageBuffer();
    if( messagePtr == 0 )
      return;
    uartPacketPtr = (UartPacket *) call SafeSerialSendIF.getPayload(messagePtr, sizeof(UartPacket));
    if( uartPacketPtr == NULL )
      dbg("Error", "%s:uartPacketPtr is NULL! Packet size error?\n",__FUNCTION__);
    uartPacketPtr->type = 0x04;
    uartPacketPtr->field1 = latestLinkPacktLossEst_p;
    uartPacketPtr->field2 = 0x0000;
    uartPacketPtr->field3 = 0x0000;
    uartPacketPtr->field4 = previousLinkPacketTxTime_p;
    uartPacketPtr->field5 = updateLinkPacketTxTime_p;
    uartPacketPtr->field6 = newLinkPacketTxTime_p;
    uartPacketPtr->field7 = 0x00;
    uartPacketPtr->field8 = neighbor_p;

    uartPacketPtr->time = call Timer.getNow();

    call SafeSerialSendIF.queueMessageBuffer(messagePtr);
  }

  /**
   * Used to debug
   */
  command void BcpDebugIF.reportValues(uint32_t field1_p, uint32_t field2_p, uint32_t field3_p, uint16_t field4_p,
                              uint16_t field5_p, uint16_t field6_p, uint8_t field7_p, uint8_t field8_p)
  {
    message_t* messagePtr;
    UartPacket* uartPacketPtr;

    // Send a serial packet notifying of packet admission
    messagePtr = call SafeSerialSendIF.getMessageBuffer();
    if( messagePtr == 0 )
      return;
    uartPacketPtr = (UartPacket *) call SafeSerialSendIF.getPayload(messagePtr, sizeof(UartPacket));
    if( uartPacketPtr == 0 )
      dbg("Error", "%s:uartPacketPtr is NULL! Packet size error?\n",__FUNCTION__);
    uartPacketPtr->type = 0x10;
    uartPacketPtr->field1 = field1_p;
    uartPacketPtr->field2 = field2_p;
    uartPacketPtr->field3 = field3_p;
    uartPacketPtr->field4 = field4_p;
    uartPacketPtr->field5 = field5_p;
    uartPacketPtr->field6 = field6_p;
    uartPacketPtr->field7 = field7_p;
    uartPacketPtr->field8 = field8_p;

    uartPacketPtr->time = call Timer.getNow();

    call SafeSerialSendIF.queueMessageBuffer(messagePtr);
 } 
#else
    /* Log the occurrence of an event of type type */
    command error_t CollectionDebug.logEvent(uint8_t type)
    {
      message_t* messagePtr;
      UartPacket* uartPacketPtr;
      if( type == NET_C_FE_SEND_QUEUE_FULL )
      {
        // Send a serial packet notifying of queue size
        messagePtr = call SafeSerialSendIF.getMessageBuffer();
        if( messagePtr == 0 )
          return FAIL;
        uartPacketPtr = (UartPacket *) call SafeSerialSendIF.getPayload(messagePtr, sizeof(UartPacket));
        if( uartPacketPtr == NULL )
          dbg("Error", "%s:uartPacketPtr is NULL! Packet size error?\n",__FUNCTION__);

        uartPacketPtr->type = 0x20;
        uartPacketPtr->field1 = 0x00000000;
        uartPacketPtr->field2 = 0x00000000;
        uartPacketPtr->field3 = 0x0000;
        uartPacketPtr->field4 = 0x0000;
        uartPacketPtr->field5 = 0x0000;
        uartPacketPtr->field6 = 0x00;
        uartPacketPtr->field7 = 0x00;
        uartPacketPtr->field8 = 0xD0;

        uartPacketPtr->time = call Timer.getNow();

        call SafeSerialSendIF.queueMessageBuffer(messagePtr);

      }
      return SUCCESS;
    }

    /* Log the occurrence of an event and a single parameter */
    command error_t CollectionDebug.logEventSimple(uint8_t type, uint16_t arg)
    {
      return SUCCESS;
    }

    /* Log the occurrence of an event and 3 16bit parameters */
    command error_t CollectionDebug.logEventDbg(uint8_t type, uint16_t arg1, uint16_t arg2, uint16_t arg3)
    {
      message_t* messagePtr;
      UartPacket* uartPacketPtr;
      if( type == NET_C_Q_SIZE || type == NET_C_TXCOUNT || NET_C_TREE_NEW_PARENT)
      {
        // Send a serial packet notifying of queue size
        messagePtr = call SafeSerialSendIF.getMessageBuffer();
        if( messagePtr == 0 )
          return FAIL;
        uartPacketPtr = (UartPacket *) call SafeSerialSendIF.getPayload(messagePtr, sizeof(UartPacket));
        if( uartPacketPtr == NULL )
          dbg("Error", "%s:uartPacketPtr is NULL! Packet size error?\n",__FUNCTION__);

        if( type == NET_C_Q_SIZE )
        {
          uartPacketPtr->type = 0x03;
        } 
        else if( type == NET_C_TREE_NEW_PARENT )
        {
          uartPacketPtr->type = 0x09;
        } else {
          uartPacketPtr->type = 0x07;
        } 
        uartPacketPtr->field1 = arg3;
        uartPacketPtr->field2 = arg2;
        uartPacketPtr->field3 = 0x0000;
        uartPacketPtr->field4 = 0x0000;
        uartPacketPtr->field5 = 0x0000;
        uartPacketPtr->field6 = 0x0000;
        uartPacketPtr->field7 = 0x0000;
        uartPacketPtr->field8 = 0x0000;

        uartPacketPtr->time = call Timer.getNow();

        call SafeSerialSendIF.queueMessageBuffer(messagePtr);

      }
      return SUCCESS;
    } 

    /* Log the occurrence of an event related to forwarding a message.
     * This is intended to allow following the same message as it goes from one
     * hop to the next
     */
    command error_t CollectionDebug.logEventMsg(uint8_t type, uint16_t msg, am_addr_t origin, am_addr_t node)
    {
    message_t* messagePtr;
    UartPacket* uartPacketPtr;
      if( type == NET_C_FE_SENT_MSG || type == NET_C_FE_FWD_MSG )
      {
        // Send a serial packet notifying of packet admission
        messagePtr = call SafeSerialSendIF.getMessageBuffer();
        if( messagePtr == 0 )
          return FAIL;
        uartPacketPtr = (UartPacket *) call SafeSerialSendIF.getPayload(messagePtr, sizeof(UartPacket));
        if( uartPacketPtr == NULL )
          dbg("Error", "%s:uartPacketPtr is NULL! Packet size error?\n",__FUNCTION__);
        uartPacketPtr->type = 0x04;
        uartPacketPtr->field1 = 0x0000;
        uartPacketPtr->field2 = 0x0000;
        uartPacketPtr->field3 = 0x0000;
        uartPacketPtr->field4 = 0x0000;
        uartPacketPtr->field5 = msg;
        uartPacketPtr->field6 = origin;
        uartPacketPtr->field7 = 0x00;
        uartPacketPtr->field8 = node;

        uartPacketPtr->time = call Timer.getNow();

        call SafeSerialSendIF.queueMessageBuffer(messagePtr);

      }
      return SUCCESS;
    }

    /* Log the occurrence of an event related to a route update message,
     * such as a node receiving a route, updating its own route information,
     * or looking at a particular entry in its routing table.
     */
    command error_t CollectionDebug.logEventRoute(uint8_t type, am_addr_t parent_p, uint8_t hopcount, uint16_t metric)
    {
      message_t* messagePtr;
      UartPacket* uartPacketPtr;
      if( 0 )//type == NET_C_TREE_SENT_BEACON && call Timer.isRunning())
      {
        // Send a serial packet notifying of Beacon
        messagePtr = call SafeSerialSendIF.getMessageBuffer();
        if( messagePtr == 0 )
          return FAIL;
        uartPacketPtr = (UartPacket *) call SafeSerialSendIF.getPayload(messagePtr, sizeof(UartPacket));
        if( uartPacketPtr == NULL )
          dbg("Error", "%s:uartPacketPtr is NULL! Packet size error?\n",__FUNCTION__);
        uartPacketPtr->type = 0x20;
        uartPacketPtr->field1 = 0x0000;
        uartPacketPtr->field2 = 0x0000;
        uartPacketPtr->field3 = 0x0000;
        uartPacketPtr->field4 = 0x0000;
        uartPacketPtr->field5 = metric;
        uartPacketPtr->field6 = hopcount;
        uartPacketPtr->field7 = parent_p;
        uartPacketPtr->field8 = type;

        uartPacketPtr->time = call Timer.getNow();

        call SafeSerialSendIF.queueMessageBuffer(messagePtr);

      }
      return SUCCESS;
    }

    event message_t* DataSnoop.receive(message_t* msg, void *payload, uint8_t len)
    { 
      uint16_t loopCount = 0;
      uint16_t loopSum = 0;

      // Checking to see whether CTP performance degrades under snoop usage.
      for( loopCount = 0; loopCount < 100; loopCount++ )
      {
        loopSum += loopCount;
      }

      return msg;
    } 
#endif
}
