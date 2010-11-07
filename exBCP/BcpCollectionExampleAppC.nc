#include "BcpCollectionExample.h"

configuration BcpCollectionExampleAppC{}
implementation{
  components BcpCollectionExampleC, MainC, LedsC, ActiveMessageC;
  components CC2420CsmaC as CsmaC;
#if PROTO_BCP
  components BcpC;
  components BcpRateControllerC as RateControl;
#else
  components CtpP;
  components new CollectionSenderC(0x0);
#endif
  components new exponentialRandomC(MEAN_ADMIT_TIME) as RandomC;
//  components new paretoRandomC(3,2,333) as RandomC;
  components new TimerMilliC();
  components new TimerMilliC() as sinkTimer;
  components new SafeSerialSendC(UART_QUEUE_SIZE, AM_UARTPACKET) as SafeSerialSend;
// commented by Xinchao Liu
//  components CC2420ActiveMessageC as LPLProvider;
//  components TimeSyncC;

  BcpCollectionExampleC.Boot             -> MainC.Boot;
  BcpCollectionExampleC.RadioControl     -> ActiveMessageC.SplitControl;
  BcpCollectionExampleC.Leds             -> LedsC.Leds;
  BcpCollectionExampleC.Timer            -> TimerMilliC.Timer;
  BcpCollectionExampleC.sinkTimer        -> sinkTimer.Timer;

#if PROTO_BCP
  // Wire Rate Control to Send interface of BCP
  BcpCollectionExampleC.BcpDebugIF	 <- RateControl.BcpDebugIF;
  BcpC.BcpDebugIF                        -> BcpCollectionExampleC.BcpDebugIF;
  //RateControl.BcpDebugIF		 -> BcpC.BcpDebugIF;
  BcpC.BcpRateControlIF			 -> RateControl.BcpRateControlIF;
  // Add Rate Control by Xinchao Liu
  RateControl.BcpCongestionIF		 -> BcpC.BcpCongestionIF;
  RateControl.SubSend                    -> BcpC.Send;
  RateControl.subPacket                  -> BcpC.Packet;
  RateControl.getBackpressure		 -> BcpC.getBackpressure;
  
  BcpCollectionExampleC.ProtoControl     -> BcpC.StdControl;
  BcpCollectionExampleC.RootControl      -> BcpC.RootControl;
  BcpCollectionExampleC.Receive          -> BcpC.Receive;
  // BcpCollectionExampleC.Send             -> BcpC.Send;
  BcpCollectionExampleC.Send             -> RateControl.Send;
  // Packet formation interfaces
  BcpCollectionExampleC.Packet           -> BcpC.Packet;
  BcpCollectionExampleC.BcpPacket        -> BcpC.BcpPacket;
#else
  CtpP.CollectionDebug                   -> BcpCollectionExampleC.CollectionDebug;

  BcpCollectionExampleC.ProtoControl     -> CtpP.StdControl;
  BcpCollectionExampleC.RootControl      -> CtpP.RootControl;
  BcpCollectionExampleC.Receive          -> CtpP.Receive[0x0];
  BcpCollectionExampleC.Send             -> CollectionSenderC.Send;

  // Packet formation interfaces
  BcpCollectionExampleC.Packet           -> CollectionSenderC.Packet;
  BcpCollectionExampleC.CtpPacket        -> CtpP.CtpPacket;
  BcpCollectionExampleC.DataSnoop        -> CtpP.Snoop[0x0];
#endif

  BcpCollectionExampleC.Random           -> RandomC; 
  BcpCollectionExampleC.SafeSerialSendIF -> SafeSerialSend.SafeSerialSendIF;
  BcpCollectionExampleC.UartReceive      -> SafeSerialSend.UartReceive;
  BcpCollectionExampleC.SerialControl    -> SafeSerialSend.StdControl;
//  BcpCollectionExampleC.GlobalTime       -> TimeSyncC.GlobalTime;
//  BcpCollectionExampleC.TimeInit         -> TimeSyncC.Init;
//  BcpCollectionExampleC.TimeStdControl   -> TimeSyncC.StdControl;
//  BcpCollectionExampleC.TimeSyncMode     -> TimeSyncC.TimeSyncMode;

//  TimeSyncC.Boot                         -> MainC.Boot; 
 
  // Used to collect address information
  BcpCollectionExampleC.AMPacket         -> ActiveMessageC.AMPacket;
  //Commented by Xinchao Liu
  //BcpCollectionExampleC.LPL              -> LPLProvider;
  BcpCollectionExampleC.csmaControl      -> CsmaC;
}
