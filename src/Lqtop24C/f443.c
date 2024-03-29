/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F443_out;
static void C443(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[8]*V[8];
C[4]=+4*S[0];
S[1]=V[8]*V[8]*V[8]*V[8];
C[3]=+S[1];
C[2]=+2*S[0];
S[2]=V[39]*V[39]*V[39]*V[39];
S[3]=V[14]*V[14]*V[14]*V[14];
S[4]=V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[2]*S[3]*S[4];
S[5]=V[52]*V[52];
S[6]=V[30]*V[30];
S[7]=V[11]*V[11];
S[8]=V[1]*V[1]*V[1]*V[1];
C[0]=+4*S[5]*S[6]*S[7]*S[8];
}
REAL F443_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                           n2     !  n2                              
                        /==>======!==>==\                            
                        |  P3     !  P3 |                            
                        |         !     |                            
         c     t     W+ |  E2     !  E2 |  W+    t     c             
       ==>==@==>==@-2>--@==<======!==<==@-->4-@==>==@==>==           
         P1 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1            
            |     |               !           |     |                
            |     |        b      !  b        |     |                
         ~0j|P7   \========>======!==>========/  ~0j|-PA             
            1              P6     !  P6             3                
            |                     !                 |                
         u  |              u      !  u              |  u             
       ==>==@==============>======!==>==============@==>==           
         P2                P5     !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[5];REAL S[2];                                                 
     
if(CalcConst) C443(C);
N=-C[0];
S[0]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
R=+DP[0]*(C[2]*(DP[5]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*
 (DP[5]-S[1]))+S[1]*(DP[12]*DP[9]+DP[13]*DP[8]))+S[1]*(DP[12]*(C[4]*DP[8]-4*
 DP[9]*S[1]))+C[3]*DP[14]*DP[5]);
R*=(N/D)*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*9)/(8);
 }
 return R;
}
