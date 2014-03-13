includes ECC;
includes PrintfUART;

configuration testASM{
}

implementation {
  components Main, testASMM, LedsC, TimerC, RandomLFSR, NNM;
#ifdef PLATFORM_MICAZ
  components SysTimeC;
#endif //PLATFORM_MICAZ

#ifdef IMOTE2
  components SysTimeC;
  #ifdef MANUALFREQ
	components DVFSC, PMICC;
  #endif
#endif
  
  Main.StdControl -> TimerC;
  Main.StdControl -> testASMM;
  
  testASMM.myTimer -> TimerC.Timer[unique("Timer")];
  testASMM.Random -> RandomLFSR;
  testASMM.Leds -> LedsC;
  testASMM.NN -> NNM;

#ifdef PLATFORM_MICAZ
  testASMM.SysTime -> SysTimeC;
  //testASMM.Serial -> SerialM;
  //NNM.Serial -> SerialM;
  //SerialM.HPLUART -> HPLUARTC;
#endif

#ifdef TELOSB
  testASMM.LocalTime -> TimerC;
#endif

#ifdef PLATFORM_IMOTE2
  testASMM.SysTime64 -> SysTimeC;
  Main.StdControl -> SysTimeC;
#ifdef MANUALFREQ
  testASMM.DVFS -> DVFSC;
  testASMM.PMIC -> PMICC;
  Main.StdControl -> PMICC;
#endif
#endif


}

