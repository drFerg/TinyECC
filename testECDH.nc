includes result;
includes ECC;
includes sha1;

configuration testECDH{
}

implementation {
  components MainC, testECDHM, LedsC, RandomLfsrC, NNM, ECCC, ECDHC;
  
  MainC.SoftwareInit -> RandomLfsrC.Init;
  testECDHM.Boot -> MainC.Boot;

  components new TimerMilliC(), LocalTimeMilliC;

  testECDHM.myTimer -> TimerMilliC;
  testECDHM.LocalTime -> LocalTimeMilliC;
  testECDHM.Random -> RandomLfsrC;
  testECDHM.Leds -> LedsC;

  components SerialActiveMessageC as Serial;

  testECDHM.PubKeyMsg -> Serial.AMSend[AM_PUBLIC_KEY_MSG];
  testECDHM.PriKeyMsg -> Serial.AMSend[AM_PRIVATE_KEY_MSG];
  testECDHM.TimeMsg -> Serial.AMSend[AM_TIME_MSG];
  testECDHM.SndSecret -> Serial.AMSend[AM_ECDH_KEY_MSG];
  testECDHM.SerialControl -> Serial;

  testECDHM.NN -> NNM.NN;
  testECDHM.ECC -> ECCC.ECC;
  testECDHM.ECDH -> ECDHC;



}

