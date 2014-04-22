/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F220_out;
static void C220(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[33]*V[33];
S[1]=V[8]*V[8];
C[5]=+S[1]*(V[31]*(24*V[33]+4*V[31])+36*S[0]);
C[4]=+V[31]*(24*V[33]+4*V[31])+36*S[0];
S[2]=V[8]*V[8]*V[8]*V[8];
C[3]=+S[2]*(V[31]*(6*V[33]+V[31])+9*S[0]);
C[2]=+S[1]*(V[31]*(12*V[33]+2*V[31])+18*S[0]);
S[3]=V[39]*V[39]*V[39]*V[39];
S[4]=V[14]*V[14]*V[14]*V[14];
S[5]=V[2]*V[2]*V[2]*V[2];
C[1]=+36*S[3]*S[4]*S[5];
S[6]=V[52]*V[52];
S[7]=V[11]*V[11];
S[8]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[6]*S[7]*S[8];
}
REAL F220_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   U                       n2     !  n2                      U       
 ==<==\                 /==>======!==>==\                 /==<==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   u  | ~11    t     W+ |  E2     !  E2 |  W+    t    ~11 |  u       
 ==>==@-----@==>==@-1>--@==<======!==<==@-->2-@==>==@-----@==>==     
   P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB | -PA    P2      
            |     |               !           |     |                
            |     |        b      !  b        |     |                
            |     \========>======!==>========/     |                
            |              P6     !  P6             |                
            |                     !                 |                
            |              C      !  C              |                
            \==============<======!==<==============/                
                           P5     !  P5                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[6];REAL S[2];                                                 
     
if(CalcConst) C220(C);
N=-C[0];
S[0]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
R=+DP[0]*(C[2]*(DP[5]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*
 (DP[5]-S[1]))+S[1]*(DP[12]*DP[9]+DP[13]*DP[8]))+S[1]*(DP[12]*(C[5]*DP[8]-
 C[4]*DP[9]*S[1]))+C[3]*DP[14]*DP[5]);
R*=(N/D)*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
