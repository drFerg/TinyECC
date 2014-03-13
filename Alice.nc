includes result;
includes ECC;
includes sha1;

configuration Alice{
}

implementation {
  components MainC, AliceM, LedsC, RandomLfsrC, ActiveMessageC, NNM, ECCC, ECDSAC;

  MainC.SoftwareInit -> RandomLfsrC.Init;
  AliceM.Boot -> MainC.Boot;

  components new TimerMilliC();
  AliceM.myTimer -> TimerMilliC;
  AliceM.Random -> RandomLfsrC;
  AliceM.Leds -> LedsC;

  AliceM.AMControl -> ActiveMessageC;
  AliceM.PacketMsg -> ActiveMessageC.AMSend[AM_PACKET_MSG];

  AliceM.NN -> NNM.NN;
  AliceM.ECC -> ECCC.ECC;
  AliceM.ECDSA -> ECDSAC;

}
