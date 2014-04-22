/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F348_out;
static void C348(REAL * C)
{
REAL* V=va_out;
REAL S[8];                                                                  
     
S[0]=V[10]*V[10];
S[1]=V[8]*V[8];
C[8]=+4*S[0]*S[1];
C[7]=+8*S[1];
C[6]=+4*S[0];
S[2]=V[8]*V[8]*V[8]*V[8];
C[5]=+S[0]*S[2];
C[4]=+2*S[2];
C[3]=+2*S[0]*S[1];
C[2]=+4*S[1];
S[3]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+2*S[3];
S[4]=V[52]*V[52];
S[5]=V[51]*V[51];
S[6]=V[44]*V[44];
S[7]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[4]*S[5]*S[6]*S[7];
}
REAL F348_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         U                 D      !  D                 U             
       ==<==@==============<======!==<==============@==<==           
         P1 |              P5     !  P5             |  P1            
            |                     !                 |                
            |              N2     !  N2             |                
          W+|P7         /==<======!==<==\         W+|-PA             
            1           |  P3     !  P3 |           3                
            |           |         !     |           |                
         S  |  t     W+ |  e2     !  e2 |  W+    t  |  S             
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
     
if(CalcConst) C348(C);
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
 DP[7]*(-DP[10]-DP[11])+DP[14]*DP[0])+C[5]*DP[14])+S[1]*(DP[12]*(S[1]*(8*(
 DP[3]*(DP[6]+DP[7])+DP[4]*(DP[6]+DP[7])-DP[9]*DP[0])-C[6]*DP[9])+C[7]*(
 DP[1]*(-DP[6]-DP[7])+DP[2]*(-DP[6]-DP[7])+DP[8]*DP[0])+C[2]*(DP[3]*(-DP[6]-
 DP[7])+DP[4]*(-DP[6]-DP[7])+DP[9]*DP[0])+C[8]*DP[8]+C[3]*DP[9])+DP[13]*(
 C[2]*(DP[1]*(-DP[6]-DP[7])+DP[2]*(-DP[6]-DP[7])+DP[8]*DP[0])+C[3]*DP[8])));
R*=(N/D)*Q2[3]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
