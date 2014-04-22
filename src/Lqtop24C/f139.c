/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F139_out;
static void C139(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[24]*V[24];
S[1]=V[9]*V[9];
S[2]=V[8]*V[8]*V[8]*V[8];
C[9]=+S[2]*(S[1]*(V[23]*(6*V[24]+9*V[23])+S[0]));
S[3]=V[8]*V[8];
C[8]=+S[3]*(S[1]*(V[23]*(24*V[24]+36*V[23])+4*S[0]));
C[7]=+S[1]*(V[23]*(24*V[24]+36*V[23])+4*S[0]);
C[6]=+S[3]*(V[23]*(48*V[24]+72*V[23])+8*S[0]);
C[5]=+V[23]*(48*V[24]+72*V[23])+8*S[0];
C[4]=+S[3]*(S[1]*(V[23]*(12*V[24]+18*V[23])+2*S[0]));
C[3]=+S[2]*(V[23]*(12*V[24]+18*V[23])+2*S[0]);
C[2]=+S[3]*(V[23]*(24*V[24]+36*V[23])+4*S[0]);
S[4]=V[39]*V[39]*V[39]*V[39];
S[5]=V[14]*V[14]*V[14]*V[14];
S[6]=V[2]*V[2]*V[2]*V[2];
C[1]=+18*S[4]*S[5]*S[6];
S[7]=V[52]*V[52];
S[8]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[7]*S[8];
}
REAL F139_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         u                 u      !  u                 u             
       ==>==@==============>======!==>==============@==>==           
         P1 |              P5     !  P5             |  P1            
            |                     !                 |                
            |              N2     !  N2             |                
         ~0O|P7         /==<======!==<==\        ~0O|-PA             
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
static REAL C[10];REAL S[2];                                                
     
if(CalcConst) C139(C);
N=-C[0];
S[0]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
R=+DP[7]*(DP[5]*(C[2]*(DP[0]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(
 DP[8]-DP[2]-DP[4]+DP[9])+S[1]*(DP[14]-DP[11])+DP[5]*(DP[11]-DP[14]))+DP[6]*
 (DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+S[1]*(
 DP[11]-DP[14])+DP[5]*(DP[14]-DP[11]))+DP[7]*(DP[1]*(-DP[12]-DP[13])+DP[3]*
 (-DP[12]-DP[13])+DP[10]*(DP[5]-S[1])))+C[4]*(DP[1]*(DP[12]+DP[13])+DP[3]*(
 DP[12]+DP[13])+DP[10]*(S[1]-DP[5]))+C[3]*(DP[0]*(DP[11]-DP[14])+DP[6]*(
 DP[14]-DP[11])+DP[10]*DP[7])-C[9]*DP[10])+S[1]*(DP[12]*(S[1]*(C[5]*(DP[0]*(
 DP[9]-DP[4])+DP[6]*(DP[4]-DP[9])-DP[7]*DP[3])+C[7]*DP[3])+C[6]*(DP[0]*(
 DP[2]-DP[8])+DP[6]*(DP[8]-DP[2])+DP[7]*DP[1])+C[2]*(DP[0]*(DP[4]-DP[9])+
 DP[6]*(DP[9]-DP[4])+DP[7]*DP[3])-C[8]*DP[1]-C[4]*DP[3])+DP[13]*(C[2]*(
 DP[0]*(DP[2]-DP[8])+DP[6]*(DP[8]-DP[2])+DP[7]*DP[1])-C[4]*DP[1])));
R*=(N/D)*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*1)/(1);
 }
 return R;
}
