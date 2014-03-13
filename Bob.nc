includes result;
includes ECC;
includes sha1;

configuration Bob{
}

implementation {
  components MainC, BobM, LedsC, RandomLfsrC, ActiveMessageC, NNM, ECCC, ECDSAC;

  MainC.SoftwareInit -> RandomLfsrC.Init;
  BobM.Boot -> MainC.Boot;
  
  BobM.Random -> RandomLfsrC;
  BobM.Leds -> LedsC;

  BobM.AMControl -> ActiveMessageC;
  BobM.PacketMsg -> ActiveMessageC.Receive[AM_PACKET_MSG];

  BobM.NN -> NNM.NN;
  BobM.ECC -> ECCC.ECC;
  BobM.ECDSA -> ECDSAC;

}
