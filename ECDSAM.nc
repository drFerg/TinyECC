/**
 * All new code in this distribution is Copyright 2005 by North Carolina
 * State University. All rights reserved. Redistribution and use in
 * source and binary forms are permitted provided that this entire
 * copyright notice is duplicated in all such copies, and that any
 * documentation, announcements, and other materials related to such
 * distribution and use acknowledge that the software was developed at
 * North Carolina State University, Raleigh, NC. No charge may be made
 * for copies, derivations, or distributions of this material without the
 * express written consent of the copyright holder. Neither the name of
 * the University nor the name of the author may be used to endorse or
 * promote products derived from this material without specific prior
 * written permission.
 *
 * IN NO EVENT SHALL THE NORTH CAROLINA STATE UNIVERSITY BE LIABLE TO ANY
 * PARTY FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
 * DAMAGES ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION,
 * EVEN IF THE NORTH CAROLINA STATE UNIVERSITY HAS BEEN ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE. THE SOFTWARE PROVIDED HEREUNDER IS ON AN
 * "AS IS" BASIS, AND THE NORTH CAROLINA STATE UNIVERSITY HAS NO
 * OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR
 * MODIFICATIONS. "
 *
 */

/**
 * module for ECDSA
 */
includes sha1;


#ifdef SHAMIR_TRICK
//The size of sliding window, S_W_BITS <= 8
#define S_W_BITS 2

//basic mask used to generate mask array (you need to change this if
//you want to change window size)
//For example: if S_W_BITS is 2, BASIC_MASK must be 0x03;
//             if S_W_BITS is 4, BASIC_MASK must be 0x0f;
//	       if S_W_BITS is 8, BASIC_MASK must be 0xff;
#define S_BASIC_MASK 0x03

//number of windows in one digit, NUM_MASKS = NN_DIGIT_BITS/W_BITS
#define S_NUM_MASKS (NN_DIGIT_BITS/S_W_BITS)

//number of points for precomputed points, NN_POINTS = 2^W_BITS - 1
#define S_NUM_POINTS ((1 << (2*S_W_BITS)) - 1)

//
#define S_MAX ((1 << S_W_BITS) - 1)
#endif

module ECDSAM {
  provides interface ECDSA;
  uses {
    interface NN;
    interface ECC;
    interface Random;
    interface SHA1;
  }
}

implementation {

  Params * param;  //point to parameters

#ifdef BARRETT_REDUCTION
  Barrett Bbuf;
#endif

#ifdef SHAMIR_TRICK
  Point pqBaseArray[S_NUM_POINTS];
  NN_DIGIT s_mask[S_NUM_MASKS];

#elif defined(SLIDING_WIN)
  //precomputed array of Q (used in verification) for sliding window method
  Point qBaseArray[NUM_POINTS];
#endif

  //generate random natural number a[length]
  void gen_random(NN_DIGIT *a, uint8_t length)
  {
#ifdef TEST_VECTOR  
#ifdef EIGHT_BIT_PROCESSOR
    a[20] = 0x0;
    a[19] = 0x7b;
    a[18] = 0x01;
    a[17] = 0x2d;
    a[16] = 0xb7;
    a[15] = 0x68;
    a[14] = 0x1a;
    a[13] = 0x3f;
    a[12] = 0x28;
    a[11] = 0xb9;
    a[10] = 0x18;
    a[9] = 0x5c;
    a[8] = 0x8b;
    a[7] = 0x2a;
    a[6] = 0xc5;
    a[5] = 0xd5;
    a[4] = 0x28;
    a[3] = 0xde;
    a[2] = 0xcd;
    a[1] = 0x52;
    a[0] = 0xda;
#else
#ifdef SIXTEEN_BIT_PROCESSOR
    a[10] = 0x0;
    a[9] = 0x7b01;
    a[8] = 0x2db7;
    a[7] = 0x681a;
    a[6] = 0x3f28;
    a[5] = 0xb918;
    a[4] = 0x5c8b;
    a[3] = 0x2ac5;
    a[2] = 0xd528;
    a[1] = 0xdecd;
    a[0] = 0x52da;
#else
#ifdef THIRTYTWO_BIT_PROCESSOR
    a[5] = 0x00000000;
    a[4] = 0x7b012db7;
    a[3] = 0x681a3f28;
    a[2] = 0xb9185c8b;
    a[1] = 0x2ac5d528;
    a[0] = 0xdecd52da;
#endif  //end of 32-bit
#endif  //end of 16-bit
#endif  //end of 8-bit

#else //not test vector

#ifdef THIRTYTWO_BIT_PROCESSOR
    uint8_t ri;
	
    for (ri=0; ri<length; ri++)
      a[ri] = call Random.rand32();
#else
    uint8_t ri;
	
    for (ri=0; ri<length; ri++)
      a[ri] = (NN_DIGIT)call Random.rand16();
#endif

#endif  //end of test vector
  } 

#ifdef SHAMIR_TRICK
  // Shamir trick init
  void shamir_init(Point * pKey, Point * pointArray)
  {
    uint16_t i;
    uint16_t j;

    /* max = 2^w-1
     * [0] = Q
     * [1] = 2Q
     * ...
     * [max-1] = max*Q
     */
    call NN.Assign(pointArray[0].x, pKey->x, NUMWORDS);
    call NN.Assign(pointArray[0].y, pKey->y, NUMWORDS);
    
    for (i=1; i<S_MAX; i++){
      call ECC.add(&(pointArray[i]), &(pointArray[i-1]), pKey);
    }

    /*
     * [max] = P
     * [max+1] = P+Q
     * ...
     * [max+max] = P+max*Q
     * [max+max+1] = 2P
     * [max+max+2] = 2P+Q
     * ...
     * [max+2*max+1] = 2P+max*Q
     * ...
     */
    for (i = 0; i < S_MAX; i++){
      for (j = 0; j<S_MAX+1; j++){
	if (i == 0 && j==0){
	  call NN.Assign(pointArray[S_MAX].x, param->G.x, NUMWORDS);
	  call NN.Assign(pointArray[S_MAX].y, param->G.y, NUMWORDS);
	}else if (j==0){
	  call ECC.add(&(pointArray[S_MAX+(S_MAX+1)*i]), &(pointArray[S_MAX+(S_MAX+1)*(i-1)]), &(param->G));
	}else{
	  call ECC.add(&(pointArray[S_MAX+(S_MAX+1)*i+j]), &(pointArray[S_MAX+(S_MAX+1)*i]), &(pointArray[j-1]));
	}
      }
    }
    
    for (i = 0; i < S_NUM_MASKS; i++)
      s_mask[i] = S_BASIC_MASK << (S_W_BITS*i);    
  }

  // Shamir trick
  void shamir(Point * P0, NN_DIGIT * u1, NN_DIGIT * u2){
#ifdef AFFINE
    int16_t i, tmp, tmp2;
    int8_t j, k;
    NN_DIGIT windex;

    // clear point
    call NN.AssignZero(P0->x, NUMWORDS);
    call NN.AssignZero(P0->y, NUMWORDS);
    
    tmp = call NN.Digits(u1, NUMWORDS);
    tmp2 = call NN.Digits(u2, NUMWORDS);
    if (tmp2 > tmp)
      tmp = tmp2;

    for (i = tmp - 1; i >= 0; i--){ 
      for (j = NN_DIGIT_BITS/S_W_BITS - 1; j >= 0; j--){
	for (k = 0; k < S_W_BITS; k++)
    	  call ECC.dbl_affine(P0, P0);
	
	if (j != 0){
	  windex = ((s_mask[j] & u1[i]) >> ((j-1)*S_W_BITS)) | ((s_mask[j] & u2[i]) >> (j*S_W_BITS));
	}else{
	  windex = ((s_mask[j] & u1[i]) << S_W_BITS) | (s_mask[j] & u2[i]);
	}
        if (windex){
	  call ECC.add_affine(P0, P0, &(pqBaseArray[windex-1]));
	}
      }
    }

#else  //projective
    int16_t i, tmp, tmp2;
    int8_t j, k;
    NN_DIGIT windex;
    NN_DIGIT Z0[NUMWORDS];
    NN_DIGIT Z1[NUMWORDS];

    // clear point
    call NN.AssignZero(P0->x, NUMWORDS);
    call NN.AssignZero(P0->y, NUMWORDS);
    
    //convert to Jprojective coordinate
    call NN.AssignZero(Z0, NUMWORDS);
    call NN.AssignZero(Z1, NUMWORDS);
    Z1[0] = 0x01;	
    
    tmp = call NN.Digits(u1, NUMWORDS);
    tmp2 = call NN.Digits(u2, NUMWORDS);
    if (tmp2 > tmp)
      tmp = tmp2;

    for (i = tmp - 1; i >= 0; i--)
    { 
      //call Leds.redToggle();
      for (j = NN_DIGIT_BITS/S_W_BITS - 1; j >= 0; j--)
      {
        //call Leds.yellowToggle();
	for (k = 0; k < S_W_BITS; k++)
    	  call ECC.dbl_proj(P0, Z0, P0, Z0);
	
	if (j != 0){
	  windex = ((s_mask[j] & u1[i]) >> ((j-1)*S_W_BITS)) | ((s_mask[j] & u2[i]) >> (j*S_W_BITS));
	}else{
	  windex = ((s_mask[j] & u1[i]) << S_W_BITS) | (s_mask[j] & u2[i]);
	}
        if (windex){
	  call ECC.add_proj(P0, Z0, P0, Z0, &(pqBaseArray[windex-1]), Z1);
	}
      }
      
    }

       
    //convert back to affine coordinate
    if (call NN.One(Z0, NUMWORDS) == FALSE)
    {
      call NN.ModInv(Z1, Z0, param->p, NUMWORDS);
      call NN.ModMultOpt(Z0, Z1, Z1, param->p, param->omega, NUMWORDS);
      call NN.ModMultOpt(P0->x, P0->x, Z0, param->p, param->omega, NUMWORDS);
      call NN.ModMultOpt(Z0, Z0, Z1, param->p, param->omega, NUMWORDS);
      call NN.ModMultOpt(P0->y, P0->y, Z0, param->p, param->omega, NUMWORDS);
    }

#endif
  }
#endif

  command uint8_t ECDSA.reinit(ECCState *s){
    if (!s) return 0;
    param = &s->p;
    memcpy(&Bbuf, &(s->b), sizeof(Barrett));
    #ifdef SHAMIR_TRICK
    memcpy(&s_mask, s->mask, NUM_MASKS);
    memcpy(&pqBaseArray, s->pBaseArray, sizeof(Point) * NUM_POINTS);
    #endif
    return 1;
  }

  command uint8_t ECDSA.saveState(ECCState *s){
    if (!s) return 0;
    memcpy(&(s->p), param, sizeof(Params));
    memcpy(&(s->b), &Bbuf, sizeof(Barrett));
    #ifdef SHAMIR_TRICK
    memcpy(s->mask, &s_mask, NUM_MASKS);
    memcpy(s->pBaseArray, &pqBaseArray, sizeof(Point) * NUM_POINTS);
    #endif
    return 1;
  }

  //init the ECDSA, pKey is public key used to verify the signature
  //we assume that the node has already know the public key when node is deployed 	
  command Params * ECDSA.init(Point * pKey) __attribute__ ((noinline))
  {
    call ECC.init();
    param = call ECC.get_param();

#ifdef SHAMIR_TRICK
    shamir_init(pKey, pqBaseArray);
#elif defined(SLIDING_WIN)
    //precompute the array of public key for sliding window method
    call ECC.win_precompute(pKey, qBaseArray);
#endif

#ifdef BARRETT_REDUCTION
    call NN.ModBarrettInit(param->r, NUMWORDS, &Bbuf);
#endif

    return param;
  }

	
  command void ECDSA.sign(uint8_t *msg, uint8_t len, NN_DIGIT *r, NN_DIGIT *s, NN_DIGIT *d) __attribute__ ((noinline))
  {

    bool done = FALSE;
    NN_DIGIT k[NUMWORDS];
    NN_DIGIT k_inv[NUMWORDS];
    NN_DIGIT tmp[NUMWORDS];
    NN_DIGIT digest[NUMWORDS];
    Point P;
    uint8_t sha1sum[20];
    NN_DIGIT sha1tmp[20/NN_DIGIT_LEN];
    SHA1Context ctx;
    NN_UINT result_bit_len, order_bit_len;


#ifdef BARRETT_REDUCTION
    call NN.BarrettSetBuf(&Bbuf);
#endif		
    while(!done){
#ifdef TEST_VECTOR
      gen_random(k, NUMWORDS);
#else
      call ECC.gen_private_key(k);
#endif

      if ((call NN.Zero(k, NUMWORDS)) == 1)
        continue;

#ifdef BARRETT_REDUCTION
      call ECC.BarrettSetBuf();
#endif


#ifdef SLIDING_WIN
      call ECC.win_mul_base(&P, k);
#else
      call ECC.mul(&P, &(param->G), k);
#endif

#ifdef BARRETT_REDUCTION
      call NN.BarrettSetBuf(&Bbuf);
      call NN.Assign(r, P.x, NUMWORDS);
      call NN.ModSmall(r, param->r, NUMWORDS);
#else
      call NN.Mod(r, P.x, NUMWORDS, param->r, NUMWORDS);	
#endif

      if ((call NN.Zero(r, NUMWORDS)) == 1)
	continue;
      call NN.ModInv(k_inv, k, param->r, NUMWORDS);

      memset(sha1sum, 0, 20);
      memset(digest, 0, NUMWORDS*NN_DIGIT_LEN);
      call SHA1.reset(&ctx);
      call SHA1.update(&ctx, msg, len);
      call SHA1.digest(&ctx, sha1sum);
      call NN.Decode(sha1tmp, 20/NN_DIGIT_LEN, sha1sum, 20);

      result_bit_len = call NN.Bits(sha1tmp, 20/NN_DIGIT_LEN);
      order_bit_len = call NN.Bits(param->r, NUMWORDS);
      if(result_bit_len > order_bit_len){
	call NN.Mod(digest, sha1tmp, 20/NN_DIGIT_LEN, param->r, NUMWORDS);
      }else{
	memset(digest, 0, NUMWORDS*NN_DIGIT_LEN);
	call NN.Assign(digest, sha1tmp, 20/NN_DIGIT_LEN);
	if(result_bit_len == order_bit_len)
	  call NN.ModSmall(digest, param->r, NUMWORDS);
      }

      call NN.ModMult(k, d, r, param->r, NUMWORDS);
      call NN.ModAdd(tmp, digest, k, param->r, NUMWORDS);
      call NN.ModMult(s, k_inv, tmp, param->r, NUMWORDS);
      if ((call NN.Zero(s, NUMWORDS)) != 1)			
	done = TRUE;
    }
  }
	
  command uint8_t ECDSA.verify(uint8_t *msg, uint8_t len, NN_DIGIT *r, NN_DIGIT *s, Point *Q) __attribute__ ((noinline))
  {
    uint8_t sha1sum[20];
    NN_DIGIT sha1tmp[20/NN_DIGIT_LEN];
    SHA1Context ctx;
    NN_DIGIT w[NUMWORDS];
    NN_DIGIT u1[NUMWORDS];
    NN_DIGIT u2[NUMWORDS];
    NN_DIGIT digest[NUMWORDS];
    NN_UINT result_bit_len, order_bit_len;
#ifndef SHAMIR_TRICK
    Point u1P, u2Q;
#endif
    Point final;
    // r and s shoud be in [1, p-1]
    if ((call NN.Cmp(r, param->r, NUMWORDS)) >= 0)
      return 3;
    if ((call NN.Zero(r, NUMWORDS)) == 1)
      return 4;
    if ((call NN.Cmp(s, param->r, NUMWORDS)) >= 0)
      return 5;
    if ((call NN.Zero(s, NUMWORDS)) == 1)
      return 6;

#ifdef BARRETT_REDUCTION
      call NN.BarrettSetBuf(&Bbuf);
#endif
    //w = s^-1 mod p
      call NN.ModInv(w, s, param->r, NUMWORDS);

    //h(msg)
    memset(sha1sum, 0, 20);
    memset(digest, 0, NUMWORDS*NN_DIGIT_LEN);
    call SHA1.reset(&ctx);
    call SHA1.update(&ctx, msg, len);
    call SHA1.digest(&ctx, sha1sum);
    call NN.Decode(sha1tmp, 20/NN_DIGIT_LEN, sha1sum, 20);
    result_bit_len = call NN.Bits(sha1tmp, 20/NN_DIGIT_LEN);
    order_bit_len = call NN.Bits(param->r, NUMWORDS);
    if(result_bit_len > order_bit_len){
      call NN.Mod(digest, sha1tmp, 20/NN_DIGIT_LEN, param->r, NUMWORDS);
    }else{
      call NN.Assign(digest, sha1tmp, 20/NN_DIGIT_LEN);
      if(result_bit_len == order_bit_len)
        call NN.ModSmall(digest, param->r, NUMWORDS);
    }
    //u1 = h(msg)w mod p
    call NN.ModMult(u1, digest, w, param->r, NUMWORDS);
    //u2 = rw mod p
    call NN.ModMult(u2, r, w, param->r, NUMWORDS);

#ifdef BARRETT_REDUCTION
    call ECC.BarrettSetBuf();
#endif
    //u1P+u2Q
#ifdef SHAMIR_TRICK
    shamir(&final, u1, u2);
#elif defined(SLIDING_WIN)
    call ECC.win_mul_base(&u1P, u1);
    call ECC.win_mul(&u2Q, u2, qBaseArray);
    call ECC.add(&final, &u1P, &u2Q);
#else
    call ECC.mul(&u1P, &(param->G), u1);  //u1*P
    call ECC.mul(&u2Q, Q, u2);  //u2*Q
    call ECC.add(&final, &u1P, &u2Q);
#endif

#ifdef BARRETT_REDUCTION
    call NN.BarrettSetBuf(&Bbuf);
#endif
    result_bit_len = call NN.Bits(final.x, NUMWORDS);
    order_bit_len = call NN.Bits(param->r, NUMWORDS);
    if(result_bit_len > order_bit_len){
      call NN.Mod(w, final.x, NUMWORDS, param->r, NUMWORDS);
    }else{
      call NN.Assign(w, final.x, NUMWORDS);
      if(result_bit_len == order_bit_len)
	call NN.ModSmall(w, param->r, NUMWORDS);
    }

    if ((call NN.Cmp(w, r, NUMWORDS)) == 0){
      return 1;
    }else{
      return 2;
    }
  }

}
