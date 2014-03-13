includes result;
includes ECC;
includes sha1;

configuration testECDSA{
}

implementation {
  components MainC, testECDSAM, LedsC, RandomLfsrC, NNM, ECCC, ECDSAC;

  MainC.SoftwareInit -> RandomLfsrC.Init;
  testECDSAM.Boot -> MainC.Boot;

  components new TimerMilliC(), LocalTimeMilliC;

  testECDSAM.myTimer -> TimerMilliC;
  testECDSAM.LocalTime -> LocalTimeMilliC;
  testECDSAM.Random -> RandomLfsrC;
  testECDSAM.Leds -> LedsC;

  components SerialActiveMessageC as Serial;

  testECDSAM.PubKeyMsg -> Serial.AMSend[AM_PUBLIC_KEY_MSG];
  testECDSAM.PriKeyMsg -> Serial.AMSend[AM_PRIVATE_KEY_MSG];
  testECDSAM.PacketMsg -> Serial.AMSend[AM_PACKET_MSG];
  testECDSAM.TimeMsg -> Serial.AMSend[AM_TIME_MSG];
  testECDSAM.SerialControl -> Serial;

  testECDSAM.NN -> NNM.NN;
  testECDSAM.ECC -> ECCC.ECC;
  testECDSAM.ECDSA -> ECDSAC;



}

