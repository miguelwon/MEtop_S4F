/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F189_out;
static void C189(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[21]*V[21];
S[1]=V[8]*V[8];
C[5]=+S[1]*(V[18]*(24*V[21]+36*V[18])+4*S[0]);
C[4]=+V[18]*(24*V[21]+36*V[18])+4*S[0];
S[2]=V[8]*V[8]*V[8]*V[8];
C[3]=+S[2]*(V[18]*(6*V[21]+9*V[18])+S[0]);
C[2]=+S[1]*(V[18]*(12*V[21]+18*V[18])+2*S[0]);
S[3]=V[39]*V[39]*V[39]*V[39];
S[4]=V[14]*V[14]*V[14]*V[14];
S[5]=V[2]*V[2]*V[2]*V[2];
C[1]=+18*S[3]*S[4]*S[5];
S[6]=V[52]*V[52];
S[7]=V[11]*V[11];
S[8]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[6]*S[7]*S[8];
}
REAL F189_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         U                 U      !  U                 U             
       ==<==@==============<======!==<==============@==<==           
         P1 |              P5     !  P5             |  P1            
            |                     !                 |                
            |              n2     !  n2             |                
         ~09|P7         /==>======!==>==\        ~09|-PA             
            1           |  P3     !  P3 |           3                
            |           |         !     |           |                
         u  |  t     W+ |  E2     !  E2 |  W+    t  |  u             
       ==>==@==>==@-2>--@==<======!==<==@-->4-@==>==@==>==           
         P2    P8 |  P9    P4     !  P4   -PC | -PB    P2            
                  |               !           |                      
                  |        b      !  b        |                      
                  \========>======!==>========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[6];REAL S[2];                                                 
     
if(CalcConst) C189(C);
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
  cb_coeff_out[1] += (R*1)/(1);
 }
 return R;
}
