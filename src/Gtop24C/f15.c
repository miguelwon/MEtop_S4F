/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F15_out;
static void C15(REAL * C)
{
REAL* V=va_out;
REAL S[10];                                                                 
     
S[0]=V[16]*V[16];
S[1]=V[9]*V[9];
S[2]=V[7]*V[7]*V[7]*V[7];
C[24]=+S[2]*(S[1]*(V[15]*(7*V[15]-10*V[16])+7*S[0]));
C[23]=+S[2]*(S[1]*(V[15]*(2*V[16]+7*V[15])+7*S[0]));
C[22]=+6*V[16]*V[15]*S[1]*S[2];
S[3]=V[15]*V[15];
C[21]=+S[2]*(S[1]*(9*(S[0]+S[3])));
C[20]=+S[2]*(V[15]*(8*V[15]-16*V[16])+8*S[0]);
C[19]=+S[2]*(V[15]*(4*V[15]-8*V[16])+4*S[0]);
S[4]=V[7]*V[7];
C[18]=+S[4]*(S[1]*(V[15]*(28*V[15]-40*V[16])+28*S[0]));
C[17]=+S[4]*(S[1]*(V[15]*(8*V[16]+28*V[15])+28*S[0]));
C[16]=+24*V[16]*V[15]*S[1]*S[4];
C[15]=+S[4]*(S[1]*(36*(S[0]+S[3])));
C[14]=+S[4]*(V[15]*(32*V[15]-64*V[16])+32*S[0]);
C[13]=+S[1]*(V[15]*(28*V[15]-40*V[16])+28*S[0]);
C[12]=+S[1]*(V[15]*(8*V[16]+28*V[15])+28*S[0]);
C[11]=+24*V[16]*V[15]*S[1];
C[10]=+S[1]*(36*(S[0]+S[3]));
C[9]=+V[15]*(32*V[15]-64*V[16])+32*S[0];
C[8]=+V[15]*(16*V[15]-32*V[16])+16*S[0];
C[7]=+S[4]*(S[1]*(V[15]*(14*V[15]-20*V[16])+14*S[0]));
C[6]=+S[4]*(S[1]*(V[15]*(4*V[16]+14*V[15])+14*S[0]));
C[5]=+12*V[16]*V[15]*S[1]*S[4];
C[4]=+S[4]*(S[1]*(18*(S[0]+S[3])));
C[3]=+S[4]*(V[15]*(16*V[15]-32*V[16])+16*S[0]);
C[2]=+S[4]*(V[15]*(8*V[15]-16*V[16])+8*S[0]);
S[5]=V[12]*V[12];
S[6]=V[2]*V[2]*V[2]*V[2];
C[1]=+S[5]*S[6];
S[7]=V[22]*V[22];
S[8]=V[13]*V[13];
S[9]=V[1]*V[1]*V[1]*V[1];
C[0]=+2*S[7]*S[8]*S[9];
}
REAL F15_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
      u                       n2     !  n2                           
    ==>==\                 /==>======!==>==\                         
      P1 |                 |  P4     !  P4 |                         
         |                 |         !     |                         
      G  |  t     t     W+ |  E2     !  E2 |  W+    t     u          
    -1---@==>==@==>==@-3>--@==<======!==<==@-->5-@==>==@==>==        
      P2    P7 |  P8 |  P9    P5     !  P5   -PC | -PB |  P1         
               |     |               !           |     |             
               |     |        b      !  b        |     |             
               |     \========>======!==>========/  ~00|-PA          
               |              P6     !  P6             4             
               |                     !                 |             
               |              G      !  G              |  G          
               \-------------2-------!---2-------------@---1-        
                              P3     !  P3                P2         
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[25];REAL S[3];REAL tmp[1];                                    
     
if(CalcConst) C15(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[23]*V[23]*V[23]*V[23];
D=+C[1]*S[1];
S[2]=V[23]*V[23];
tmp[0]=+DP[0]*(DP[9]*(C[2]*(DP[0]*(DP[13]*(DP[3]+DP[4]+DP[6]+DP[7])+DP[14]*(
 DP[3]+DP[4]+DP[6]+DP[7])+S[2]*(DP[10]+DP[11])+DP[9]*(-DP[10]-DP[11]))+
 DP[1]*(DP[5]*(DP[13]+DP[14])+DP[8]*(DP[13]+DP[14])+DP[12]*(S[2]-DP[9]))+
 DP[2]*(DP[5]*(DP[13]+DP[14])+DP[8]*(DP[13]+DP[14])+DP[12]*(S[2]-DP[9])))+
 DP[0]*(C[3]*(DP[5]*(-DP[13]-DP[14])+DP[8]*(-DP[13]-DP[14])+DP[12]*(DP[9]-
 S[2]))+C[19]*(-DP[10]-DP[11])+C[20]*DP[12])+DP[13]*(C[7]*(-DP[3]-DP[6])+
 C[6]*(-DP[4]-DP[7])+C[4]*(DP[5]+DP[8]))+DP[14]*(C[7]*(-DP[3]-DP[6])+C[6]*(-
 DP[4]-DP[7])+C[4]*(DP[5]+DP[8]))+DP[12]*(C[4]*(S[2]-DP[9])+C[19]*(-DP[1]-
 DP[2])-C[21])+DP[10]*(C[7]*(DP[9]-S[2])+C[24])+DP[11]*(C[6]*(DP[9]-S[2])+
 C[23]))+S[2]*(DP[13]*(DP[0]*(S[2]*(C[8]*(DP[6]+DP[7])-C[9]*DP[8])+C[3]*(
 DP[8]-DP[3]-DP[4])+C[2]*(-DP[6]-DP[7])+C[14]*DP[5])+DP[8]*(S[2]*(C[8]*(
 DP[1]+DP[2])+C[10])+C[2]*(-DP[1]-DP[2])-C[4])+DP[5]*(C[3]*(-DP[1]-DP[2])-
 C[15])+S[2]*(-C[13]*DP[6]-C[12]*DP[7])+C[18]*DP[3]+C[17]*DP[4]+C[7]*DP[6]+
 C[6]*DP[7])+DP[14]*(DP[5]*(C[2]*(-DP[1]-DP[2])+C[3]*DP[0]-C[4])+DP[0]*(
 C[2]*(-DP[3]-DP[4]))+C[7]*DP[3]+C[6]*DP[4])));
R=+DP[2]*(C[5]*(DP[9]*(DP[1]*(DP[4]*(DP[13]+DP[14])+DP[7]*(DP[13]+DP[14])+
 DP[11]*(S[2]-DP[9]))+DP[2]*(DP[3]*(-DP[13]-DP[14])+DP[6]*(-DP[13]-DP[14])+
 DP[10]*(DP[9]-S[2])))+S[2]*(DP[1]*(-DP[13]*DP[7]-DP[14]*DP[4])+DP[2]*(
 DP[13]*DP[6]+DP[14]*DP[3])))+S[2]*(DP[13]*(S[2]*(C[11]*(DP[7]*DP[1]-DP[6]*
 DP[2]))+C[16]*(DP[3]*DP[2]-DP[4]*DP[1])))+DP[9]*(C[22]*(DP[10]*DP[2]-
 DP[11]*DP[1]))+tmp[0]);
R*=(N/D)*Q1[3]*Q2[1]*Q2[2]*Q1[7];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*-9)/(-8);
 }
 return R;
}
