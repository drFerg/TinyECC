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
 * ECCC.nc
 * Configuration of Ecc
 *
 * Author: An Liu
 * Date: 09/29/2006
 */

includes NN;
includes ECC;

configuration ECCC {
  provides interface ECC;
}

implementation {
  components ECCM, NNM, RandomLfsrC,
    secp128r1, secp128r2, 
    secp160k1, secp160r1, secp160r2,
    secp192k1, secp192r1;

  ECC = ECCM.ECC;
  ECCM.NN -> NNM.NN;
  ECCM.Random -> RandomLfsrC;

#ifdef TEST_VECTOR
  ECCM.CurveParam -> secp160r1;
  NNM.CurveParam -> secp160r1;
  secp160r1.NN -> NNM;

#else

#ifdef SECP128R1
  ECCM.CurveParam -> secp128r1;
  NNM.CurveParam -> secp128r1;
  secp128r1.NN -> NNM;
#endif

#ifdef SECP128R2
  ECCM.CurveParam -> secp128r2;
  NNM.CurveParam -> secp128r2;
  secp128r2.NN -> NNM;
#endif

#ifdef SECP160K1
  ECCM.CurveParam -> secp160k1;
  NNM.CurveParam -> secp160k1;
  secp160k1.NN -> NNM;
#endif

#ifdef SECP160R1
  ECCM.CurveParam -> secp160r1;
  NNM.CurveParam -> secp160r1;
  secp160r1.NN -> NNM;
#endif

#ifdef SECP160R2
  ECCM.CurveParam -> secp160r2;
  NNM.CurveParam -> secp160r2;
  secp160r2.NN -> NNM;
#endif

#ifdef SECP192K1
  ECCM.CurveParam -> secp192k1;
  NNM.CurveParam -> secp192k1;
  secp192k1.NN -> NNM;
#endif

#ifdef SECP192R1
  ECCM.CurveParam -> secp192r1;
  NNM.CurveParam -> secp192r1;
  secp192r1.NN -> NNM;
#endif

#endif

}
