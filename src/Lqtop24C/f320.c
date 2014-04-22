/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F320_out;
static void C320(REAL * C)
{
REAL* V=va_out;
REAL S[7];                                                                  
     
S[0]=V[8]*V[8]*V[8]*V[8];
C[8]=+S[0]*(V[23]*(6*V[26]+18*V[25])+V[24]*(2*V[26]+6*V[25]));
S[1]=V[8]*V[8];
C[7]=+S[1]*(V[23]*(24*V[26]+72*V[25])+V[24]*(8*V[26]+24*V[25]));
C[6]=+V[23]*(24*V[26]+72*V[25])+V[24]*(8*V[26]+24*V[25]);
C[5]=+V[23]*(12*V[26]+36*V[25])+V[24]*(4*V[26]+12*V[25]);
C[4]=+S[1]*(V[23]*(12*V[26]+36*V[25])+V[24]*(4*V[26]+12*V[25]));
C[3]=+S[0]*(V[23]*(3*V[26]+9*V[25])+V[24]*(V[26]+3*V[25]));
C[2]=+S[1]*(V[23]*(6*V[26]+18*V[25])+V[24]*(2*V[26]+6*V[25]));
S[2]=V[39]*V[39]*V[39]*V[39];
S[3]=V[14]*V[14]*V[14]*V[14];
S[4]=V[2]*V[2]*V[2]*V[2];
C[1]=+18*S[2]*S[3]*S[4];
S[5]=V[52]*V[52];
S[6]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[5]*V[11]*V[9]*S[6];
}
REAL F320_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         U                 U      !  U                 U             
       ==<==@==============<======!==<==============@==<==           
         P1 |              P5     !  P5             |  P1            
            |                     !                 |                
            |              N2     !  N2             |                
         ~0O|P7         /==<======!==<==\        ~0R|-PA             
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
static REAL C[9];REAL S[2];                                                 
     
if(CalcConst) C320(C);
N=+C[0];
S[0]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
R=+DP[5]*(C[2]*(DP[0]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*
 (DP[5]-S[1]))+DP[6]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(
 S[1]-DP[5]))+DP[7]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(
 S[1]-DP[5])))+DP[6]*(C[4]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+
 DP[10]*(S[1]-DP[5]))-C[8]*DP[10]-C[3]*DP[11])+C[3]*(DP[14]*DP[0]-DP[10]*
 DP[7]))+S[1]*(DP[12]*(DP[6]*(S[1]*(C[6]*DP[3]+C[5]*DP[4])+C[4]*(-DP[2]-
 DP[3])-C[7]*DP[1]-C[2]*DP[4])+DP[0]*(DP[9]*(C[2]-C[5]*S[1])+C[4]*DP[8])+
 DP[7]*(DP[3]*(C[5]*S[1]-C[2])-C[4]*DP[1]))+DP[13]*(C[2]*(DP[8]*DP[0]-DP[6]*
 DP[2]-DP[7]*DP[1])-C[4]*DP[6]*DP[1]));
R*=(N/D)*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
