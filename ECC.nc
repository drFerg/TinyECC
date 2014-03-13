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
 * Interface for ECC operation
 * $Id: ECC.nc,v 1.6 2007/11/02 22:36:39 aliu3 Exp $
 */

includes NN;
includes ECC;

interface ECC {

  // init the parameters and base point array for sliding window method
  // the first function to call
  command void init();
  command uint8_t reinit(ECCState *s);
  command uint8_t saveState(ECCState *s);

  command void gen_private_key(NN_DIGIT *PrivateKey);

  command void gen_public_key(Point *PublicKey, NN_DIGIT *PrivateKey);

  //return the length of octets, octet_len >= 2*NUMWORDS
  command int point2octet(uint8_t *octet, NN_UINT octet_len, Point *P, bool compress);

  command int octet2point(Point *P, uint8_t *octet, int octet_len);

  command int check_point(Point *P);

  command bool point_is_zero(Point *P);

#ifdef BARRETT_REDUCTION
  command void BarrettSetBuf();
#endif  

  // Point addition, P0 = P1 + P2
  command void add(Point * P0, Point * P1, Point * P2);

#ifdef AFFINE
  command void add_affine(Point *P0, Point *P1, Point *P2);

  // Point doubling, P0 = 2*P1
  command void dbl_affine(Point *P0, Point *P1);
#endif

#ifndef AFFINE
  // projective point addition, P0 = P1 + P2
  command void add_proj(Point * P0, NN_DIGIT *Z0, Point * P1, NN_DIGIT * Z1, Point * P2, NN_DIGIT * Z2);

  // projective point doubleing, P0 = 2*P1
  command void dbl_proj(Point * P0, NN_DIGIT *Z0, Point * P1, NN_DIGIT * Z1);
#endif

  // Scalar point multiplication P0 = n * P1
  command void mul(Point * P0, Point * P1, NN_DIGIT * n);
    
#ifdef SLIDING_WIN
  // precompute the points for sliding window method
  command void win_precompute(Point * baseP, Point * pointArray);
    
  // scalr point multiplication using slide window method
  // P0 = n * Point, this Point may not be the base point of curve
  // pointArray is constructed by call win_precompute(Point, pointArray)
  command void win_mul(Point * P0, NN_DIGIT * n, Point * pointArray);
    
  // scalr point multiplication using slide window method, P0 = n * basePoint of curve
  command void win_mul_base(Point * P0, NN_DIGIT * n);

#ifdef PROJECTIVE
  //precompute points in J coordinates for sliding window method
  command void win_precompute_Z(Point * baseP, Point * pointArray, ZCoordinate *ZList);

  command void win_mul_Z(Point *P0, NN_DIGIT *n, Point *pointArray, ZCoordinate *ZList);
#endif

#endif

  //get parameters
  command Params * get_param();


}
