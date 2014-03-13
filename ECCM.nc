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
 * ECCM, the module implement ECC.nc
 */

includes NN;
includes ECC;

module ECCM {
  provides interface ECC;
  uses interface NN;
  uses interface CurveParam;
  uses interface Random;
}

implementation {
  //parameters for ECC operations
  Params param;

#ifdef BARRETT_REDUCTION
  Barrett Bbuf;
#endif


#ifdef SLIDING_WIN
  //precomputed array for base point
  Point pBaseArray[NUM_POINTS];
  //masks for sliding window method
  NN_DIGIT mask[NUM_MASKS];
#endif


  void c_add_projective(Point * P0, NN_DIGIT *Z0, Point * P1, NN_DIGIT * Z1, Point * P2, NN_DIGIT * Z2);
  void c_add_mix(Point * P0, NN_DIGIT *Z0, Point * P1, NN_DIGIT * Z1, Point * P2);
  void c_dbl_projective(Point * P0, NN_DIGIT *Z0, Point * P1, NN_DIGIT * Z1);


  // test whether the ith bit in a is one
  NN_DIGIT b_testbit(NN_DIGIT * a, int16_t i)
  {
    return (*(a + (i / NN_DIGIT_BITS)) & ((NN_DIGIT)1 << (i % NN_DIGIT_BITS)));
  }
  
  // set P0's x and y to zero
  void p_clear(Point * P0)
  {
    call NN.AssignZero(P0->x, NUMWORDS);
    call NN.AssignZero(P0->y, NUMWORDS);
  }

  // P0 = P1
  void p_copy(Point * P0, Point * P1)
  {
    call NN.Assign(P0->x, P1->x, NUMWORDS);
    call NN.Assign(P0->y, P1->y, NUMWORDS);
  }

  // test whether x and y of P0 is all zero
  bool p_iszero(Point * P0)
  {
    bool result = FALSE;
    
    if (call NN.Zero(P0->x, NUMWORDS))
      if (call NN.Zero(P0->y, NUMWORDS))
        result = TRUE;
    return result;
  }

  // test whether points P1 and P2 are equal
  bool p_equal(Point * P1, Point * P2)
  {
    if (call NN.Equal(P1->x, P2->x, NUMWORDS))
      if (call NN.Equal(P1->y, P2->y, NUMWORDS))
        return TRUE;
    return FALSE;
  }

  // test whether Z is one
  bool Z_is_one(NN_DIGIT *Z)
  {
    uint8_t i;
    
    for (i = 1; i < NUMWORDS; i++)
      if (Z[i])
        return FALSE;
    if (Z[0] == 1)
      return TRUE;
    
    return FALSE;
  }

  // Point addition, P0 = P1 + P2
  void c_add(Point * P0, Point * P1, Point * P2)
  {
    NN_DIGIT Z0[NUMWORDS];
    NN_DIGIT Z1[NUMWORDS];
    NN_DIGIT Z2[NUMWORDS];
    
    p_clear(P0);
    call NN.AssignZero(Z0, NUMWORDS);
    call NN.AssignZero(Z1, NUMWORDS);
    call NN.AssignZero(Z2, NUMWORDS);
    Z1[0] = 0x01;
    Z2[0] = 0x01;

#ifdef ADD_MIX
    c_add_mix(P0, Z0, P1, Z1, P2);
#else
    c_add_projective(P0, Z0, P1, Z1, P2, Z2);
#endif

    if (!Z_is_one(Z0))
    {
      call NN.ModInv(Z1, Z0, param.p, NUMWORDS);
      call NN.ModMultOpt(Z0, Z1, Z1, param.p, param.omega, NUMWORDS);
      call NN.ModMultOpt(P0->x, P0->x, Z0, param.p, param.omega, NUMWORDS);
      call NN.ModMultOpt(Z0, Z0, Z1, param.p, param.omega, NUMWORDS);
      call NN.ModMultOpt(P0->y, P0->y, Z0, param.p, param.omega, NUMWORDS);
    }

  }

#ifdef ADD_MIX
  void c_add_mix(Point * P0, NN_DIGIT *Z0, Point * P1, NN_DIGIT * Z1, Point * P2)
  {
    NN_DIGIT t1[NUMWORDS];
    NN_DIGIT t2[NUMWORDS];
    NN_DIGIT t3[NUMWORDS];
    NN_DIGIT t4[NUMWORDS];
    NN_DIGIT Z2[NUMWORDS];

    //P2 == infinity
    if (call NN.Zero(P2->x, NUMWORDS)){
      if (call NN.Zero(P2->y, NUMWORDS)){
	p_copy(P0, P1);
	call NN.Assign(Z0, Z1, NUMWORDS);
	return;
      }
    }
    
    //P1 == infinity
    if (call NN.Zero(Z1, NUMWORDS)){
      p_copy(P0, P2);
      call NN.AssignDigit(Z0, 1, NUMWORDS);
      return;
    }
    //T1 = Z1^2
    call NN.ModSqrOpt(t1, Z1, param.p, param.omega, NUMWORDS);
    //T2 = T1*Z1
    call NN.ModMultOpt(t2, t1, Z1, param.p, param.omega, NUMWORDS);
    //T1 = T1*P2->x
    call NN.ModMultOpt(t1, t1, P2->x, param.p, param.omega, NUMWORDS);
    //T2 = T2*P2->y
    call NN.ModMultOpt(t2, t2, P2->y, param.p, param.omega, NUMWORDS);
    //T1 = T1-P1->x
    call NN.ModSub(t1, t1, P1->x, param.p, NUMWORDS);
    //T2 = T2-P1->y
    call NN.ModSub(t2, t2, P1->y, param.p, NUMWORDS);

    if (call NN.Zero(t1, NUMWORDS)){
      if (call NN.Zero(t2, NUMWORDS)){
	call NN.AssignDigit(Z2, 1, NUMWORDS);
	c_dbl_projective(P0, Z0, P2, Z2);
	return;
      }else{
	call NN.AssignDigit(Z0, 0, NUMWORDS);
	return;
      }
    }
    //Z3 = Z1*T1
    call NN.ModMultOpt(Z0, Z1, t1, param.p, param.omega, NUMWORDS);
    //T3 = T1^2
    call NN.ModSqrOpt(t3, t1, param.p, param.omega, NUMWORDS);
    //T4 = T3*T1
    call NN.ModMultOpt(t4, t3, t1, param.p, param.omega, NUMWORDS);
    //T3 = T3*P1->x
    call NN.ModMultOpt(t3, t3, P1->x, param.p, param.omega, NUMWORDS);
    //T1 = 2*T3
    call NN.LShift(t1, t3, 1, NUMWORDS);
    call NN.ModSmall(t1, param.p, NUMWORDS);
    //P0->x = T2^2
    call NN.ModSqrOpt(P0->x, t2, param.p, param.omega, NUMWORDS);
    //P0->x = P0->x-T1
    call NN.ModSub(P0->x, P0->x, t1, param.p, NUMWORDS);
    //P0->x = P0->x-T4
    call NN.ModSub(P0->x, P0->x, t4, param.p, NUMWORDS);
    //T3 = T3-P0->x
    call NN.ModSub(t3, t3, P0->x, param.p, NUMWORDS);
    //T3 = T3*T2
    call NN.ModMultOpt(t3, t3, t2, param.p, param.omega, NUMWORDS);
    //T4 = T4*P1->y
    call NN.ModMultOpt(t4, t4, P1->y, param.p, param.omega, NUMWORDS);
    //P0->y = T3-T4
    call NN.ModSub(P0->y, t3, t4, param.p, NUMWORDS);

    return;
  }
#endif

  // (P0,Z0) = (P1,Z1) + (P2,Z2)  in Jacobian projective coordinate
  // P0, P1, P2 can be same pointer
  void c_add_projective(Point * P0, NN_DIGIT *Z0, Point * P1, NN_DIGIT * Z1, Point * P2, NN_DIGIT * Z2)
  {
    NN_DIGIT n0[NUMWORDS];
    NN_DIGIT n1[NUMWORDS];
    NN_DIGIT n2[NUMWORDS];
    NN_DIGIT n3[NUMWORDS];
    NN_DIGIT n4[NUMWORDS];
    NN_DIGIT n5[NUMWORDS];
    NN_DIGIT n6[NUMWORDS];

    if (call NN.Zero(Z1, NUMWORDS))
    {
      p_copy(P0, P2);
      call NN.Assign(Z0, Z2, NUMWORDS);
      return;
    }

    if (call NN.Zero(Z2, NUMWORDS))
    {
      p_copy(P0, P1);
      call NN.Assign(Z0, Z1, NUMWORDS);
      return;
    }
    
    //double
    if (p_equal(P1, P2))
    {
      c_dbl_projective(P0, Z0, P1, Z1);
      return;
    }
    
    //add_proj
    //n1, n2
    if (Z_is_one(Z2))
    {
      // n1 = P1->x, n2 = P1->y
      call NN.Assign(n1, P1->x, NUMWORDS);
      call NN.Assign(n2, P1->y, NUMWORDS);
    }
    else
    {
      //n1 = P1->x * Z2^2
      call NN.ModSqrOpt(n0, Z2, param.p, param.omega, NUMWORDS);
      call NN.ModMultOpt(n1, P1->x, n0, param.p, param.omega, NUMWORDS);
      //n2 = P1->y * Z2^3
      call NN.ModMultOpt(n0, n0, Z2, param.p, param.omega, NUMWORDS);
      call NN.ModMultOpt(n2, P1->y, n0, param.p, param.omega, NUMWORDS);
    }
    
    // n3, n4
    if (Z_is_one(Z1))
    {
      // n3 = P2->x, n4 = P2->y
      call NN.Assign(n3, P2->x, NUMWORDS);
      call NN.Assign(n4, P2->y, NUMWORDS);
    }
    else
    {
      // n3 = P2->x * Z1^2
      call NN.ModSqrOpt(n0, Z1, param.p, param.omega, NUMWORDS);
      call NN.ModMultOpt(n3, P2->x, n0, param.p, param.omega, NUMWORDS);
      // n4 = P2->y * Z1^3
      call NN.ModMultOpt(n0, n0, Z1, param.p, param.omega, NUMWORDS);
      call NN.ModMultOpt(n4, P2->y, n0, param.p, param.omega, NUMWORDS);
    }
    
    // n5 = n1 - n3, n6 = n2 - n4
    call NN.ModSub(n5, n1, n3, param.p, NUMWORDS);
    call NN.ModSub(n6, n2, n4, param.p, NUMWORDS);
    
    if (call NN.Zero(n5, NUMWORDS))
      if (call NN.Zero(n6, NUMWORDS))
      {
        // P1 and P2 are same point
        c_dbl_projective(P0, Z0, P1, Z1);
	return;
      }
      else
      {
        // P1 is the inverse of P2
        call NN.AssignZero(Z0, NUMWORDS);
        return;
      }
    
    // 'n7' = n1 + n3, 'n8' = n2 + n4
    call NN.ModAdd(n1, n1, n3, param.p, NUMWORDS);
    call NN.ModAdd(n2, n2, n4, param.p, NUMWORDS);
    
    // Z0 = Z1 * Z2 * n5
    if (Z_is_one(Z1) && Z_is_one(Z2))
    {
      call NN.Assign(Z0, n5, NUMWORDS);
    }
    else
    {
      if (Z_is_one(Z1))
	call NN.Assign(n0, Z2, NUMWORDS);
      else if (Z_is_one(Z2))
	call NN.Assign(n0, Z1, NUMWORDS);
      else
	call NN.ModMultOpt(n0, Z1, Z2, param.p, param.omega, NUMWORDS);
	  
      call NN.ModMultOpt(Z0, n0, n5, param.p, param.omega, NUMWORDS);
    }
    
    // P0->x = n6^2 - n5^2 * 'n7'
    call NN.ModSqrOpt(n0, n6, param.p, param.omega, NUMWORDS);
    call NN.ModSqrOpt(n4, n5, param.p, param.omega, NUMWORDS);
    call NN.ModMultOpt(n3, n1, n4, param.p, param.omega, NUMWORDS);
    call NN.ModSub(P0->x, n0, n3, param.p, NUMWORDS);
	
    // 'n9' = n5^2 * 'n7' - 2 * P0->x
    call NN.LShift(n0, P0->x, 1, NUMWORDS);
    call NN.ModSmall(n0, param.p, NUMWORDS);
    call NN.ModSub(n0, n3, n0, param.p, NUMWORDS);
	
    // P0->y = (n6 * 'n9' - 'n8' * 'n5^3') / 2
    call NN.ModMultOpt(n0, n0, n6, param.p, param.omega, NUMWORDS);
    call NN.ModMultOpt(n5, n4, n5, param.p, param.omega, NUMWORDS);
    call NN.ModMultOpt(n1, n2, n5, param.p, param.omega, NUMWORDS);
    call NN.ModSub(n0, n0, n1, param.p, NUMWORDS);
	
    if ((n0[0] % 2) == 1)
      call NN.Add(n0, n0, param.p, NUMWORDS);
	
    call NN.RShift(P0->y, n0, 1, NUMWORDS);
   
  }


  // (P0,Z0) = 2*(P1,Z1)
  // P0 and P1 can be same pointer
  void c_dbl_projective(Point * P0, NN_DIGIT *Z0, Point * P1, NN_DIGIT * Z1)
  {
    NN_DIGIT n0[NUMWORDS];
    NN_DIGIT n1[NUMWORDS];
    NN_DIGIT n2[NUMWORDS];
    NN_DIGIT n3[NUMWORDS];

    if (call NN.Zero(Z1, NUMWORDS))
    {
      call NN.AssignZero(Z0, NUMWORDS);
      return;
    }

    // n1
    if (Z_is_one(Z1))
    {
      // n1 = 3 * P1->x^2 + param.E.a
      call NN.ModSqrOpt(n0, P1->x, param.p, param.omega, NUMWORDS);
      call NN.LShift(n1, n0, 1, NUMWORDS);
      call NN.ModSmall(n1, param.p, NUMWORDS);
      call NN.ModAdd(n0, n0, n1, param.p, NUMWORDS);
      call NN.ModAdd(n1, n0, param.E.a, param.p, NUMWORDS);
    }
    else
    {
      if (param.E.a_minus3)
      {
        //for a = -3
	// n1 = 3 * (X1 + Z1^2) * (X1 - Z1^2) = 3 * X1^2 - 3 * Z1^4
	call NN.ModSqrOpt(n1, Z1, param.p, param.omega, NUMWORDS);
	call NN.ModAdd(n0, P1->x, n1, param.p, NUMWORDS);
	call NN.ModSub(n2, P1->x, n1, param.p, NUMWORDS);
	call NN.ModMultOpt(n1, n0, n2, param.p, param.omega, NUMWORDS);
	call NN.LShift(n0, n1, 1, NUMWORDS);
	call NN.ModSmall(n0, param.p, NUMWORDS);
	call NN.ModAdd(n1, n0, n1, param.p, NUMWORDS);
      }
      else if (param.E.a_zero)
      {
	// n1 = 3 * P1->x^2
	call NN.ModSqrOpt(n0, P1->x, param.p, param.omega, NUMWORDS);
	call NN.LShift(n1, n0, 1, NUMWORDS);
	call NN.ModSmall(n1, param.p, NUMWORDS);
	call NN.ModAdd(n1, n0, n1, param.p, NUMWORDS);
      }
      else
      {
	// n1 = 3 * P1->x^2 + param.E.a * Z1^4
	call NN.ModSqrOpt(n0, P1->x, param.p, param.omega, NUMWORDS);
	call NN.LShift(n1, n0, 1, NUMWORDS);
	call NN.ModSmall(n1, param.p, NUMWORDS);
	call NN.ModAdd(n0, n0, n1, param.p, NUMWORDS);
	call NN.ModSqrOpt(n1, Z1, param.p, param.omega, NUMWORDS);
	call NN.ModSqrOpt(n1, n1, param.p, param.omega, NUMWORDS);
	call NN.ModMultOpt(n1, n1, param.E.a, param.p, param.omega, NUMWORDS);
	call NN.ModAdd(n1, n1, n0, param.p, NUMWORDS);
      }
    }

    // Z0 = 2 * P1->y * Z1
    if (Z_is_one(Z1))
    {
      call NN.Assign(n0, P1->y, NUMWORDS);
    }
    else
    {
      call NN.ModMultOpt(n0, P1->y, Z1, param.p, param.omega, NUMWORDS);
    }
    call NN.LShift(Z0, n0, 1, NUMWORDS);
    call NN.ModSmall(Z0, param.p, NUMWORDS);

    // n2 = 4 * P1->x * P1->y^2
    call NN.ModSqrOpt(n3, P1->y, param.p, param.omega, NUMWORDS);
    call NN.ModMultOpt(n2, P1->x, n3, param.p, param.omega, NUMWORDS);
    call NN.LShift(n2, n2, 2, NUMWORDS);
    call NN.ModSmall(n2, param.p, NUMWORDS);

    // P0->x = n1^2 - 2 * n2
    call NN.LShift(n0, n2, 1, NUMWORDS);
    call NN.ModSmall(n0, param.p, NUMWORDS);
    call NN.ModSqrOpt(P0->x, n1, param.p, param.omega, NUMWORDS);
    call NN.ModSub(P0->x, P0->x, n0, param.p, NUMWORDS);

    // n3 = 8 * P1->y^4
    call NN.ModSqrOpt(n0, n3, param.p, param.omega, NUMWORDS);
    call NN.LShift(n3, n0, 3, NUMWORDS);
    call NN.ModSmall(n3, param.p, NUMWORDS);

    // P0->y = n1 * (n2 - P0->x) - n3
    call NN.ModSub(n0, n2, P0->x, param.p, NUMWORDS);
    call NN.ModMultOpt(n0, n1, n0, param.p, param.omega, NUMWORDS);
    call NN.ModSub(P0->y, n0, n3, param.p, NUMWORDS);

  }

#ifdef REPEAT_DOUBLE
  //m repeated point doublings (Algorithm 3.23 in "Guide to ECC")
  void c_m_dbl_projective(Point * P0, NN_DIGIT *Z0, uint8_t m){
    uint8_t i;
    NN_DIGIT W[NUMWORDS];
    NN_DIGIT A[NUMWORDS];
    NN_DIGIT B[NUMWORDS];
    NN_DIGIT t1[NUMWORDS];
    NN_DIGIT y2[NUMWORDS];
    
    if (call NN.Zero(Z0, NUMWORDS)){
      return;
    }

    //P0->y = 2*P0->y
    call NN.LShift(P0->y, P0->y, 1, NUMWORDS);
    call NN.ModSmall(P0->y, param.p, NUMWORDS);
    //W = Z^4
    call NN.ModSqrOpt(W, Z0, param.p, param.omega, NUMWORDS);
    call NN.ModSqrOpt(W, W, param.p, param.omega, NUMWORDS);
    
    for (i=0; i<m; i++){
      if (param.E.a_minus3){
	//A = 3(X^2-W)
	call NN.ModSqrOpt(A, P0->x, param.p, param.omega, NUMWORDS);
	call NN.ModSub(A, A, W, param.p, NUMWORDS);
	call NN.LShift(t1, A, 1, NUMWORDS);
	call NN.ModSmall(t1, param.p, NUMWORDS);
	call NN.ModAdd(A, A, t1, param.p, NUMWORDS);
      }else if (param.E.a_zero){
	//A = 3*X^2
	call NN.ModSqrOpt(t1, P0->x, param.p, param.omega, NUMWORDS);
	call NN.LShift(A, t1, 1, NUMWORDS);
	call NN.ModSmall(A, param.p, NUMWORDS);
	call NN.ModAdd(A, A, t1, param.p, NUMWORDS);
      }else{
	//A = 3*X^2 + a*W
	call NN.ModSqrOpt(t1, P0->x, param.p, param.omega, NUMWORDS);
	call NN.LShift(A, t1, 1, NUMWORDS);
	call NN.ModSmall(A, param.p, NUMWORDS);
	call NN.ModAdd(A, A, t1, param.p, NUMWORDS);
	call NN.ModMultOpt(t1, param.E.a, W, param.p, param.omega, NUMWORDS);
	call NN.ModAdd(A, A, t1, param.p, NUMWORDS);
      }
      //B = X*Y^2
      call NN.ModSqrOpt(y2, P0->y, param.p, param.omega, NUMWORDS);
      call NN.ModMultOpt(B, P0->x, y2, param.p, param.omega, NUMWORDS);
      //X = A^2 - 2B
      call NN.ModSqrOpt(P0->x, A, param.p, param.omega, NUMWORDS);
      call NN.LShift(t1, B, 1, NUMWORDS);
      call NN.ModSmall(t1, param.p, NUMWORDS);
      call NN.ModSub(P0->x, P0->x, t1, param.p, NUMWORDS);
      //Z = Z*Y
      call NN.ModMultOpt(Z0, Z0, P0->y, param.p, param.omega, NUMWORDS);
      call NN.ModSqrOpt(y2, y2, param.p, param.omega, NUMWORDS);
      if (i < m-1){
	//W = W*Y^4
	call NN.ModMultOpt(W, W, y2, param.p, param.omega, NUMWORDS);
      }
      //Y = 2A(B-X)-Y^4
      call NN.LShift(A, A, 1, NUMWORDS);
      call NN.ModSmall(A, param.p, NUMWORDS);
      call NN.ModSub(B, B, P0->x, param.p, NUMWORDS);
      call NN.ModMultOpt(A, A, B, param.p, param.omega, NUMWORDS);
      call NN.ModSub(P0->y, A, y2, param.p, NUMWORDS);
    }
    if ((P0->y[0] % 2) == 1)
      call NN.Add(P0->y, P0->y, param.p, NUMWORDS);
    call NN.RShift(P0->y, P0->y, 1, NUMWORDS);
  }
#endif

#ifdef AFFINE
  //P0 = 2*P1, P0 and P1 can be same point
  void c_dbl_affine(Point *P0, Point *P1){
    NN_DIGIT t1[NUMWORDS], t2[NUMWORDS], slope[NUMWORDS];
    
    if(call NN.Zero(P1->y, NUMWORDS))
      return;
    call NN.ModSqrOpt(t1, P1->x, param.p, param.omega, NUMWORDS); //x1^2
    call NN.LShift(t2, t1, 1, NUMWORDS);
    if(call NN.Cmp(t2, param.p, NUMWORDS) >= 0)
      call NN.Sub(t2, t2, param.p, NUMWORDS); //2*x1^2
    call NN.ModAdd(t2, t2, t1, param.p, NUMWORDS); //3*x1^2 
    call NN.ModAdd(t1, t2, param.E.a, param.p, NUMWORDS); //t1 = 3*x1^2+a
    call NN.LShift(t2, P1->y, 1, NUMWORDS);
    if(call NN.Cmp(t2, param.p, NUMWORDS) >= 0)
     call NN.Sub(t2, t2, param.p, NUMWORDS); //t2 = 2*y1
    call NN.ModDiv(slope, t1, t2, param.p, NUMWORDS); //(3x1^2+a)/(2y1) 
    call NN.ModSqrOpt(t1, slope, param.p, param.omega, NUMWORDS); //[(3x1^2+a)/(2y1)]^2
    call NN.LShift(t2, P1->x, 1, NUMWORDS);
    if(call NN.Cmp(t2, param.p, NUMWORDS) >= 0)
      call NN.Sub(t2, t2, param.p, NUMWORDS); //2*x1
    call NN.ModSub(t1, t1, t2, param.p, NUMWORDS); //t1 = P0.x = [(3x1^2+a)/(2y1)]^2 - 2x1
    call NN.ModSub(t2, P1->x, t1, param.p, NUMWORDS); //x1-P0.x
    call NN.ModMultOpt(t2, slope, t2, param.p, param.omega, NUMWORDS); //[(3x1^2+a)/(2y1)](x1-P0.x)
    call NN.ModSub(P0->y, t2, P1->y, param.p, NUMWORDS); //[(3x1^2+a)/(2y1)](x1-P0.x)-y1
    call NN.Assign(P0->x, t1, NUMWORDS);
  }

  //P0 = P1 + P2, P0 and P1 can be same point
  void c_add_affine(Point *P0, Point *P1, Point *P2){
    NN_DIGIT t1[NUMWORDS], t2[NUMWORDS], slope[NUMWORDS];

    if (p_equal(P1, P2)){
      c_dbl_affine(P0, P1);
      return;
    }
    if (p_iszero(P1)){
      p_copy(P0, P2);
      return;
    }else if(p_iszero(P2)){
      p_copy(P0, P1);
      return;
    }
    call NN.ModSub(t1, P2->y, P1->y, param.p, NUMWORDS); //y2-y1
    call NN.ModSub(t2, P2->x, P1->x, param.p, NUMWORDS); //x2-x1
    call NN.ModDiv(slope, t1, t2, param.p, NUMWORDS); //(y2-y1)/(x2-x1) 
    call NN.ModSqrOpt(t1, slope, param.p, param.omega, NUMWORDS); //[(y2-y1)/(x2-x1)]^2
    call NN.ModSub(t2, t1, P1->x, param.p, NUMWORDS); 
    call NN.ModSub(t1, t2, P2->x, param.p, NUMWORDS); //P0.x = [(y2-y1)/(x2-x1)]^2 - x1 - x2
    call NN.ModSub(t2, P1->x, t1, param.p, NUMWORDS); //x1-P0.x
    call NN.ModMultOpt(t2, t2, slope, param.p, param.omega, NUMWORDS); //(x1-P0.x)(y2-y1)/(x2-x1)
    call NN.ModSub(P0->y, t2, P1->y, param.p, NUMWORDS); //P0.y=(x1-P0.x)(y2-y1)/(x2-x1)-y1
    call NN.Assign(P0->x, t1, NUMWORDS);
  }
#endif


  //initialize parameters for ECC module
#ifdef CODE_SIZE
  command void ECC.init()__attribute__ ((noinline))
#else
  command void ECC.init()
#endif
  {
    //call Random.init();
    // get parameters
    call CurveParam.get_param(&param);

#ifdef BARRETT_REDUCTION
    call NN.ModBarrettInit(param.p, NUMWORDS, &Bbuf);
#endif

#ifdef SLIDING_WIN
    //precompute array for base point
    call ECC.win_precompute(&(param.G), pBaseArray);
#endif
  }

  command uint8_t ECC.reinit(ECCState *s){
    if (!s) return 0;
    memcpy(&param, &(s->p), sizeof(Params));
    memcpy(&Bbuf, &(s->b), sizeof(Barrett));
    memcpy(&mask, s->mask, NUM_MASKS);
    memcpy(&pBaseArray, s->pBaseArray, sizeof(Point) * NUM_POINTS);
    return 1;
  }

  command uint8_t ECC.saveState(ECCState *s){
    if (!s) return 0;
    memcpy(&(s->p), &param, sizeof(Params));
    memcpy(&(s->b), &Bbuf, sizeof(Barrett));
    memcpy(s->mask, &mask, NUM_MASKS);
    memcpy(s->pBaseArray, &pBaseArray, sizeof(Point) * NUM_POINTS);
    return 1;
  }


#ifdef BARRETT_REDUCTION
  command void ECC.BarrettSetBuf(){
    call NN.BarrettSetBuf(&Bbuf);
  }
#endif
  
  command int ECC.point2octet(uint8_t *octet, NN_UINT octet_len, Point *P, bool compress){

    if (compress){
      if(octet_len < KEYDIGITS*NN_DIGIT_LEN+1){
	//too small octet
	return -1;
      }else{
	//compressed point representation
	if((1 & P->y[0]) == 0){
	  octet[0] = 0x02;
	}else{
	  octet[0] = 0x03;
	}
	call NN.Encode(octet+1, KEYDIGITS*NN_DIGIT_LEN, P->x, KEYDIGITS);
	return KEYDIGITS*NN_DIGIT_LEN+1;
      }
    }else{//non compressed
      if(octet_len < 2*KEYDIGITS*NN_DIGIT_LEN+1){
	return -1;
      }else{
	octet[0] = 0x04;
	call NN.Encode(octet+1, KEYDIGITS*NN_DIGIT_LEN, P->x, KEYDIGITS);
	call NN.Encode(octet+1+KEYDIGITS*NN_DIGIT_LEN, KEYDIGITS*NN_DIGIT_LEN, P->y, KEYDIGITS);
	return 2*KEYDIGITS*NN_DIGIT_LEN+1;
      }
    }
  }

  command int ECC.octet2point(Point *P, uint8_t *octet, int octet_len){
    NN_DIGIT alpha[NUMWORDS], tmp[NUMWORDS];

    if (octet[0] == 0){//infinity
      call NN.AssignZero(P->x, NUMWORDS);
      call NN.AssignZero(P->y, NUMWORDS);
    }else if (octet[0] == 4){//non compressed
      call NN.Decode(P->x, NUMWORDS, octet+1, KEYDIGITS*NN_DIGIT_LEN);
      call NN.Decode(P->y, NUMWORDS, octet+1+KEYDIGITS*NN_DIGIT_LEN, KEYDIGITS*NN_DIGIT_LEN);
      return 2*KEYDIGITS*NN_DIGIT_LEN+1;
    }else if (octet[0] == 2 || octet[0] == 3){//compressed form
      call NN.Decode(P->x, NUMWORDS, octet+1, KEYDIGITS*NN_DIGIT_LEN);
      //compute y
      call NN.ModSqrOpt(alpha, P->x, param.p, param.omega, NUMWORDS);
      call NN.ModMultOpt(alpha, alpha, P->x, param.p, param.omega, NUMWORDS);
      call NN.ModMultOpt(tmp, param.E.a, P->x, param.p, param.omega, NUMWORDS);
      call NN.ModAdd(tmp, tmp, alpha, param.p, NUMWORDS);
      call NN.ModAdd(tmp, tmp, param.E.b, param.p, NUMWORDS);
      call NN.ModSqrRootOpt(P->y, tmp, param.p, NUMWORDS, param.omega);
      if(octet[0] == 3){
	call NN.ModSub(P->y, param.p, P->y, param.p, NUMWORDS);
      }
      return KEYDIGITS*NN_DIGIT_LEN+1;
    }
    return -1;
  }

  command int ECC.check_point(Point *P){
    NN_DIGIT tmp1[NUMWORDS], tmp2[NUMWORDS];
    
    if (call NN.Zero(P->x, NUMWORDS))
      return -1;
    if (call NN.Cmp(P->x, param.p, NUMWORDS) >= 0)
      return -1;
    if (call NN.Zero(P->y, NUMWORDS))
      return -1;
    if (call NN.Cmp(P->y, param.p, NUMWORDS) >= 0)
      return -1;
    
    memset(tmp1, 0, NUMWORDS*NN_DIGIT_LEN);
    memset(tmp2, 0, NUMWORDS*NN_DIGIT_LEN);
    call NN.ModSqrOpt(tmp2, P->x, param.p, param.omega, NUMWORDS);
    call NN.ModMultOpt(tmp2, tmp2, P->x, param.p, param.omega, NUMWORDS);
    call NN.ModMultOpt(tmp1, P->x, param.E.a, param.p, param.omega, NUMWORDS);
    call NN.ModAdd(tmp2, tmp1, tmp2, param.p, NUMWORDS);
    call NN.ModAdd(tmp2, tmp2, param.E.b, param.p, NUMWORDS);
    call NN.ModSqrOpt(tmp1, P->y, param.p, param.omega, NUMWORDS);
    if(call NN.Cmp(tmp1, tmp2, NUMWORDS) != 0)
      return -2;
    
    return 1;
  }

  command bool ECC.point_is_zero(Point *P){
    return p_iszero(P);
  }
  
  // curve routines
  // P0 = P1 + P2
  command void ECC.add(Point * P0, Point * P1, Point * P2)
  {
#ifdef AFFINE
    c_add_affine(P0, P1, P2);
#else
    c_add(P0, P1, P2);
#endif
  }

#ifdef AFFINE
  command void ECC.add_affine(Point * P0, Point * P1, Point * P2){
    c_add_affine(P0, P1, P2);
  }

  command void ECC.dbl_affine(Point *P0, Point *P1){
    c_dbl_affine(P0, P1);
  }
#endif

  // scalar point multiplication
  // P0 = n*P1
  // P0 and P1 can not be same point
  command void ECC.mul(Point * P0, Point * P1, NN_DIGIT * n)
  {
#ifdef AFFINE
    int16_t i, tmp;

    // clear point
    p_clear(P0);
    tmp = call NN.Bits(n, NUMWORDS);

    for (i = tmp-1; i >= 0; i--){
      c_dbl_affine(P0, P0);
      if (b_testbit(n, i)){
	c_add_affine(P0, P0, P1);
      }
    }

#else//projective
    int16_t i, tmp;
    NN_DIGIT Z0[NUMWORDS];
    NN_DIGIT Z1[NUMWORDS];

    // clear point
    p_clear(P0);
    
    //convert to Jprojective coordinate
    call NN.AssignZero(Z0, NUMWORDS);
    call NN.AssignZero(Z1, NUMWORDS);
    Z1[0] = 0x01;

    tmp = call NN.Bits(n, NUMWORDS);

    for (i = tmp-1; i >= 0; i--)
    {

      c_dbl_projective(P0, Z0, P0, Z0);

      if (b_testbit(n, i))
      {
        	
#ifdef ADD_MIX
	c_add_mix(P0, Z0, P0, Z0, P1);
#else
	c_add_projective(P0, Z0, P0, Z0, P1, Z1);
#endif
      }
    }   
    //convert back to affine coordinate
    if (!Z_is_one(Z0))
    {
      call NN.ModInv(Z1, Z0, param.p, NUMWORDS);
      call NN.ModMultOpt(Z0, Z1, Z1, param.p, param.omega, NUMWORDS);
      call NN.ModMultOpt(P0->x, P0->x, Z0, param.p, param.omega, NUMWORDS);
      call NN.ModMultOpt(Z0, Z0, Z1, param.p, param.omega, NUMWORDS);
      call NN.ModMultOpt(P0->y, P0->y, Z0, param.p, param.omega, NUMWORDS);
    }
#endif
  }

#ifdef SLIDING_WIN
  // precompute the array of base point for sliding window method
  command void ECC.win_precompute(Point * baseP, Point * pointArray)
  {
    uint8_t i;
    
    call NN.Assign(pointArray[0].x, baseP->x, NUMWORDS);
    call NN.Assign(pointArray[0].y, baseP->y, NUMWORDS);

    for (i = 1; i < NUM_POINTS; i++){      
#ifdef AFFINE
      c_add_affine(&(pointArray[i]), &(pointArray[i-1]), baseP);
#else
      c_add(&(pointArray[i]), &(pointArray[i-1]), baseP);
#endif
    }
    
    for (i = 0; i < NUM_MASKS; i++)
      mask[i] = BASIC_MASK << (W_BITS*i);
  }


  // scalar point multiplication
  // P0 = n*basepoint
  // pointArray is array of basepoint, pointArray[0] = basepoint, pointArray[1] = 2*basepoint ...
  void win_mul(Point * P0, NN_DIGIT * n, Point * pointArray)
  {
#ifdef AFFINE

    int16_t i, tmp;
    int8_t j, k;
    NN_DIGIT windex;

    p_clear(P0);    
    tmp = call NN.Digits(n, NUMWORDS);

    for (i = tmp - 1; i >= 0; i--){
      for (j = NN_DIGIT_BITS/W_BITS - 1; j >= 0; j--){
	for (k = 0; k < W_BITS; k++){
	  c_dbl_affine(P0, P0);
	}
        windex = mask[j] & n[i];
        if (windex){
          windex = windex >> (j*W_BITS);
	  c_add_affine(P0, P0, &(pointArray[windex-1]));
	}
      }	
    }

#else //projective    
    int16_t i, tmp;
    int8_t j;
    NN_DIGIT windex;
    NN_DIGIT Z0[NUMWORDS];
    NN_DIGIT Z1[NUMWORDS];
#ifndef REPEAT_DOUBLE
    int8_t k;
#endif

    p_clear(P0);
    
    //convert to Jprojective coordinate
    call NN.AssignZero(Z0, NUMWORDS);
    call NN.AssignZero(Z1, NUMWORDS);
    Z1[0] = 0x01;	
    
    tmp = call NN.Digits(n, NUMWORDS);

    for (i = tmp - 1; i >= 0; i--){ 
      for (j = NN_DIGIT_BITS/W_BITS - 1; j >= 0; j--){

#ifndef REPEAT_DOUBLE
	for (k = 0; k < W_BITS; k++){
	  c_dbl_projective(P0, Z0, P0, Z0);
	}
#else
	c_m_dbl_projective(P0, Z0, W_BITS);
#endif

        windex = mask[j] & n[i];

        if (windex){
          windex = windex >> (j*W_BITS);
#ifdef ADD_MIX 
	  c_add_mix(P0, Z0, P0, Z0, &(pointArray[windex-1]));
#else
	  c_add_projective(P0, Z0, P0, Z0, &(pointArray[windex-1]), Z1);
#endif
	}
      }	
    }

       
    //convert back to affine coordinate
    if (!Z_is_one(Z0))
    {
    
      call NN.ModInv(Z1, Z0, param.p, NUMWORDS);
      call NN.ModMultOpt(Z0, Z1, Z1, param.p, param.omega, NUMWORDS);
      call NN.ModMultOpt(P0->x, P0->x, Z0, param.p, param.omega, NUMWORDS);
      call NN.ModMultOpt(Z0, Z0, Z1, param.p, param.omega, NUMWORDS);
      call NN.ModMultOpt(P0->y, P0->y, Z0, param.p, param.omega, NUMWORDS);
    }
#endif    
  }
  
  /**
   * P0 = n * point, point is pointArray[0]
   * win_precompute must be called before win_mul
   */
  command void ECC.win_mul(Point * P0, NN_DIGIT * n, Point * pointArray)
  {
    win_mul(P0, n, pointArray);
  }
  
  /**
   * P0 = n * basepoint of curve
   * Don't need to call win_precompute before this func, cause init() has called win_precompute
   */
  command void ECC.win_mul_base(Point * P0, NN_DIGIT * n)
  {
    win_mul(P0, n, pBaseArray);
  }

#ifdef PROJECTIVE

  command void ECC.win_precompute_Z(Point * baseP, Point * pointArray, ZCoordinate *ZList){
    uint8_t i;
    
    call NN.Assign(pointArray[0].x, baseP->x, NUMWORDS);
    call NN.Assign(pointArray[0].y, baseP->y, NUMWORDS);
    call NN.AssignZero(ZList[0].z, NUMWORDS);
    ZList[0].z[0] = 0x01;

    for (i = 1; i < NUM_POINTS; i++){
#ifdef ADD_MIX      
      c_add_mix(&(pointArray[i]), ZList[i].z, &(pointArray[i-1]), ZList[i-1].z, baseP);
#else
      c_add_projective(&(pointArray[i]), ZList[i].z, &(pointArray[i-1]), ZList[i-1].z, baseP, ZList[0].z);
#endif
    }

  }

  command void ECC.win_mul_Z(Point *P0, NN_DIGIT *n, Point *pointArray, ZCoordinate *ZList){
    int16_t i, tmp;
    int8_t j;
    NN_DIGIT windex;
    NN_DIGIT Z0[NUMWORDS];
    NN_DIGIT Z1[NUMWORDS];
#ifndef REPEAT_DOUBLE
    int8_t k;
#endif

    p_clear(P0);
    
    //convert to Jprojective coordinate
    call NN.AssignZero(Z0, NUMWORDS);
    call NN.AssignZero(Z1, NUMWORDS);

    tmp = call NN.Digits(n, NUMWORDS);

    for (i = tmp - 1; i >= 0; i--){ 
      for (j = NN_DIGIT_BITS/W_BITS - 1; j >= 0; j--){

#ifndef REPEAT_DOUBLE
	for (k = 0; k < W_BITS; k++){
	  c_dbl_projective(P0, Z0, P0, Z0);
	}
#else
	c_m_dbl_projective(P0, Z0, W_BITS);
#endif

        windex = mask[j] & n[i];

        if (windex){
          windex = windex >> (j*W_BITS);
	  c_add_projective(P0, Z0, P0, Z0, &(pointArray[windex-1]), ZList[windex-1].z);
	}
      }	
    }

       
    //convert back to affine coordinate
    if (!Z_is_one(Z0))
    {
    
      call NN.ModInv(Z1, Z0, param.p, NUMWORDS);
      call NN.ModMultOpt(Z0, Z1, Z1, param.p, param.omega, NUMWORDS);
      call NN.ModMultOpt(P0->x, P0->x, Z0, param.p, param.omega, NUMWORDS);
      call NN.ModMultOpt(Z0, Z0, Z1, param.p, param.omega, NUMWORDS);
      call NN.ModMultOpt(P0->y, P0->y, Z0, param.p, param.omega, NUMWORDS);
    }    
  }
#endif  //PROJECTIVE

#endif  //SLIDING_WIN

  command Params * ECC.get_param(){
    return &param;
  }

#ifndef AFFINE  
  command void ECC.add_proj(Point * P0, NN_DIGIT *Z0, Point * P1, NN_DIGIT * Z1, Point * P2, NN_DIGIT * Z2){
    return c_add_projective(P0, Z0, P1, Z1, P2, Z2);
  }

  command void ECC.dbl_proj(Point * P0, NN_DIGIT *Z0, Point * P1, NN_DIGIT * Z1){
    return c_dbl_projective(P0, Z0, P1, Z1);
  }
#endif

#ifdef CODE_SIZE
  command void ECC.gen_private_key(NN_DIGIT *PrivateKey)__attribute__ ((noinline)){
#else
  command void ECC.gen_private_key(NN_DIGIT *PrivateKey){
#endif

    NN_UINT order_digit_len, order_bit_len;
    bool done = FALSE;
    uint8_t ri;
    NN_DIGIT digit_mask;

    order_bit_len = call NN.Bits(param.r, NUMWORDS);
    order_digit_len = call NN.Digits(param.r, NUMWORDS);

    while(!done){

      for (ri=0; ri<order_digit_len; ri++){
#ifdef THIRTYTWO_BIT_PROCESSOR
	PrivateKey[ri] = call Random.rand32();
#else
	PrivateKey[ri] = (NN_DIGIT)call Random.rand16();
#endif
      }

      for (ri=order_digit_len; ri<NUMWORDS; ri++){
	PrivateKey[ri] = 0;
      }

      if (order_bit_len % NN_DIGIT_BITS != 0){
	digit_mask = MAX_NN_DIGIT >> (NN_DIGIT_BITS - order_bit_len % NN_DIGIT_BITS);
	PrivateKey[order_digit_len - 1] = PrivateKey[order_digit_len - 1] & digit_mask;
      }
      call NN.ModSmall(PrivateKey, param.r, NUMWORDS);

      if (call NN.Zero(PrivateKey, NUMWORDS) != 1)
	done = TRUE;
    }

  }

#ifdef CODE_SIZE
  command void ECC.gen_public_key(Point *PublicKey, NN_DIGIT *PrivateKey)__attribute__ ((noinline)){
#else
  command void ECC.gen_public_key(Point *PublicKey, NN_DIGIT *PrivateKey){
#endif

#ifdef SLIDING_WIN
    win_mul(PublicKey, PrivateKey, pBaseArray);    
#else
    call ECC.mul(PublicKey, &(param.G), PrivateKey);
#endif
  }


}
