/**
 * All new code in this distribution is Copyright 2007 by North Carolina
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
 * ECDHM, the module implement ECDH operations
 */

module ECDHM {
  provides interface ECDH;
  uses {
    interface NN;
    interface ECC;
    interface SHA1;
  }
}

implementation {

#ifdef SLIDING_WIN
  Point baseArray[NUM_POINTS];
#ifdef PROJECTIVE
  ZCoordinate ZList[NUM_POINTS];
#endif
#endif

  //init ECDH module
#ifdef CODE_SIZE
  command void ECDH.init() __attribute__((noinline)){
#else
  command void ECDH.init(){
#endif

    call ECC.init();
  }

  //key agreement, K is the established key, ShareInfo not implemented
#ifdef CODE_SIZE
  command int ECDH.key_agree(uint8_t *K, NN_UINT keydatalen, Point *PublicKey, NN_DIGIT *PrivateKey) __attribute__((noinline)){
#else
  command int ECDH.key_agree(uint8_t *K, NN_UINT keydatalen, Point *PublicKey, NN_DIGIT *PrivateKey){
#endif

    Point tempP;
    uint8_t z[KEYDIGITS*NN_DIGIT_LEN+4];
    int len;
    uint8_t i;
    uint8_t sha1sum[20];
    SHA1Context ctx;

    //compute PrivateKey * PublicKey
#ifdef SLIDING_WIN
#ifdef PROJECTIVE
    call ECC.win_precompute_Z(PublicKey, baseArray, ZList);
    call ECC.win_mul_Z(&tempP, PrivateKey, baseArray, ZList);
#else
    call ECC.win_precompute(PublicKey, baseArray);
    call ECC.win_mul(&tempP, PrivateKey, baseArray);
#endif //PROJECTIVE
#else  //SLIDING_WIN
    call ECC.mul(&tempP, PublicKey, PrivateKey);
#endif  //SLIDING_WIN

    //if tempP = O, return 0 (invalid)
    if (call NN.Zero(tempP.x, NUMWORDS) && call NN.Zero(tempP.y, NUMWORDS))
      return 0;
    //z = tempP.x
    call NN.Encode(z, KEYDIGITS*NN_DIGIT_LEN, tempP.x, NUMWORDS);
    memset(z + KEYDIGITS*NN_DIGIT_LEN, 0, 3);
    //KDF
    //|z|+|ShareInfo|+4 < 2^64, no need to check
    //keydatalen < 20*(2^32-1), no need to check
    len = keydatalen;
    i = 1;
    while(len > 0){
      z[KEYDIGITS*NN_DIGIT_LEN + 3] = i;
      call SHA1.reset(&ctx);
      call SHA1.update(&ctx, z, KEYDIGITS*NN_DIGIT_LEN+4);
      call SHA1.digest(&ctx, sha1sum);
      if(len >= 20){
	memcpy(K+(i-1)*20, sha1sum, 20);
      }else{
	memcpy(K+(i-1)*20, sha1sum, len);
      }
      i++;
      len = len - 20;
    }
    return 1;
  }


}
