includes ECIES;
includes CAPublicKey;

#ifdef TEST_VECTOR
#define MSG_LEN 20
#else
#define MSG_LEN 4
#endif

#define MAX_M_LEN 4
#define HMAC_LEN 20

#define MAX_ROUNDS 10

module testECIESM{
  uses{
    interface Boot;
    interface NN;
    interface ECC;
    interface ECIES;
    interface Timer<TMilli> as myTimer;
    interface LocalTime<TMilli>;
    interface Random;
    interface Leds;
    interface AMSend as PubKeyMsg;
    interface AMSend as PriKeyMsg;
    interface AMSend as Uint8Msg;
    interface AMSend as TimeMsg;
    interface SplitControl as SerialControl;
  }
}

implementation {
  message_t report;
  Point PublicKey;
  NN_DIGIT PrivateKey[NUMWORDS] = {0xbf3d, 0x27bd, 0x26a3, 0xa2d7, 0x1225, 0x2cc1, 0x7899, 0xd02d, 0x914c, 0x1382};
  uint32_t t;
  uint8_t M[MAX_M_LEN];
  int M_len;
  uint8_t C[KEYDIGITS*NN_DIGIT_LEN + 1 + MAX_M_LEN + HMAC_LEN];
  int C_len;
  uint8_t dM[MAX_M_LEN];
  int round_index = 1;
  uint8_t type;
  uint32_t m = 42;

  //generate message and init ecc module
  void init_data(){
    int i;
    uint32_t time_a, time_b;
    uint8_msg *pMsg;

    t = 0;
    type = 0;

    //init private key
    //memset(PrivateKey, 0, NUMWORDS*NN_DIGIT_LEN);
    //init public key
    memset(PublicKey.x, 0, NUMWORDS*NN_DIGIT_LEN);
    memset(PublicKey.y, 0, NUMWORDS*NN_DIGIT_LEN);

#ifdef TEST_VECTOR
    M[0] = 0x61;
    M[1] = 0x62;
    M[2] = 0x63;
    M[3] = 0x64;
    M[4] = 0x65;
    M[5] = 0x66;
    M[6] = 0x67;
    M[7] = 0x68;
    M[8] = 0x69;
    M[9] = 0x6A;
    M[10] = 0x6B;
    M[11] = 0x6C;
    M[12] = 0x6D;
    M[13] = 0x6E;
    M[14] = 0x6F;
    M[15] = 0x70;
    M[16] = 0x71;
    M[17] = 0x72;
    M[18] = 0x73;
    M[19] = 0x74;
    M_len = 20;
#else
    for (i=0; i<MAX_M_LEN; i++){
      M[i] = call Random.rand16();
    }
    M_len = MSG_LEN;
#endif

    time_a = call LocalTime.get();

    call ECC.init();

    time_b = call LocalTime.get();

    t = time_b - time_a;
    memcpy(M, &m, 4);
    pMsg = (uint8_msg *)report.data;
    pMsg->len = M_len;
    memcpy(pMsg->content, M, M_len);
    call Uint8Msg.send(1, &report, sizeof(uint8_msg));

  }

  //generate private key
  void V_PrivateKey(){
    private_key_msg *pPrivateKey;

#ifdef TEST_VECTOR  //TEST_VECTOR
#ifdef EIGHT_BIT_PROCESSOR
    PrivateKey[20] = 0x0;
    PrivateKey[19] = 0x45;
    PrivateKey[18] = 0xFB;
    PrivateKey[17] = 0x58;
    PrivateKey[16] = 0xA9;
    PrivateKey[15] = 0x2A;
    PrivateKey[14] = 0x17;
    PrivateKey[13] = 0xAD;
    PrivateKey[12] = 0x4B;
    PrivateKey[11] = 0x15;
    PrivateKey[10] = 0x10;
    PrivateKey[9] = 0x1C;
    PrivateKey[8] = 0x66;
    PrivateKey[7] = 0xE7;
    PrivateKey[6] = 0x4F;
    PrivateKey[5] = 0x27;
    PrivateKey[4] = 0x7E;
    PrivateKey[3] = 0x2B;
    PrivateKey[2] = 0x46;
    PrivateKey[1] = 0x08;
    PrivateKey[0] = 0x66;
#elif defined(SIXTEEN_BIT_PROCESSOR)
    PrivateKey[10] = 0x0;
    PrivateKey[9] = 0x45FB;
    PrivateKey[8] = 0x58A9;
    PrivateKey[7] = 0x2A17;
    PrivateKey[6] = 0xAD4B;
    PrivateKey[5] = 0x1510;
    PrivateKey[4] = 0x1C66;
    PrivateKey[3] = 0xE74F;
    PrivateKey[2] = 0x277E;
    PrivateKey[1] = 0x2B46;
    PrivateKey[0] = 0x0866;
#elif defined(THIRTYTWO_BIT_PROCESSOR)
    PrivateKey[5] = 0x0;
    PrivateKey[4] = 0x45FB58A9;
    PrivateKey[3] = 0x2A17AD4B;
    PrivateKey[2] = 0x15101C66;
    PrivateKey[1] = 0xE74F277E;
    PrivateKey[0] = 0x2B460866;
#endif


#else//random PrivateKey
    //call ECC.gen_private_key(PrivateKey);
    /*PrivateKey[10] = 0x0;
    PrivateKey[9] = 0x45FB;
    PrivateKey[8] = 0x58A9;
    PrivateKey[7] = 0x2A17;
    PrivateKey[6] = 0xAD4B;
    PrivateKey[5] = 0x1510;
    PrivateKey[4] = 0x1C66;
    PrivateKey[3] = 0xE74F;
    PrivateKey[2] = 0x277E;
    PrivateKey[1] = 0x2B46;
    PrivateKey[0] = 0x0866;*/
#endif  //end of test vector

    

    //report private key
    pPrivateKey = (private_key_msg *)report.data;
    pPrivateKey->len = KEYDIGITS*NN_DIGIT_LEN;
    call NN.Encode(pPrivateKey->d, KEYDIGITS*NN_DIGIT_LEN, PrivateKey, KEYDIGITS);
    call PriKeyMsg.send(1, &report, sizeof(private_key_msg));

  }


  void V_PublicKey(){
    uint32_t time_a, time_b;
    public_key_msg *pPublicKey;
    Point publicKey = { .x = {0x5d75, 0xa416, 0x94f6, 0x703e, 0x7f9e, 0xf511, 0x3315, 0x3b73, 0x7ca8, 0x442b},
                        .y = {0xbf3e, 0xeeef, 0x7517, 0x1505, 0x4f20, 0x9bae, 0x3426, 0x5b00, 0x377c, 0xac91}
                    };
    time_a = call LocalTime.get();

    //call ECC.gen_public_key(&PublicKey, PrivateKey);
    memcpy(PublicKey.x, (NN_DIGIT *)&publicKey.x, KEYDIGITS*NN_DIGIT_LEN);
    memcpy(PublicKey.y, (NN_DIGIT *)&publicKey.y, KEYDIGITS*NN_DIGIT_LEN);
    time_b = call LocalTime.get();

    t = time_b - time_a;

    pPublicKey = (public_key_msg *)report.data;
    pPublicKey->len = KEYDIGITS*NN_DIGIT_LEN;
    call NN.Encode(pPublicKey->x, KEYDIGITS*NN_DIGIT_LEN, PublicKey.x, KEYDIGITS);
    call NN.Encode(pPublicKey->y, KEYDIGITS*NN_DIGIT_LEN, PublicKey.y, KEYDIGITS);
    call PubKeyMsg.send(1, &report, sizeof(public_key_msg));
  }


  void U_encrypt(){
    uint32_t time_a, time_b;
    uint8_msg *pMsg;

    type = 2;

    time_a = call LocalTime.get();

    C_len = call ECIES.encrypt(C, KEYDIGITS*NN_DIGIT_LEN + 1 + M_len + HMAC_LEN, M, M_len, &PublicKey); 
    
    time_b = call LocalTime.get();

    t = time_b - time_a;

    pMsg = (uint8_msg *)report.data;
    pMsg->len = C_len;
    memcpy(pMsg->content, C, C_len);
    call Uint8Msg.send(1, &report, sizeof(uint8_msg));
  }


  void V_decrypt(){
    uint32_t time_a, time_b;
    int dM_len = MAX_M_LEN;
    uint8_msg *pMsg;

    type = 3;

    time_a = call LocalTime.get();

    dM_len = call ECIES.decrypt(dM, dM_len, C, C_len, PrivateKey); 
    
    time_b = call LocalTime.get();

    t = time_b - time_a;

    pMsg = (uint8_msg *)report.data;
    pMsg->len = dM_len;
    memcpy(pMsg->content, dM, dM_len);
    call Uint8Msg.send(1, &report, sizeof(uint8_msg));
     
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

  event void TimeMsg.sendDone(message_t* sent, error_t success) {
    if (type == 0){
      V_PrivateKey(); 
    }else if (type == 1){
      U_encrypt();
    }else if (type == 2){
      V_decrypt();
    }else if (type == 3){
      if(round_index < MAX_ROUNDS){
      	init_data();
      	round_index++;
      }
    }
  }

  event void PriKeyMsg.sendDone(message_t* sent, error_t success) {
    V_PublicKey();
  }

  event void PubKeyMsg.sendDone(message_t* sent, error_t success) {
    time_msg *pTime;

    type = 1;
    pTime = (time_msg *)report.data;
    pTime->type = 1;
    pTime->t = t;
    pTime->pass = 0;
    call TimeMsg.send(1, &report, sizeof(time_msg));
  }

  event void Uint8Msg.sendDone(message_t* sent, error_t success) {
    time_msg *pTime;

    pTime = (time_msg *)report.data;
    pTime->type = type;
    pTime->t = t;
    pTime->pass = 0;
    call TimeMsg.send(1, &report, sizeof(time_msg));
  }
}

