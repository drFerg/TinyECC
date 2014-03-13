#define MSG_LEN 52

#define MAX_ROUNDS 20

module AliceM{
  uses{
    interface Boot;
    interface NN;
    interface ECC;
    interface ECDSA;
    interface Timer<TMilli> as myTimer;
    interface Random;
    interface Leds;
    interface AMSend as PacketMsg;
    interface SplitControl as AMControl;
  }
}

implementation {
  message_t report;
  NN_DIGIT PrivateKey[NUMWORDS];
  Point PublicKey;
  uint8_t message[MSG_LEN];
  NN_DIGIT r[NUMWORDS];
  NN_DIGIT s[NUMWORDS];

  void init_data();
  void sign();

  void init_data(){

    //init message
    memset(message, 0, MSG_LEN);
    //init private key
    memset(PrivateKey, 0, NUMWORDS*NN_DIGIT_LEN);
    //init public key
    memset(PublicKey.x, 0, NUMWORDS*NN_DIGIT_LEN);
    memset(PublicKey.y, 0, NUMWORDS*NN_DIGIT_LEN);
    //init signature
    memset(r, 0, NUMWORDS*NN_DIGIT_LEN);
    memset(s, 0, NUMWORDS*NN_DIGIT_LEN);

#ifdef PLATFORM_MICAZ
    PrivateKey[20] = 0x00;
    PrivateKey[19] = 0xc3;
    PrivateKey[18] = 0x6e;
    PrivateKey[17] = 0x3e;
    PrivateKey[16] = 0x96;
    PrivateKey[15] = 0xc2;
    PrivateKey[14] = 0x6c;
    PrivateKey[13] = 0x3d;
    PrivateKey[12] = 0x91;
    PrivateKey[11] = 0xc7;
    PrivateKey[10] = 0xec;
    PrivateKey[9]  = 0x7d;
    PrivateKey[8]  = 0xb1;
    PrivateKey[7]  = 0xd7;
    PrivateKey[6]  = 0xe4;
    PrivateKey[5]  = 0x79;
    PrivateKey[4]  = 0x33;
    PrivateKey[3]  = 0x16;
    PrivateKey[2]  = 0x02;
    PrivateKey[1]  = 0x0c;
    PrivateKey[0]  = 0x0d;

    PublicKey.x[20] = 0x00;
    PublicKey.x[19] = 0x21;
    PublicKey.x[18] = 0x96;
    PublicKey.x[17] = 0x1f;
    PublicKey.x[16] = 0x69;
    PublicKey.x[15] = 0xf0;
    PublicKey.x[14] = 0x2d;
    PublicKey.x[13] = 0x20;
    PublicKey.x[12] = 0x2b;
    PublicKey.x[11] = 0xa4;
    PublicKey.x[10] = 0xb4;
    PublicKey.x[9]  = 0x1f;
    PublicKey.x[8]  = 0x1a;
    PublicKey.x[7]  = 0x0a;
    PublicKey.x[6]  = 0xa0;
    PublicKey.x[5]  = 0x8a;
    PublicKey.x[4]  = 0x86;
    PublicKey.x[3]  = 0xdf;
    PublicKey.x[2]  = 0x27;
    PublicKey.x[1]  = 0x90;
    PublicKey.x[0]  = 0x8d;

    PublicKey.y[20] = 0x00;
    PublicKey.y[19] = 0x37;
    PublicKey.y[18] = 0x8e;
    PublicKey.y[17] = 0x12;
    PublicKey.y[16] = 0x78;
    PublicKey.y[15] = 0x62;
    PublicKey.y[14] = 0x83;
    PublicKey.y[13] = 0x6d;
    PublicKey.y[12] = 0x75;
    PublicKey.y[11] = 0x7a;
    PublicKey.y[10] = 0xcb;
    PublicKey.y[9]  = 0x7c;
    PublicKey.y[8]  = 0xa4;
    PublicKey.y[7]  = 0x0d;
    PublicKey.y[6]  = 0xc0;
    PublicKey.y[5]  = 0xad;
    PublicKey.y[4]  = 0x13;
    PublicKey.y[3]  = 0x74;
    PublicKey.y[2]  = 0x1e;
    PublicKey.y[1]  = 0x28;
    PublicKey.y[0]  = 0x7c;
#else
#ifdef PLATFORM_TELOSB
    PrivateKey[10] = 0x0000;
    PrivateKey[9]  = 0xc36e;
    PrivateKey[8]  = 0x3e96;
    PrivateKey[7]  = 0xc26c;
    PrivateKey[6]  = 0x3d91;
    PrivateKey[5]  = 0xc7ec;
    PrivateKey[4]  = 0x7db1;
    PrivateKey[3]  = 0xd7e4;
    PrivateKey[2]  = 0x7933;
    PrivateKey[1]  = 0x1602;
    PrivateKey[0]  = 0x0c0d;

    PublicKey.x[10] = 0x0000;
    PublicKey.x[9] = 0x2196;
    PublicKey.x[8] = 0x1f69;
    PublicKey.x[7] = 0xf02d;
    PublicKey.x[6] = 0x202b;
    PublicKey.x[5] = 0xa4b4;
    PublicKey.x[4]  = 0x1f1a;
    PublicKey.x[3]  = 0x0aa0;
    PublicKey.x[2]  = 0x8a86;
    PublicKey.x[1]  = 0xdf27;
    PublicKey.x[0]  = 0x908d;

    PublicKey.y[10] = 0x0000;
    PublicKey.y[9] = 0x378e;
    PublicKey.y[8] = 0x1278;
    PublicKey.y[7] = 0x6283;
    PublicKey.y[6] = 0x6d75;
    PublicKey.y[5] = 0x7acb;
    PublicKey.y[4]  = 0x7ca4;
    PublicKey.y[3]  = 0x0dc0;
    PublicKey.y[2]  = 0xad13;
    PublicKey.y[1]  = 0x741e;
    PublicKey.y[0]  = 0x287c;
#else
#ifdef PLATFORM_INTELMOTE2
    PrivateKey[5] = 0x00000000;
    PrivateKey[4] = 0xc36e3e96;
    PrivateKey[3] = 0xc26c3d91;
    PrivateKey[2] = 0xc7ec7db1;
    PrivateKey[1] = 0xd7e47933;
    PrivateKey[0] = 0x16020c0d;
    
    PublicKey.x[5] = 0x00000000;
    PublicKey.x[4] = 0x21961f69;
    PublicKey.x[3] = 0xf02d202b;
    PublicKey.x[2] = 0xa4b41f1a;
    PublicKey.x[1]  = 0x0aa08a86;
    PublicKey.x[0]  = 0xdf27908d;
    
    PublicKey.y[5] = 0x00000000;
    PublicKey.y[4] = 0x378e1278;
    PublicKey.y[3] = 0x62836d75;
    PublicKey.y[2] = 0x7acb7ca4;
    PublicKey.y[1] = 0x0dc0ad13;
    PublicKey.y[0] = 0x741e287c;
#endif
#endif
#endif

    call ECDSA.init(&PublicKey);   
    
    call myTimer.startPeriodic(10000);

  }

  void sign(){
    uint8_t j;
    packet_msg *pPacket;


    //randomly generate the message
    for (j=0; j<MSG_LEN; j++){
      message[j] = (uint8_t) call Random.rand16();
    }

    call Leds.led1On();
    call ECDSA.sign(message, MSG_LEN, r, s, PrivateKey);
    call Leds.led1Off();
    
    pPacket = (packet_msg *)report.data;
    pPacket->c_len = MSG_LEN;
    memcpy(pPacket->content, message, MSG_LEN);
    pPacket->r_len = KEYDIGITS*NN_DIGIT_LEN;
    call NN.Encode(pPacket->r, KEYDIGITS*NN_DIGIT_LEN, r, KEYDIGITS);
    call NN.Encode(pPacket->s, KEYDIGITS*NN_DIGIT_LEN, s, KEYDIGITS);
    call PacketMsg.send(AM_BROADCAST_ADDR, &report, sizeof(packet_msg));
  }

  event void Boot.booted(){
    call AMControl.start();
  }
  
  event void AMControl.startDone(error_t e) {
    init_data();
  }
  
  event void AMControl.stopDone(error_t e) {
  }


  event void myTimer.fired(){
    sign();
  }


  event void PacketMsg.sendDone(message_t* sent, error_t error) {

  }


}

