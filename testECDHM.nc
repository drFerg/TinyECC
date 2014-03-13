#ifdef TEST_VECTOR
#define MSG_LEN 3
#else
#define MSG_LEN 52
#endif

#define MAX_ROUNDS 10

module testECDHM{
  uses{
    interface Boot;
    interface NN;
    interface ECC;
    interface ECDH;
    interface Timer<TMilli> as myTimer;
    interface LocalTime<TMilli>;
    interface Random;
    interface Leds;
    interface AMSend as PubKeyMsg;
    interface AMSend as PriKeyMsg;
    interface AMSend as TimeMsg;
    interface AMSend as SndSecret;
    interface SplitControl as SerialControl;
  }
}

implementation {
  message_t report;
  Point PublicKey1, PublicKey2;
  NN_DIGIT PrivateKey1[NUMWORDS], PrivateKey2[NUMWORDS];
  uint8_t Secret1[KEYDIGITS*NN_DIGIT_LEN], Secret2[KEYDIGITS*NN_DIGIT_LEN];
  uint8_t type;
  uint32_t t;
  uint8_t id;
  int round_index = 1;

  void init_data();
  void ecdh_init();
  void gen_PrivateKey1();
  void gen_PrivateKey2();
  void gen_PublicKey1();
  void gen_PublicKey2();
  void establish1();
  void establish2();

  void init_data(){
    uint32_t time_a, time_b;
    time_msg *pTime;

    type = 0;
    t = 0;

    //init private key
    memset(PrivateKey1, 0, NUMWORDS*NN_DIGIT_LEN);
    memset(PrivateKey2, 0, NUMWORDS*NN_DIGIT_LEN);
    //init public key
    memset(PublicKey1.x, 0, NUMWORDS*NN_DIGIT_LEN);
    memset(PublicKey1.y, 0, NUMWORDS*NN_DIGIT_LEN);
    memset(PublicKey2.x, 0, NUMWORDS*NN_DIGIT_LEN);
    memset(PublicKey2.y, 0, NUMWORDS*NN_DIGIT_LEN);

    time_a = call LocalTime.get();

    call ECDH.init();

    time_b = call LocalTime.get();

    t = time_b - time_a;

    pTime = (time_msg *)report.data;
    pTime->type = 0;
    pTime->t = t;
    pTime->pass = 0;
    call TimeMsg.send(1, &report, sizeof(time_msg));
  }

  void gen_PrivateKey1(){
    private_key_msg *pPrivateKey;

#ifdef TEST_VECTOR  //TEST_VECTOR
#ifdef EIGHT_BIT_PROCESSOR
    PrivateKey1[20] = 0x0;
    PrivateKey1[19] = 0xAA;
    PrivateKey1[18] = 0x37;
    PrivateKey1[17] = 0x4F;
    PrivateKey1[16] = 0xFC;
    PrivateKey1[15] = 0x3C;
    PrivateKey1[14] = 0xE1;
    PrivateKey1[13] = 0x44;
    PrivateKey1[12] = 0xE6;
    PrivateKey1[11] = 0xB0;
    PrivateKey1[10] = 0x73;
    PrivateKey1[9] = 0x30;
    PrivateKey1[8] = 0x79;
    PrivateKey1[7] = 0x72;
    PrivateKey1[6] = 0xCB;
    PrivateKey1[5] = 0x6D;
    PrivateKey1[4] = 0x57;
    PrivateKey1[3] = 0xB2;
    PrivateKey1[2] = 0xA4;
    PrivateKey1[1] = 0xE9;
    PrivateKey1[0] = 0x82;
#elif defined(SIXTEEN_BIT_PROCESSOR)
    PrivateKey1[10] = 0x0;
    PrivateKey1[9] = 0xAA37;
    PrivateKey1[8] = 0x4FFC;
    PrivateKey1[7] = 0x3CE1;
    PrivateKey1[6] = 0x44E6;
    PrivateKey1[5] = 0xB073;
    PrivateKey1[4] = 0x3079;
    PrivateKey1[3] = 0x72CB;
    PrivateKey1[2] = 0x6D57;
    PrivateKey1[1] = 0xB2A4;
    PrivateKey1[0] = 0xE982;
#elif defined(THIRTYTWO_BIT_PROCESSOR)
    PrivateKey1[5] = 0x0;
    PrivateKey1[4] = 0xAA374FFC;
    PrivateKey1[3] = 0x3CE144E6;
    PrivateKey1[2] = 0xB0733079;
    PrivateKey1[1] = 0x72CB6D57;
    PrivateKey1[0] = 0xB2A4E982;
#endif
    
#else//random PrivateKey1
    call ECC.gen_private_key(PrivateKey1);
#endif  //end of test vector
    id = 1;
    //report private key
    pPrivateKey = (private_key_msg *)report.data;
    pPrivateKey->len = KEYDIGITS*NN_DIGIT_LEN;
    pPrivateKey->id = 1;
    call NN.Encode(pPrivateKey->d, KEYDIGITS*NN_DIGIT_LEN, PrivateKey1, KEYDIGITS);
    call PriKeyMsg.send(1, &report, sizeof(private_key_msg));
  }

  void gen_PublicKey1(){
    uint32_t time_a, time_b;
    public_key_msg *pPublicKey;

    time_a = call LocalTime.get();

    call ECC.gen_public_key(&PublicKey1, PrivateKey1);

    time_b = call LocalTime.get();

    t = time_b - time_a;

    id = 1;
    pPublicKey = (public_key_msg *)report.data;
    pPublicKey->len = KEYDIGITS*NN_DIGIT_LEN;
    pPublicKey->id = 1;
    call NN.Encode(pPublicKey->x, KEYDIGITS*NN_DIGIT_LEN, PublicKey1.x, KEYDIGITS);
    call NN.Encode(pPublicKey->y, KEYDIGITS*NN_DIGIT_LEN, PublicKey1.y, KEYDIGITS);
    call PubKeyMsg.send(1, &report, sizeof(public_key_msg));
  }

  void gen_PrivateKey2(){
    private_key_msg *pPrivateKey;
    
#ifdef TEST_VECTOR
#ifdef EIGHT_BIT_PROCESSOR
    PrivateKey2[20] = 0x0;
    PrivateKey2[19] = 0x45;
    PrivateKey2[18] = 0xFB;
    PrivateKey2[17] = 0x58;
    PrivateKey2[16] = 0xA9;
    PrivateKey2[15] = 0x2A;
    PrivateKey2[14] = 0x17;
    PrivateKey2[13] = 0xAD;
    PrivateKey2[12] = 0x4B;
    PrivateKey2[11] = 0x15;
    PrivateKey2[10] = 0x10;
    PrivateKey2[9] = 0x1C;
    PrivateKey2[8] = 0x66;
    PrivateKey2[7] = 0xE7;
    PrivateKey2[6] = 0x4F;
    PrivateKey2[5] = 0x27;
    PrivateKey2[4] = 0x7E; 
    PrivateKey2[3] = 0x2B;
    PrivateKey2[2] = 0x46;
    PrivateKey2[1] = 0x08;
    PrivateKey2[0] = 0x66;
#elif defined(SIXTEEN_BIT_PROCESSOR)
    PrivateKey2[10] = 0x0;
    PrivateKey2[9] = 0x45FB;
    PrivateKey2[8] = 0x58A9;
    PrivateKey2[7] = 0x2A17;
    PrivateKey2[6] = 0xAD4B;
    PrivateKey2[5] = 0x1510;
    PrivateKey2[4] = 0x1C66;
    PrivateKey2[3] = 0xE74F;
    PrivateKey2[2] = 0x277E; 
    PrivateKey2[1] = 0x2B46;
    PrivateKey2[0] = 0x0866;
#elif defined(THIRTYTWO_BIT_PROCESSOR)
    PrivateKey2[5] = 0x0;
    PrivateKey2[4] = 0x45FB58A9;
    PrivateKey2[3] = 0x2A17AD4B;
    PrivateKey2[2] = 0x15101C66;
    PrivateKey2[1] = 0xE74F277E; 
    PrivateKey2[0] = 0x2B460866;
#endif
#else
    call ECC.gen_private_key(PrivateKey2);      
#endif

    id = 2;
    //report private key
    pPrivateKey = (private_key_msg *)report.data;
    pPrivateKey->len = KEYDIGITS*NN_DIGIT_LEN;
    pPrivateKey->id = 2;
    call NN.Encode(pPrivateKey->d, KEYDIGITS*NN_DIGIT_LEN, PrivateKey2, KEYDIGITS);
    call PriKeyMsg.send(1, &report, sizeof(private_key_msg));

  }

  void gen_PublicKey2(){
    uint32_t time_a, time_b;
    public_key_msg *pPublicKey;


    time_a = call LocalTime.get();

    call ECC.gen_public_key(&PublicKey2, PrivateKey2);

    time_b = call LocalTime.get();

    t = time_b - time_a;

    id = 2;
    pPublicKey = (public_key_msg *)report.data;
    pPublicKey->len = KEYDIGITS*NN_DIGIT_LEN;
    pPublicKey->id = 2;
    call NN.Encode(pPublicKey->x, KEYDIGITS*NN_DIGIT_LEN, PublicKey2.x, KEYDIGITS);
    call NN.Encode(pPublicKey->y, KEYDIGITS*NN_DIGIT_LEN, PublicKey2.y, KEYDIGITS);
    call PubKeyMsg.send(1, &report, sizeof(public_key_msg));
  }

  void establish1(){
    uint32_t time_a, time_b;
    ecdh_key_msg *pSecret;

    time_a = call LocalTime.get();

    call ECDH.key_agree(Secret1, KEYDIGITS*NN_DIGIT_LEN, &PublicKey2, PrivateKey1);
    
    time_b = call LocalTime.get();

    t = time_b - time_a;

    id = 1;
    pSecret = (ecdh_key_msg *)report.data;
    pSecret->len = KEYDIGITS*NN_DIGIT_LEN;
    pSecret->id = 1;
    memcpy(pSecret->k, Secret1, KEYDIGITS*NN_DIGIT_LEN);
    call SndSecret.send(1, &report, sizeof(ecdh_key_msg));
    
  }

  void establish2(){
    uint32_t time_a, time_b;
    ecdh_key_msg *pSecret;

    time_a = call LocalTime.get();

    call ECDH.key_agree(Secret2, KEYDIGITS*NN_DIGIT_LEN, &PublicKey1, PrivateKey2);
    
    time_b = call LocalTime.get();

    t = time_b - time_a;

    id = 2;
    pSecret = (ecdh_key_msg *)report.data;
    pSecret->len = KEYDIGITS*NN_DIGIT_LEN;
    pSecret->id = 2;
    memcpy(pSecret->k, Secret2, KEYDIGITS*NN_DIGIT_LEN);
    call SndSecret.send(1, &report, sizeof(ecdh_key_msg));
  }

  event void Boot.booted(){
    call SerialControl.start();
  }

  event void SerialControl.startDone(error_t e) {
    call myTimer.startOneShot(5000);
  }
  
  event void SerialControl.stopDone(error_t e) {
  }
  
  event void myTimer.fired(){
    init_data();
  }

  event void PubKeyMsg.sendDone(message_t* sent, error_t success) {
    time_msg *pTime;

    if (id == 1)
      type = 1;
    else
      type = 2;

    pTime = (time_msg *)report.data;
    pTime->type = type;
    pTime->id = id;
    pTime->t = t;
    pTime->pass = 0;
    call TimeMsg.send(1, &report, sizeof(time_msg));
  }

  event void SndSecret.sendDone(message_t* sent, error_t error) {
    time_msg *pTime;

    if (id == 1)
      type = 3;
    else
      type = 4;

    pTime = (time_msg *)report.data;
    pTime->type = type;
    pTime->id = id;
    pTime->t = t;
    call TimeMsg.send(1, &report, sizeof(time_msg));
  }


  event void PriKeyMsg.sendDone(message_t* sent, error_t error) {
    if (id == 1)
      gen_PublicKey1();
    else
      gen_PublicKey2();
  }

  event void TimeMsg.sendDone(message_t* sent, error_t error) {
    if (type == 0){
      gen_PrivateKey1(); 
    }else if (type == 1){
      gen_PrivateKey2();
    }else if (type == 2){
      establish1();
    }else if (type == 3){
      establish2();
    }else if (type == 4){
      if(round_index < MAX_ROUNDS){
	init_data();
	round_index++;
      }
    }
  }
}

