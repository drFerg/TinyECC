//test file for inline assembly code
#define MAX_ROUNDS 20
#define OP_LEN NUMWORDS

module testASMM{
  provides interface StdControl;
  uses{
    interface Timer as myTimer;
    interface Random;
    interface Leds;
    interface NN;

#ifdef PLATFORM_MICAZ
    interface SysTime;
    //interface Serial;
#endif
#ifdef TELOSB
    interface LocalTime;
#endif
#ifdef IMOTE2
    interface SysTime64;
    #ifdef MANUALFREQ
    	interface DVFS;
    	interface PMIC;
    #endif
#endif
  }
}

implementation {


#ifdef PLATFORM_TELOSB
  void asm_mult(NN_DIGIT *a, NN_DIGIT *b, NN_DIGIT *c, NN_UINT digits) __attribute__ ((noinline)){


    //width=1
    //accumulator, r9~r11
    //i, r12
    //j, r13
    //address of b, for m_a, r14
    //address of c, for m_b, r15

    asm volatile ("clr r9 \n\t" //init accumulator
		  "clr r10 \n\t"
		  "clr r11 \n\t"
		  "clr r12 \n\t" //i=0
		  "dec %3 \n\t"  //digits--
		  "LOOP1: clr r13 \n\t" //j=0
		  "mov r12, r14 \n\t"
		  "inc r14 \n\t"
		  "add r14, r14 \n\t"
		  "add %1, r14 \n\t" //address is ready for m_a
		  "LOOP2: sub #2, r14 \n\t"
		  "mov r13, r15 \n\t"
		  "add r15, r15 \n\t"
		  "add %2, r15 \n\t"  //address is ready for m_b
		  "mov @r14, &0x130 \n\t"  //load m_a
		  "mov @r15, &0x138 \n\t"  //load m_b, get mul result
		  "add &0x13A, r9 \n\t" //add to accumulator
		  "addc &0x13C, r10 \n\t"
		  "addc #0, r11 \n\t"
		  "cmp r12, r13 \n\t"  //compare i and j
		  "jeq LOOP2_EXIT \n\t"
		  "inc r13 \n\t"
		  "jmp LOOP2 \n\t"
		  "LOOP2_EXIT: mov r9, 0(%0) \n\t"
		  "add #2, %0 \n\t"
		  "mov r10, r9 \n\t"
		  "mov r11, r10 \n\t"
		  "clr r11 \n\t"
		  "cmp %3, r12 \n\t"
		  "jeq LOOP1_EXIT \n\t"
		  "inc r12 \n\t"  //i++
		  "jmp LOOP1 \n\t"
		  "LOOP1_EXIT: inc r12 \n\t" //i=[n/d]
		  "LOOP3: mov r12, r13 \n\t"
		  "sub %3, r13 \n\t" //j=i-[n/d]
		  "mov %3, r14 \n\t"
		  "inc r14 \n\t"
		  "add r14, r14 \n\t"
		  "add %1, r14 \n\t"  //address is ready for m_a
		  "LOOP4: sub #2, r14 \n\t"
		  "mov r13, r15 \n\t"
		  "add r15, r15 \n\t"
		  "add %2, r15 \n\t"
		  "mov @r14, &0x130 \n\t"  //load m_a
		  "mov @r15, &0x138 \n\t"  //load m_b
		  "add &0x13A, r9 \n\t"
		  "addc &0x13C, r10 \n\t"
		  "addc #0, r11 \n\t"
		  "cmp %3, r13 \n\t"
		  "jeq LOOP4_EXIT \n\t"
		  "inc r13 \n\t"
		  "jmp LOOP4 \n\t"
		  "LOOP4_EXIT: mov r9, 0(%0) \n\t"
		  "add #2, %0 \n\t"
		  "mov r10, r9 \n\t"
		  "mov r11, r10 \n\t"
		  "mov #0, r11 \n\t"
		  "mov %3, r15 \n\t"
		  "add r15, r15 \n\t"
		  "cmp r12, r15 \n\t"
		  "jeq LOOP3_EXIT \n\t"
		  "inc r12 \n\t"
		  "jmp LOOP3 \n\t"
		  "LOOP3_EXIT:mov r9, 0(%0) \n\t"
		  :
		  :"r"(a), "r"(b), "r"(c), "r"(digits)
		  :"r9", "r10", "r11", "r12", "r13", "r14", "r15"
		  );


  }

  void asm_sqr(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits) __attribute__ ((noinline)){
    //width=1
    //accumulator, r9~r11
    //i, r12
    //j, r13
    //address of b, for m_a, r14
    //address of c, for m_b / tmp, r15

    asm volatile ("clr r9 \n\t" //init accumulator
		  "clr r10 \n\t"
		  "clr r11 \n\t"
		  "clr r12 \n\t" //i=0
		  "dec %2 \n\t"  //digits--
		  "SQR_LOOP1: clr r13 \n\t" //j=0
		  "mov r12, r14 \n\t"
		  "inc r14 \n\t"
		  "add r14, r14 \n\t"
		  "add %1, r14 \n\t"
		  "SQR_LOOP2: mov r12, r15 \n\t"
		  "sub r13, r15 \n\t"  //i-j
		  "cmp r13, r15 \n\t"  //i-j ? j
		  "jeq EQ1 \n\t"  //i-j == j
		  "jge GR1 \n\t"  //i-j > j
		  "jmp SQR_LOOP2_EXIT \n\t"  //i-j < j
		  "GR1: sub #2, r14 \n\t"  //address is ready for m_a
		  "mov r13, r15 \n\t"
		  "add r15, r15 \n\t"
		  "add %1, r15 \n\t"  //address is ready for m_b
		  "mov @r14, &0x130 \n\t"  //load m_a
		  "mov @r15, &0x138 \n\t"  //load m_b, get mul result
		  "add &0x13A, r9 \n\t" //add to accumulator
		  "addc &0x13C, r10 \n\t"
		  "addc #0, r11 \n\t"
		  "add &0x13A, r9 \n\t" //add to accumulator
		  "addc &0x13C, r10 \n\t"
		  "addc #0, r11 \n\t"
		  "inc r13 \n\t"
		  "jmp SQR_LOOP2 \n\t"
		  "EQ1: sub #2, r14 \n\t"  //address is ready for m_a
		  "mov r13, r15 \n\t"
		  "add r15, r15 \n\t"
		  "add %1, r15 \n\t"  //address is ready for m_b
		  "mov @r14, &0x130 \n\t"  //load m_a
		  "mov @r15, &0x138 \n\t"  //load m_b, get mul result
		  "add &0x13A, r9 \n\t" //add to accumulator
		  "addc &0x13C, r10 \n\t"
		  "addc #0, r11 \n\t"
		  "SQR_LOOP2_EXIT: mov r9, 0(%0) \n\t"
		  "add #2, %0 \n\t"
		  "mov r10, r9 \n\t"
		  "mov r11, r10 \n\t"
		  "clr r11 \n\t"
		  "cmp %2, r12 \n\t"
		  "jeq SQR_LOOP1_EXIT \n\t"
		  "inc r12 \n\t"  //i++
		  "jmp SQR_LOOP1 \n\t"
		  "SQR_LOOP1_EXIT: inc r12 \n\t" //i=[n/d]
		  "SQR_LOOP3: mov r12, r13 \n\t"
		  "sub %2, r13 \n\t" //j=i-[n/d]
		  "mov %2, r14 \n\t"
		  "inc r14 \n\t"
		  "add r14, r14 \n\t"
		  "add %1, r14 \n\t"
		  "SQR_LOOP4: mov r12, r15 \n\t"
		  "sub r13, r15 \n\t"  //i-j
		  "cmp r13, r15 \n\t"  //i-j ? j
		  "jeq EQ2 \n\t"  //i-j == j
		  "jge GR2 \n\t"  //i-j > j
		  "jmp SQR_LOOP4_EXIT \n\t"  //i-j < j
		  "GR2: sub #2, r14 \n\t"  //address is ready for m_a
		  "mov r13, r15 \n\t"
		  "add r15, r15 \n\t"
		  "add %1, r15 \n\t"  //address is ready for m_b
		  "mov @r14, &0x130 \n\t"  //load m_a
		  "mov @r15, &0x138 \n\t"  //load m_b, get mul result
		  "add &0x13A, r9 \n\t" //add to accumulator
		  "addc &0x13C, r10 \n\t"
		  "addc #0, r11 \n\t"
		  "add &0x13A, r9 \n\t" //add to accumulator
		  "addc &0x13C, r10 \n\t"
		  "addc #0, r11 \n\t"
		  "inc r13 \n\t"
		  "jmp SQR_LOOP4 \n\t"
		  "EQ2: sub #2, r14 \n\t"  //address is ready for m_a
		  "mov r13, r15 \n\t"
		  "add r15, r15 \n\t"
		  "add %1, r15 \n\t"  //address is ready for m_b
		  "mov @r14, &0x130 \n\t"  //load m_a
		  "mov @r15, &0x138 \n\t"  //load m_b, get mul result
		  "add &0x13A, r9 \n\t" //add to accumulator
		  "addc &0x13C, r10 \n\t"
		  "addc #0, r11 \n\t"
		  "SQR_LOOP4_EXIT: mov r9, 0(%0) \n\t"
		  "add #2, %0 \n\t"
		  "mov r10, r9 \n\t"
		  "mov r11, r10 \n\t"
		  "mov #0, r11 \n\t"
		  "mov %2, r15 \n\t"
		  "add r15, r15 \n\t"
		  "cmp r12, r15 \n\t"
		  "jeq SQR_LOOP3_EXIT \n\t"
		  "inc r12 \n\t"
		  "jmp SQR_LOOP3 \n\t"
		  "SQR_LOOP3_EXIT:mov r9, 0(%0) \n\t"
		  :
		  :"r"(a), "r"(b), "r"(digits)
		  :"r9", "r10", "r11", "r12", "r13", "r14", "r15"
		  );

    
  }
#endif


#ifdef PLATFORM_IMOTE2
  void asm_mult(uint32_t *a, uint32_t *b, uint32_t *c, uint8_t digits) __attribute__ ((noinline)){

    //r0~r2
    //r3 b
    //r4 i
    //r5 j
    //r6 address for b
    //r7 tmp, address for c
    //r8 tmp, c

    asm volatile ("STMFD r13!, {r0 - r8} \n\t"
		  "MOV r0, #0 \n\t"  //init accumulator
		  "MOV r1, #0 \n\t"
		  "MOV r2, #0 \n\t"  //end of init
		  "SUB %3, %3, #1 \n\t"  //[n/d]-1
		  "MOV r4, #0 \n\t"  //i
		  "LOOP1: MOV r5, #0 \n\t"  //j=0
		  "ADD r7, r4, #1 \n\t"  //(i+1)
		  "ADD r6, %1, r7, lsl #2 \n\t"  //address is ready for b
		  "LOOP2: LDR r3, [r6, #-4]! \n\t"  //load b0~b(d-1)
		  "ADD r7, %2, r5, lsl #2 \n\t"  //compute address for c
		  "LDR r8, [r7] \n\t"  //load c[j*d]  //compute address for c
		  "UMULL r7, r8, r3, r8 \n\t"  //t=0
		  "ADDS r0, r0, r7 \n\t"
		  "ADCS r1, r1, r8 \n\t"
		  "ADCCS r2, r2, #0 \n\t"
		  "CMP r4, r5\n\t"  //i==j?
		  "BEQ LOOP2_EXIT \n\t"
		  "ADD r5, r5, #1 \n\t" //j++
		  "B LOOP2 \n\t"
		  "LOOP2_EXIT: STR r0, [%0], #4 \n\t"  //a[i*d] = r0
		  "MOV r0, r1 \n\t"
		  "MOV r1, r2 \n\t"
		  "MOV r2, #0 \n\t"
		  "CMP r4, %3 \n\t"
		  "BEQ LOOP1_EXIT \n\t"
		  "ADD r4, r4, #1 \n\t" //i++
		  "B LOOP1 \n\t"
		  "LOOP1_EXIT: ADD r4, r4, #1 \n\t"  //i = [n/d]
		  "LOOP3: SUB r5, r4, %3 \n\t"  //j=i-[n/d]
		  "ADD r7, %3, #1 \n\t"
		  "ADD r6, %1, r7, lsl #2 \n\t"  //address for b is ready
		  "LOOP4: LDR r3, [r6, #-4]! \n\t"  //load b0~b[d-1]
		  "ADD r7, %2, r5, lsl #2 \n\t"  //compute address for c
		  "LDR r8, [r7] \n\t"		  
		  "UMULL r7, r8, r3, r8 \n\t"  //t=0
		  "ADDS r0, r0, r7 \n\t"
		  "ADCS r1, r1, r8 \n\t"
		  "ADCCS r2, r2, #0 \n\t"
		  "CMP r5, %3 \n\t"  //j==[n/d]?4
		  "BEQ LOOP4_EXIT \n\t"
		  "ADD r5, r5, #1 \n\t"  //j++
		  "B LOOP4 \n\t"
		  "LOOP4_EXIT: STR r0, [%0], #4 \n\t"  //a[i*d] = r0
		  "MOV r0, r1 \n\t"
		  "MOV r1, r2 \n\t"
		  "MOV r2, #0 \n\t"
		  "CMP r4, %3, lsl #1 \n\t"
		  "BEQ LOOP3_EXIT \n\t"
		  "ADD r4, r4, #1 \n\t"
		  "B LOOP3 \n\t"
		  "LOOP3_EXIT: STR r0, [%0], #4 \n\t"
		  "LDMFD r13!, {r0 - r8} \n\t"
		  :
		  :"r"(a), "r"(b), "r"(c), "r"(digits)
		  :"r0", "r1", "r2", "r3", "r4", "r5", "r6", "r7", "r8"
		  );

  }

  void asm_sqr(NN_DIGIT *a, NN_DIGIT *b, NN_UINT digits) __attribute__ ((noinline)){

    //for Imote2
    
    //r0~r2
    //r3 b
    //r4 i
    //r5 j
    //r6 address for b
    //r7 tmp, address for c
    //r8 tmp, c

    asm volatile ("STMFD r13!, {r0 - r8} \n\t"
		  "MOV r0, #0 \n\t"  //init accumulator
		  "MOV r1, #0 \n\t"
		  "MOV r2, #0 \n\t"  //end of init
		  "SUB %2, %2, #1 \n\t"  //[n/d]-1
		  "MOV r4, #0 \n\t"  //i
		  "LOOP1: MOV r5, #0 \n\t"  //j=0
		  "ADD r7, r4, #1 \n\t"  //(i+1)
		  "ADD r6, %1, r7, lsl #2 \n\t"  //address is ready for b
		  "LOOP2: SUB r8, r4, r5 \n\t"
		  "CMP r8, r5 \n\t"   //compare i-j and j
		  "BHI HI1 \n\t"
		  "BEQ EQ1 \n\t"
		  "B LOOP2_EXIT \n\t"
		  "HI1: LDR r3, [r6, #-4]! \n\t"  //load b0~b(d-1)
		  "ADD r7, %1, r5, lsl #2 \n\t"  //compute address for c
		  "LDR r8, [r7] \n\t"  //load c[j*d]  //compute address for c
		  "UMULL r7, r8, r3, r8 \n\t"  //t=0
		  "ADDS r0, r0, r7 \n\t"
		  "ADCS r1, r1, r8 \n\t"
		  "ADCCS r2, r2, #0 \n\t"
		  "ADDS r0, r0, r7 \n\t"
		  "ADCS r1, r1, r8 \n\t"
		  "ADCCS r2, r2, #0 \n\t"
		  "ADD r5, r5, #1 \n\t" //j++
		  "B LOOP2 \n\t"
		  "EQ1: LDR r3, [r6, #-4]! \n\t"  //load b0~b(d-1)
		  "ADD r7, %1, r5, lsl #2 \n\t"  //compute address for c
		  "LDR r8, [r7] \n\t"  //load c[j*d]  //compute address for c
		  "UMULL r7, r8, r3, r8 \n\t"  //t=0
		  "ADDS r0, r0, r7 \n\t"
		  "ADCS r1, r1, r8 \n\t"
		  "ADCCS r2, r2, #0 \n\t"
		  "B LOOP2_EXIT \n\t"
		  "LOOP2_EXIT: STR r0, [%0], #4 \n\t"  //a[i*d] = r0
		  "MOV r0, r1 \n\t"
		  "MOV r1, r2 \n\t"
		  "MOV r2, #0 \n\t"
		  "CMP r4, %2 \n\t"
		  "BEQ LOOP1_EXIT \n\t"
		  "ADD r4, r4, #1 \n\t" //i++
		  "B LOOP1 \n\t"
		  "LOOP1_EXIT: ADD r4, r4, #1 \n\t"  //i = [n/d]
		  "LOOP3: SUB r5, r4, %2 \n\t"  //j=i-[n/d]
		  "ADD r7, %2, #1 \n\t"
		  "ADD r6, %1, r7, lsl #2 \n\t"  //address for b is ready
		  "LOOP4: SUB r8, r4, r5 \n\t"
		  "CMP r8, r5 \n\t"   //compare i-j and j
		  "BHI HI2 \n\t"
		  "BEQ EQ2 \n\t"
		  "B LOOP4_EXIT \n\t"
		  "HI2: LDR r3, [r6, #-4]! \n\t"  //load b0~b[d-1]
		  "ADD r7, %1, r5, lsl #2 \n\t"  //compute address for c
		  "LDR r8, [r7] \n\t"		  
		  "UMULL r7, r8, r3, r8 \n\t"  //t=0
		  "ADDS r0, r0, r7 \n\t"
		  "ADCS r1, r1, r8 \n\t"
		  "ADCCS r2, r2, #0 \n\t"
		  "ADDS r0, r0, r7 \n\t"
		  "ADCS r1, r1, r8 \n\t"
		  "ADCCS r2, r2, #0 \n\t"
		  "ADD r5, r5, #1 \n\t"  //j++
		  "B LOOP4 \n\t"
		  "EQ2: LDR r3, [r6, #-4]! \n\t"  //load b0~b[d-1]
		  "ADD r7, %1, r5, lsl #2 \n\t"  //compute address for c
		  "LDR r8, [r7] \n\t"		  
		  "UMULL r7, r8, r3, r8 \n\t"  //t=0
		  "ADDS r0, r0, r7 \n\t"
		  "ADCS r1, r1, r8 \n\t"
		  "ADCCS r2, r2, #0 \n\t"
		  "B LOOP4_EXIT \n\t"
		  "LOOP4_EXIT: STR r0, [%0], #4 \n\t"  //a[i*d] = r0
		  "MOV r0, r1 \n\t"
		  "MOV r1, r2 \n\t"
		  "MOV r2, #0 \n\t"
		  "CMP r4, %2, lsl #1 \n\t"
		  "BEQ LOOP3_EXIT \n\t"
		  "ADD r4, r4, #1 \n\t"
		  "B LOOP3 \n\t"
		  "LOOP3_EXIT: STR r0, [%0], #4 \n\t"
		  "LDMFD r13!, {r0 - r8} \n\t"
		  :
		  :"r"(a), "r"(b), "r"(digits)
		  :"r0", "r1", "r2", "r3", "r4", "r5", "r6", "r7", "r8"
		  );

  }
#endif

  command result_t StdControl.init(){
    call Random.init();
    call Leds.init();
    printfUART_init();

    return SUCCESS;
  }

  command result_t StdControl.start(){
#ifdef PLATFORM_IMOTE2
#ifdef MANUALFREQ
    call DVFS.SwitchCoreFreq(CORE_FREQ, CORE_BUS);		
#endif
#endif
    call myTimer.start(TIMER_ONE_SHOT, 5000);
    return SUCCESS;
  }

  command result_t StdControl.stop(){
    call myTimer.stop();
    return SUCCESS;
  }

  event result_t myTimer.fired(){
    NN_DIGIT a[2*OP_LEN],b[OP_LEN],c[OP_LEN];
    int i;
    uint32_t time_a, time_b;


    call Leds.greenOn();
    memset(a, 0, 2*OP_LEN*NN_DIGIT_LEN);
    memset(b, 0, OP_LEN*NN_DIGIT_LEN);
    memset(c, 0, OP_LEN*NN_DIGIT_LEN);

    for (i=0; i<OP_LEN; i++){
#ifdef PLATFORM_IMOTE2
      b[i] = 0xfedcba98;
      c[i] = 0xffffffff;
#endif

#ifdef PLATFORM_TELOSB
      b[i] = 0xffff;
      c[i] = 0xffff;
#endif

#ifdef PLATFORM_MICAZ
      b[i] = 0xff;
      c[i] = i%0x100; //call Random.rand();
#endif
    }
    
    for (i=0; i<2*OP_LEN-2; i++){
#ifdef PLATFORM_MICAZ
      a[i] = 0xff; //call Random.rand();
#endif
#ifdef PLATFORM_IMOTE2
      a[i] = 0xfefefefe;
#endif
    }
#ifdef PLATFORM_IMOTE2
    trace(DBG_USR1, "before\n\r");
    trace(DBG_USR1, "a: ");
    for (i=0; i<2*OP_LEN; i++){
      trace(DBG_USR1, "%08x", a[2*OP_LEN-i-1]);
    }
    trace(DBG_USR1, "\n\r");

    trace(DBG_USR1, "b: ");
    for (i=0; i<OP_LEN; i++){
      trace(DBG_USR1, "%08x", b[OP_LEN-i-1]);
    }
    trace(DBG_USR1, "\n\r");

    trace(DBG_USR1, "c: ");
    for (i=0; i<OP_LEN; i++){
      trace(DBG_USR1, "%08x", c[OP_LEN-i-1]);
    }
    trace(DBG_USR1, "\n\r");
#endif

#ifdef PLATFORM_MICAZ
    printf("a: ");
    for (i=0; i<2*OP_LEN; i++){
      printf("%02x", a[2*OP_LEN-i-1]);
    }
    printf("\n\r");
    printf("b: ");
    for (i=0; i<OP_LEN; i++){
      printf("%02x", b[OP_LEN-i-1]);
    }
    printf("\n\r");
    printf("c: ");
    for (i=0; i<OP_LEN; i++){
      printf("%02x", c[OP_LEN-i-1]);
    }
    printf("\n\r");

#endif

#ifdef PLATFORM_TELOSB
    print_str("INPUT \n\r");
    print_str("a: ");
    print_val(a, 2*OP_LEN);
    print_str("b: ");
    print_val(b, OP_LEN);
    print_str("c: ");
    print_val(c, OP_LEN);
#endif

    /*
    time_a = call SysTime.getTime32();
    call NN.ModBarrettInit(c, OP_LEN);
    
    time_b = call SysTime.getTime32();
    printf("init time: %ld\n\r", time_b - time_a);

    printf("init finished \n\r");
    */
    
    //call NN.ModBarrett(b, a, 2*OP_LEN, c, OP_LEN);
    //call NN.Mod(b, a, 2*OP_LEN, c, OP_LEN);
    //call NN.ModMult(a, b, b, c, OP_LEN);
    asm_sqr(a, b, OP_LEN);
    //asm_mult(a, b, c, OP_LEN);

#ifdef PLATFORM_IMOTE2
    trace(DBG_USR1, "after\n\r");
    trace(DBG_USR1, "a: ");
    for (i=0; i<2*OP_LEN; i++){
      trace(DBG_USR1, "%08x", a[2*OP_LEN-i-1]);
    }
    trace(DBG_USR1, "\n\r");

    trace(DBG_USR1, "b: ");
    for (i=0; i<OP_LEN; i++){
      trace(DBG_USR1, "%08x", b[OP_LEN-i-1]);
    }
    trace(DBG_USR1, "\n\r");

    trace(DBG_USR1, "c: ");
    for (i=0; i<OP_LEN; i++){
      trace(DBG_USR1, "%08x", c[OP_LEN-i-1]);
    }
    trace(DBG_USR1, "\n\r");
#endif

#ifdef PLATFORM_MICAZ
    printf("a: ");
    for (i=0; i<2*OP_LEN; i++){
      printf("%02x", a[2*OP_LEN-i-1]);
    }
    printf("\n\r");
    printf("b: ");
    for (i=0; i<OP_LEN; i++){
      printf("%02x", b[OP_LEN-i-1]);
    }
    printf("\n\r");
    printf("c: ");
    for (i=0; i<OP_LEN; i++){
      printf("%02x", c[OP_LEN-i-1]);
    }
    printf("\n\r");

#endif

#ifdef PLATFORM_TELOSB
    print_str("OUTPUT \n\r");
    print_str("a: ");
    print_val(a, 2*OP_LEN);
    print_str("b: ");
    print_val(b, OP_LEN);
    print_str("c: ");
    print_val(c, OP_LEN);
#endif

    
    return SUCCESS;
  }



#ifdef PLATFORM_MICAZ
  /*
  event result_t Serial.Receive(char * buf, uint8_t data_len){
    return SUCCESS;
  }
*/
#endif

#ifdef PLATFORM_IMOTE2
  async event result_t SysTime64.alarmFired(uint32_t val){
    return SUCCESS;
  }
#endif

}

