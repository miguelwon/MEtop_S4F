/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F27_out;
static void C27(REAL * C)
{
REAL* V=va_out;
REAL S[8];                                                                  
     
S[0]=V[22]*V[22];
S[1]=V[8]*V[8];
C[5]=+S[1]*(V[19]*(24*V[22]+36*V[19])+4*S[0]);
C[4]=+V[19]*(24*V[22]+36*V[19])+4*S[0];
S[2]=V[8]*V[8]*V[8]*V[8];
C[3]=+S[2]*(V[19]*(6*V[22]+9*V[19])+S[0]);
C[2]=+S[1]*(V[19]*(12*V[22]+18*V[19])+2*S[0]);
S[3]=V[39]*V[39]*V[39]*V[39];
S[4]=V[14]*V[14]*V[14]*V[14];
S[5]=V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[3]*S[4]*S[5];
S[6]=V[52]*V[52];
S[7]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[6]*S[7];
}
REAL F27_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                           n2     !  n2                              
                        /==>======!==>==\                            
                        |  P3     !  P3 |                            
                        |         !     |                            
         u     t     W+ |  E2     !  E2 |  W+    t     u             
       ==>==@==>==@-2>--@==<======!==<==@-->4-@==>==@==>==           
         P1 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1            
            |     |               !           |     |                
            |     |        b      !  b        |     |                
         ~0C|P7   \========>======!==>========/  ~0C|-PA             
            1              P6     !  P6             3                
            |                     !                 |                
         U  |              U      !  U              |  U             
       ==<==@==============<======!==<==============@==<==           
         P2                P5     !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[6];REAL S[2];                                                 
     
if(CalcConst) C27(C);
N=+C[0];
S[0]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
R=+DP[0]*(C[2]*(DP[5]*(DP[6]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(
 DP[1]+DP[2]+DP[3]+DP[4])+S[1]*(DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))+
 DP[7]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+
 S[1]*(DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))+DP[0]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[1])))+S[1]*(DP[12]*(DP[3]*(-DP[6]-
 DP[7])+DP[4]*(-DP[6]-DP[7])+DP[9]*DP[0])+DP[13]*(DP[1]*(-DP[6]-DP[7])+
 DP[2]*(-DP[6]-DP[7])+DP[8]*DP[0])))+S[1]*(DP[12]*(S[1]*(C[4]*(DP[3]*(DP[6]+
 DP[7])+DP[4]*(DP[6]+DP[7])-DP[9]*DP[0]))+C[5]*(DP[1]*(-DP[6]-DP[7])+DP[2]*
 (-DP[6]-DP[7])+DP[8]*DP[0])))+DP[5]*(C[3]*(DP[6]*(-DP[10]-DP[11])+DP[7]*(-
 DP[10]-DP[11])+DP[14]*DP[0])));
R*=(N/D)*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*1)/(1);
 }
 return R;
}