/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F527_out;
static void C527(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[28]*V[28];
S[1]=V[9]*V[9];
S[2]=V[8]*V[8];
C[9]=+S[2]*(S[1]*(V[27]*(24*V[28]+36*V[27])+4*S[0]));
C[8]=+S[2]*(V[27]*(48*V[28]+72*V[27])+8*S[0]);
C[7]=+S[1]*(V[27]*(24*V[28]+36*V[27])+4*S[0]);
C[6]=+V[27]*(48*V[28]+72*V[27])+8*S[0];
S[3]=V[8]*V[8]*V[8]*V[8];
C[5]=+S[3]*(S[1]*(V[27]*(6*V[28]+9*V[27])+S[0]));
C[4]=+S[3]*(V[27]*(12*V[28]+18*V[27])+2*S[0]);
C[3]=+S[2]*(S[1]*(V[27]*(12*V[28]+18*V[27])+2*S[0]));
C[2]=+S[2]*(V[27]*(24*V[28]+36*V[27])+4*S[0]);
S[4]=V[39]*V[39]*V[39]*V[39];
S[5]=V[14]*V[14]*V[14]*V[14];
S[6]=V[2]*V[2]*V[2]*V[2];
C[1]=+18*S[4]*S[5]*S[6];
S[7]=V[52]*V[52];
S[8]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[7]*S[8];
}
REAL F527_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                           N2     !  N2                              
                        /==<======!==<==\                            
                        |  P3     !  P3 |                            
                        |         !     |                            
         C     t     W+ |  e2     !  e2 |  W+    t     C             
       ==<==@==<==@-2<--@==>======!==>==@--<4-@==<==@==<==           
         P1 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1            
            |     |               !           |     |                
            |     |        B      !  B        |     |                
         ~0U|P7   \========<======!==<========/  ~0U|-PA             
            1              P6     !  P6             3                
            |                     !                 |                
         u  |              u      !  u              |  u             
       ==>==@==============>======!==>==============@==>==           
         P2                P5     !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[10];REAL S[2];                                                
     
if(CalcConst) C527(C);
N=+C[0];
S[0]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
R=+DP[0]*(DP[5]*(C[2]*(DP[6]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(
 DP[1]+DP[2]+DP[3]+DP[4])+S[1]*(DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))+
 DP[7]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+
 S[1]*(DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))+DP[0]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[1])))+C[3]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[1]))+C[4]*(DP[6]*(-DP[10]-DP[11])+
 DP[7]*(-DP[10]-DP[11])+DP[14]*DP[0])+C[5]*DP[14])+S[1]*(DP[12]*(S[1]*(C[6]*
 (DP[3]*(DP[6]+DP[7])+DP[4]*(DP[6]+DP[7])-DP[9]*DP[0])-C[7]*DP[9])+C[8]*(
 DP[1]*(-DP[6]-DP[7])+DP[2]*(-DP[6]-DP[7])+DP[8]*DP[0])+C[2]*(DP[3]*(-DP[6]-
 DP[7])+DP[4]*(-DP[6]-DP[7])+DP[9]*DP[0])+C[9]*DP[8]+C[3]*DP[9])+DP[13]*(
 C[2]*(DP[1]*(-DP[6]-DP[7])+DP[2]*(-DP[6]-DP[7])+DP[8]*DP[0])+C[3]*DP[8])));
R*=(N/D)*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*1)/(1);
 }
 return R;
}