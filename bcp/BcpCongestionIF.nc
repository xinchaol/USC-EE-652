interface BcpCongestionIF {
  event void congestionNotify();
  event void noCongestionNotify();
  event void updateRateControlInfo(uint16_t reVal, uint16_t seqNo);
}