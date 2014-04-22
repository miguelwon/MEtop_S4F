/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F144_out;
static void C144(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[30]*V[30];
S[1]=V[8]*V[8]*V[8]*V[8];
C[5]=+S[1]*(V[29]*(6*V[30]+9*V[29])+S[0]);
S[2]=V[8]*V[8];
C[4]=+S[2]*(V[29]*(24*V[30]+36*V[29])+4*S[0]);
C[3]=+V[29]*(24*V[30]+36*V[29])+4*S[0];
C[2]=+S[2]*(V[29]*(12*V[30]+18*V[29])+2*S[0]);
S[3]=V[39]*V[39]*V[39]*V[39];
S[4]=V[14]*V[14]*V[14]*V[14];
S[5]=V[2]*V[2]*V[2]*V[2];
C[1]=+18*S[3]*S[4]*S[5];
S[6]=V[52]*V[52];
S[7]=V[11]*V[11];
S[8]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[6]*S[7]*S[8];
}
REAL F144_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         u                 u      !  u                 u             
       ==>==@==============>======!==>==============@==>==           
         P1 |              P5     !  P5             |  P1            
            |                     !                 |                
            |              N2     !  N2             |                
         ~0X|P7         /==<======!==<==\        ~0X|-PA             
            1           |  P3     !  P3 |           3                
            |           |         !     |           |                
         C  |  t     W+ |  e2     !  e2 |  W+    t  |  C             
       ==<==@==<==@-2<--@==>======!==>==@--<4-@==<==@==<==           
         P2    P8 |  P9    P4     !  P4   -PC | -PB    P2            
                  |               !           |                      
                  |        B      !  B        |                      
                  \========<======!==<========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[6];REAL S[2];                                                 
     
if(CalcConst) C144(C);
N=+C[0];
S[0]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
R=+DP[7]*(C[2]*(DP[5]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(
 S[1]-DP[5]))+S[1]*(-DP[12]*DP[3]-DP[13]*DP[1]))+S[1]*(DP[12]*(C[3]*DP[3]*
 S[1]-C[4]*DP[1]))-C[5]*DP[10]*DP[5]);
R*=(N/D)*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*1)/(1);
 }
 return R;
}
