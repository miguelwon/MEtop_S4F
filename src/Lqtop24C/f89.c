/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F89_out;
static void C89(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[8]*V[8]*V[8]*V[8];
C[4]=+S[0];
S[1]=V[8]*V[8];
C[3]=+4*S[1];
C[2]=+2*S[1];
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
REAL F89_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   u                       N2     !  N2                      u       
 ==>==\                 /==<======!==<==\                 /==>==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   U  | ~0j    t     W+ |  e2     !  e2 |  W+    t    ~0j |  U       
 ==<==@-1---@==<==@-2<--@==>======!==>==@--<4-@==<==@---3-@==<==     
   P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB | -PA    P2      
            |     |               !           |     |                
            |     |        B      !  B        |     |                
            |     \========<======!==<========/     |                
            |              P6     !  P6             |                
            |                     !                 |                
            |              c      !  c              |                
            \==============>======!==>==============/                
                           P5     !  P5                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[5];REAL S[2];                                                 
     
if(CalcConst) C89(C);
N=+C[0];
S[0]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
R=+DP[7]*(C[2]*(DP[5]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(
 S[1]-DP[5]))+S[1]*(-DP[12]*DP[3]-DP[13]*DP[1]))+S[1]*(DP[12]*(4*DP[3]*S[1]-
 C[3]*DP[1]))-C[4]*DP[10]*DP[5]);
R*=(N/D)*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*9)/(8);
 }
 return R;
}
