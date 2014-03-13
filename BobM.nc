#define MSG_LEN 52

module BobM{
  uses{
    interface Boot;
    interface NN;
    interface ECC;
    interface ECDSA;
    interface Random;
    interface Leds;
    interface Receive as PacketMsg;
    interface SplitControl as AMControl;
  }
}

implementation {
  message_t report;
  Point PublicKey;
  uint8_t message[MSG_LEN];
  NN_DIGIT r[NUMWORDS];
  NN_DIGIT s[NUMWORDS];

  void init_data();
  void verify();

  void init_data(){

    //init message
    memset(message, 0, MSG_LEN);
    //init public key
    memset(PublicKey.x, 0, NUMWORDS*NN_DIGIT_LEN);
    memset(PublicKey.y, 0, NUMWORDS*NN_DIGIT_LEN);
    //init signature
    memset(r, 0, NUMWORDS*NN_DIGIT_LEN);
    memset(s, 0, NUMWORDS*NN_DIGIT_LEN);

#ifdef PLATFORM_MICAZ
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
    PublicKey.x[5] = 0x00000000;
    PublicKey.x[4] = 0x21961f69;
    PublicKey.x[3] = 0xf02d202b;
    PublicKey.x[2] = 0xa4b41f1a;
    PublicKey.x[1] = 0x0aa08a86;
    PublicKey.x[0] = 0xdf27908d;
    
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
  }

  event void Boot.booted(){
    call AMControl.start();
  }
  
  event void AMControl.startDone(error_t e) {
    init_data();
  }
  
  event void AMControl.stopDone(error_t e) {
  }

  event message_t* PacketMsg.receive(message_t* m, void* payload, uint8_t len){
    packet_msg *pPacket;
    uint8_t pass;

    pPacket = (packet_msg *)m->data;

    memcpy(message, pPacket->content, pPacket->c_len);
    call NN.Decode(r, KEYDIGITS, pPacket->r, pPacket->r_len);
    call NN.Decode(s, KEYDIGITS, pPacket->s, pPacket->r_len);
    call Leds.led0On();
    pass = call ECDSA.verify(message, pPacket->c_len, r, s, &PublicKey);
    call Leds.led0Off();
    if(pass == 1){
      call Leds.led1Toggle();
      call Leds.led0Off();
      call Leds.led2Off();
    }else{
      call Leds.led0On();
      call Leds.led1On();
      call Leds.led2On();
    }

    return m;
  }

}

