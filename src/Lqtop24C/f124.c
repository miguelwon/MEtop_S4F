/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F124_out;
static void C124(REAL * C)
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
S[6]=V[31]*V[31];
S[7]=V[11]*V[11];
S[8]=V[1]*V[1]*V[1]*V[1];
C[0]=+2*S[5]*S[6]*S[7]*S[8];
}
REAL F124_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         u                 u      !  u                 u             
       ==>==@==============>======!==>==============@==>==           
         P1 |              P5     !  P5             |  P1            
            |                     !                 |                
            |              n2     !  n2             |                
         ~0m|P7         /==>======!==>==\        ~0m|-PA             
            |           |  P3     !  P3 |           |                
            |           |         !     |           |                
         c  |  t     W+ |  E2     !  E2 |  W+    t  |  c             
       ==>==@==>==@-1>--@==<======!==<==@-->2-@==>==@==>==           
         P2    P8 |  P9    P4     !  P4   -PC | -PB    P2            
                  |               !           |                      
                  |        b      !  b        |                      
                  \========>======!==>========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[5];REAL S[2];                                                 
     
if(CalcConst) C124(C);
N=+C[0];
S[0]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
R=+DP[6]*(C[2]*(DP[5]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(
 S[1]-DP[5]))+S[1]*(-DP[12]*DP[4]-DP[13]*DP[2]))+S[1]*(DP[12]*(4*DP[4]*S[1]-
 C[3]*DP[2]))-C[4]*DP[11]*DP[5]);
R*=(N/D)*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*9)/(8);
 }
 return R;
}
