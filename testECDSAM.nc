#ifdef TEST_VECTOR
#define MSG_LEN 3
#else
#define MSG_LEN 52
#endif
includes CAPublicKey;
#define MAX_ROUNDS 10

module testECDSAM{
  uses{
    interface Boot;
    interface NN;
    interface ECC;
    interface ECDSA;
    interface Timer<TMilli> as myTimer;
    interface LocalTime<TMilli>;
    interface Random;
    interface Leds;
    interface AMSend as PubKeyMsg;
    interface AMSend as PriKeyMsg;
    interface AMSend as PacketMsg;
    interface AMSend as TimeMsg;
    interface SplitControl as SerialControl;
  }
}

implementation {
  message_t report;
  Point PublicKey;
  NN_DIGIT ClientPrivateKey[NUMWORDS];
  NN_DIGIT CAPrivateKey[NUMWORDS];

  uint8_t message[MSG_LEN];
  NN_DIGIT r[NUMWORDS];
  NN_DIGIT s[NUMWORDS];
  uint8_t type;
  uint32_t t;
  uint8_t pass;
  uint16_t round_index;

  void init_data();
  void gen_PrivateKey();
  void ecc_init();
  void gen_PublicKey();
  void ecdsa_init();
  void sign();
  void verify();


  void init_data(){



#ifndef TEST_VECTOR
    uint8_t j;
#endif

    pass = 0;
    t = 0;

    //init message
    memset(message, 0, MSG_LEN);
    //init private key
    memset(ClientPrivateKey, 0, NUMWORDS*NN_DIGIT_LEN);
    //init public key
    memset(PublicKey.x, 0, NUMWORDS*NN_DIGIT_LEN);
    memset(PublicKey.y, 0, NUMWORDS*NN_DIGIT_LEN);
    //init signature
    memset(r, 0, NUMWORDS*NN_DIGIT_LEN);
    memset(s, 0, NUMWORDS*NN_DIGIT_LEN);

#ifndef TEST_VECTOR  
    //randomly generate the message
    for (j=0; j<MSG_LEN; j++){
      message[j] = (uint8_t) call Random.rand16();
    }
#else  //only for secp160r1
    message[0] = 0x61;
    message[1] = 0x62;
    message[2] = 0x63;
#endif

    call ECC.init();
    
    gen_PrivateKey();
  }

  void gen_PrivateKey(){
    private_key_msg *pPrivateKey;

#ifndef TEST_VECTOR  //random private key

    call ECC.gen_private_key(ClientPrivateKey);

#else  //only for test vector of secp160r1

#ifdef EIGHT_BIT_PROCESSOR
    PrivateKey[20] = 0x0;
    PrivateKey[19] = 0xAA;
    PrivateKey[18] = 0x37;
    PrivateKey[17] = 0x4F;
    PrivateKey[16] = 0xFC;
    PrivateKey[15] = 0x3C;
    PrivateKey[14] = 0xE1;
    PrivateKey[13] = 0x44;
    PrivateKey[12] = 0xE6;
    PrivateKey[11] = 0xB0;
    PrivateKey[10] = 0x73;
    PrivateKey[9] = 0x30;
    PrivateKey[8] = 0x79;
    PrivateKey[7] = 0x72;
    PrivateKey[6] = 0xCB;
    PrivateKey[5] = 0x6D;
    PrivateKey[4] = 0x57;
    PrivateKey[3] = 0xB2;
    PrivateKey[2] = 0xA4;
    PrivateKey[1] = 0xE9;
    PrivateKey[0] = 0x82;
#else
#ifdef SIXTEEN_BIT_PROCESSOR
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
#else
#ifdef THIRTYTWO_BIT_PROCESSOR
    PrivateKey[5] = 0x0;
    PrivateKey[4] = 0xAA374FFC;
    PrivateKey[3] = 0x3CE144E6;
    PrivateKey[2] = 0xB0733079;
    PrivateKey[1] = 0x72CB6D57;
    PrivateKey[0] = 0xB2A4E982;
#endif  //end of 32-bit
#endif  //end of 16-bit
#endif  //end of 8-bit
    
#endif  //end of test vector
    
    //report private key
    pPrivateKey = (private_key_msg *)report.data;
    pPrivateKey->len = KEYDIGITS*NN_DIGIT_LEN;
    call NN.Encode(pPrivateKey->d, KEYDIGITS*NN_DIGIT_LEN, ClientPrivateKey, KEYDIGITS);
    call PriKeyMsg.send(1, &report, sizeof(private_key_msg));
  }

  void ecc_init(){
    uint32_t time_a, time_b;
    time_msg *pTime;

    type = 0;

    time_a = call LocalTime.get();

    call ECC.init();

    time_b = call LocalTime.get();

    t = time_b - time_a;

    pTime = (time_msg *)report.data;
    pTime->type = 0;
    pTime->t = t;
    pTime->pass = 0;
    call TimeMsg.send(1, &report, sizeof(time_msg));
  }

  void gen_PublicKey(){
    uint32_t time_a, time_b;
    public_key_msg *pPublicKey;

    type = 1;

    time_a = call LocalTime.get();

    //call ECC.win_mul_base(&PublicKey, PrivateKey);
    //call ECC.gen_public_key(&PublicKey, PrivateKey);
    memcpy(PublicKey.x, (NN_DIGIT *)&CA_PubKey_x, KEYDIGITS*NN_DIGIT_LEN);
    memcpy(PublicKey.y, (NN_DIGIT *)&CA_PubKey_y, KEYDIGITS*NN_DIGIT_LEN);

    time_b = call LocalTime.get();

    t = time_b - time_a;

    pPublicKey = (public_key_msg *)report.data;
    pPublicKey->len = KEYDIGITS*NN_DIGIT_LEN;
    call NN.Encode(pPublicKey->x, KEYDIGITS*NN_DIGIT_LEN, PublicKey.x, KEYDIGITS);
    call NN.Encode(pPublicKey->y, KEYDIGITS*NN_DIGIT_LEN, PublicKey.y, KEYDIGITS);
    call PubKeyMsg.send(1, &report, sizeof(public_key_msg));
    
  }

  void ecdsa_init(){
    uint32_t time_a, time_b;
    time_msg *pTime;

    type = 2;

    time_a = call LocalTime.get();

    call ECDSA.init(&PublicKey); 

    time_b = call LocalTime.get();

    t = time_b - time_a;

    pTime = (time_msg *)report.data;
    pTime->type = 2;
    pTime->t = t;
    pTime->pass = 0;
    call TimeMsg.send(1, &report, sizeof(time_msg));
     
  }

  void sign(){
    uint32_t time_a, time_b;
    packet_msg *pPacket;

    type = 3;

    time_a = call LocalTime.get();

    call ECDSA.sign(message, MSG_LEN, r, s, ClientPrivateKey);;

    time_b = call LocalTime.get();

    t = time_b - time_a;

    pPacket = (packet_msg *)report.data;
    pPacket->c_len = MSG_LEN;
    memcpy(pPacket->content, message, MSG_LEN);
    pPacket->r_len = KEYDIGITS*NN_DIGIT_LEN;
    call NN.Encode(pPacket->r, KEYDIGITS*NN_DIGIT_LEN, r, KEYDIGITS);
    call NN.Encode(pPacket->s, KEYDIGITS*NN_DIGIT_LEN, s, KEYDIGITS);
    call PacketMsg.send(1, &report, sizeof(packet_msg));
  }

  void verify(){
    uint32_t time_a, time_b;
    time_msg *pTime;

    type = 4;

    time_a = call LocalTime.get();

    pass = call ECDSA.verify(message, MSG_LEN, r, s, &PublicKey);   

    time_b = call LocalTime.get();

    t = time_b - time_a;

    pTime = (time_msg *)report.data;
    pTime->type = 4;
    pTime->t = t;
    pTime->pass = pass;
    call TimeMsg.send(1, &report, sizeof(time_msg));
    if(pass == 1)
      call Leds.led0Toggle();
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
    round_index = 1;
    init_data();
  }

  event void PubKeyMsg.sendDone(message_t* sent, error_t error) {
    time_msg *pTime;

    type = 1;
    pTime = (time_msg *)report.data;
    pTime->type = 1;
    pTime->t = t;
    pTime->pass = 0;
    call TimeMsg.send(1, &report, sizeof(time_msg));
  }

  event void PriKeyMsg.sendDone(message_t* sent, error_t success) {
    ecc_init();
  }

  event void PacketMsg.sendDone(message_t* sent, error_t success) {
    time_msg *pTime;

    type = 3;
    pTime = (time_msg *)report.data;
    pTime->type = 3;
    pTime->t = t;
    pTime->pass = 0;
    call TimeMsg.send(1, &report, sizeof(time_msg));
  }

  event void TimeMsg.sendDone(message_t* sent, error_t success) {

    if (type == 0){
      //trace(DBG_USR1, "before gen_publicKey\n");
      gen_PublicKey(); 
    }else if (type == 1){
      //trace(DBG_USR1, "before ecdsa_init\n");
      ecdsa_init();
    }else if (type == 2){
      //trace(DBG_USR1, "before sign\n");
      sign();
    }else if (type == 3){
      //trace(DBG_USR1, "before verify\n");
      verify();
    }else if (type == 4){
      if(round_index < MAX_ROUNDS){
	init_data();
	round_index++;
      }
    }
  }

}

