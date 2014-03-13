includes result;
includes ECC;
includes sha1;

configuration testECIES{
}

implementation {
  components MainC, testECIESM, LedsC, RandomLfsrC, NNM, ECCC, ECIESC;
  
  MainC.SoftwareInit -> RandomLfsrC.Init;
  testECIESM.Boot -> MainC.Boot;
  
  components new TimerMilliC(), LocalTimeMilliC;

  testECIESM.myTimer -> TimerMilliC;
  testECIESM.LocalTime -> LocalTimeMilliC;
  testECIESM.Random -> RandomLfsrC;
  testECIESM.Leds -> LedsC;

  components SerialActiveMessageC as Serial;

  testECIESM.PubKeyMsg -> Serial.AMSend[AM_PUBLIC_KEY_MSG];
  testECIESM.PriKeyMsg -> Serial.AMSend[AM_PRIVATE_KEY_MSG];
  testECIESM.Uint8Msg -> Serial.AMSend[AM_UINT8_MSG];
  testECIESM.TimeMsg -> Serial.AMSend[AM_TIME_MSG];
  testECIESM.SerialControl -> Serial;

  testECIESM.NN -> NNM.NN;
  testECIESM.ECC -> ECCC.ECC;
  testECIESM.ECIES -> ECIESC;



}

