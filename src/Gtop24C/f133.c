/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F133_out;
static void C133(REAL * C)
{
REAL* V=va_out;
REAL S[11];                                                                 
     
S[0]=V[18]*V[18];
S[1]=V[17]*V[17];
S[2]=V[7]*V[7]*V[7]*V[7];
C[51]=+S[2]*(V[8]*(V[8]*(V[17]*(10*V[17]-20*V[18])+10*S[0])+V[9]*(18*(S[0]-
 S[1]))));
S[3]=V[9]*V[9];
C[50]=+S[2]*(V[8]*(V[8]*(V[17]*(11*V[17]-22*V[18])+11*S[0])+V[9]*(12*(S[0]-
 S[1])))+S[3]*(V[17]*(2*V[18]+V[17])+S[0]));
C[49]=+S[2]*(V[8]*(V[8]*(V[17]*(9*V[17]-18*V[18])+9*S[0])+V[9]*(18*(S[0]-
 S[1])))+S[3]*(V[17]*(2*V[18]+V[17])+S[0]));
C[48]=+S[2]*(V[8]*(V[8]*(V[17]*(10*V[17]-20*V[18])+10*S[0])+V[9]*(12*(S[0]-
 S[1])))+S[3]*(V[17]*(4*V[18]+2*V[17])+2*S[0]));
C[47]=+S[2]*(V[17]*(8*V[17]-16*V[18])+8*S[0]);
S[4]=V[8]*V[8];
C[46]=+S[2]*(S[4]*(V[17]*(S[4]*(8*V[18]-4*V[17])+S[3]*(8*V[18]+4*V[17]))+
 S[0]*(4*(S[3]-S[4]))));
C[45]=+S[2]*(V[17]*(S[4]*(3*V[17]-6*V[18])+S[3]*(10*V[18]+5*V[17]))+S[0]*(5*
 S[3]+3*S[4]));
C[44]=+S[2]*(V[17]*(10*V[17]-20*V[18])+10*S[0]);
C[43]=+S[2]*(V[8]*(V[8]*(V[17]*(2*V[17]-4*V[18])+2*S[0])+V[9]*(18*(S[0]-
 S[1]))));
C[42]=+S[2]*(V[17]*(2*V[17]-4*V[18])+2*S[0]);
C[41]=+S[2]*(V[8]*(V[8]*(V[17]*(4*V[17]-8*V[18])+4*S[0])+V[9]*(12*(S[0]-
 S[1]))));
C[40]=+S[2]*(V[17]*(6*V[17]-12*V[18])+6*S[0]);
C[39]=+S[2]*(V[17]*(4*V[17]-8*V[18])+4*S[0]);
S[5]=V[7]*V[7];
C[38]=+S[5]*(V[8]*(V[8]*(V[17]*(40*V[17]-80*V[18])+40*S[0])+V[9]*(72*(S[0]-
 S[1]))));
C[37]=+S[5]*(V[8]*(V[8]*(V[17]*(44*V[17]-88*V[18])+44*S[0])+V[9]*(48*(S[0]-
 S[1])))+S[3]*(V[17]*(8*V[18]+4*V[17])+4*S[0]));
C[36]=+S[5]*(V[8]*(V[8]*(V[17]*(36*V[17]-72*V[18])+36*S[0])+V[9]*(72*(S[0]-
 S[1])))+S[3]*(V[17]*(8*V[18]+4*V[17])+4*S[0]));
C[35]=+S[5]*(V[8]*(V[8]*(V[17]*(40*V[17]-80*V[18])+40*S[0])+V[9]*(48*(S[0]-
 S[1])))+S[3]*(V[17]*(16*V[18]+8*V[17])+8*S[0]));
C[34]=+S[5]*(V[17]*(32*V[17]-64*V[18])+32*S[0]);
C[33]=+S[5]*(S[4]*(V[17]*(S[4]*(32*V[18]-16*V[17])+S[3]*(32*V[18]+16*
 V[17]))+S[0]*(16*(S[3]-S[4]))));
C[32]=+S[5]*(V[17]*(S[4]*(12*V[17]-24*V[18])+S[3]*(40*V[18]+20*V[17]))+S[0]*
 (20*S[3]+12*S[4]));
C[31]=+S[5]*(V[17]*(40*V[17]-80*V[18])+40*S[0]);
C[30]=+S[5]*(V[8]*(V[8]*(V[17]*(8*V[17]-16*V[18])+8*S[0])+V[9]*(72*(S[0]-
 S[1]))));
C[29]=+S[5]*(V[8]*(V[8]*(V[17]*(16*V[17]-32*V[18])+16*S[0])+V[9]*(48*(S[0]-
 S[1]))));
C[28]=+S[5]*(V[17]*(24*V[17]-48*V[18])+24*S[0]);
C[27]=+V[8]*(V[8]*(V[17]*(40*V[17]-80*V[18])+40*S[0])+V[9]*(72*(S[0]-
 S[1])));
C[26]=+V[8]*(V[8]*(V[17]*(44*V[17]-88*V[18])+44*S[0])+V[9]*(48*(S[0]-
 S[1])))+S[3]*(V[17]*(8*V[18]+4*V[17])+4*S[0]);
C[25]=+V[8]*(V[8]*(V[17]*(36*V[17]-72*V[18])+36*S[0])+V[9]*(72*(S[0]-
 S[1])))+S[3]*(V[17]*(8*V[18]+4*V[17])+4*S[0]);
C[24]=+V[8]*(V[8]*(V[17]*(40*V[17]-80*V[18])+40*S[0])+V[9]*(48*(S[0]-
 S[1])))+S[3]*(V[17]*(16*V[18]+8*V[17])+8*S[0]);
C[23]=+V[17]*(32*V[17]-64*V[18])+32*S[0];
C[22]=+S[4]*(V[17]*(S[4]*(32*V[18]-16*V[17])+S[3]*(32*V[18]+16*V[17]))+S[0]*
 (16*(S[3]-S[4])));
C[21]=+V[17]*(S[4]*(12*V[17]-24*V[18])+S[3]*(40*V[18]+20*V[17]))+S[0]*(20*
 S[3]+12*S[4]);
C[20]=+V[17]*(40*V[17]-80*V[18])+40*S[0];
C[19]=+V[8]*(V[8]*(V[17]*(8*V[17]-16*V[18])+8*S[0])+V[9]*(72*(S[0]-S[1])));
C[18]=+V[17]*(8*V[17]-16*V[18])+8*S[0];
C[17]=+V[8]*(V[8]*(V[17]*(16*V[17]-32*V[18])+16*S[0])+V[9]*(48*(S[0]-
 S[1])));
C[16]=+V[17]*(24*V[17]-48*V[18])+24*S[0];
C[15]=+V[17]*(16*V[17]-32*V[18])+16*S[0];
C[14]=+S[5]*(V[8]*(V[8]*(V[17]*(20*V[17]-40*V[18])+20*S[0])+V[9]*(36*(S[0]-
 S[1]))));
C[13]=+S[5]*(V[8]*(V[8]*(V[17]*(22*V[17]-44*V[18])+22*S[0])+V[9]*(24*(S[0]-
 S[1])))+S[3]*(V[17]*(4*V[18]+2*V[17])+2*S[0]));
C[12]=+S[5]*(V[8]*(V[8]*(V[17]*(18*V[17]-36*V[18])+18*S[0])+V[9]*(36*(S[0]-
 S[1])))+S[3]*(V[17]*(4*V[18]+2*V[17])+2*S[0]));
C[11]=+S[5]*(V[8]*(V[8]*(V[17]*(20*V[17]-40*V[18])+20*S[0])+V[9]*(24*(S[0]-
 S[1])))+S[3]*(V[17]*(8*V[18]+4*V[17])+4*S[0]));
C[10]=+S[5]*(V[17]*(16*V[17]-32*V[18])+16*S[0]);
C[9]=+S[5]*(S[4]*(V[17]*(S[4]*(16*V[18]-8*V[17])+S[3]*(16*V[18]+8*V[17]))+
 S[0]*(8*(S[3]-S[4]))));
C[8]=+S[5]*(V[17]*(S[4]*(6*V[17]-12*V[18])+S[3]*(20*V[18]+10*V[17]))+S[0]*(
 10*S[3]+6*S[4]));
C[7]=+S[5]*(V[17]*(20*V[17]-40*V[18])+20*S[0]);
C[6]=+S[5]*(V[8]*(V[8]*(V[17]*(4*V[17]-8*V[18])+4*S[0])+V[9]*(36*(S[0]-
 S[1]))));
C[5]=+S[5]*(V[17]*(4*V[17]-8*V[18])+4*S[0]);
C[4]=+S[5]*(V[8]*(V[8]*(V[17]*(8*V[17]-16*V[18])+8*S[0])+V[9]*(24*(S[0]-
 S[1]))));
C[3]=+S[5]*(V[17]*(12*V[17]-24*V[18])+12*S[0]);
C[2]=+S[5]*(V[17]*(8*V[17]-16*V[18])+8*S[0]);
S[6]=V[12]*V[12];
S[7]=V[2]*V[2]*V[2]*V[2];
C[1]=+S[6]*S[7];
S[8]=V[22]*V[22];
S[9]=V[14]*V[14];
S[10]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[8]*S[9]*S[10];
}
REAL F133_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                                     !  G                 G          
                                    /!---2-------------@---1-        
                                    |!  P3             |  P1         
                                    |!                 |             
      G                       n2    |!  n2             |             
    -1---\                 /==>=====+!==>==\        ~03|-PA          
      P1 |                 |  P4    |!  P4 |           4             
         |                 |        |!     |           |             
      c  |  c     t     W+ |  E2    |!  E2 |  W+    t  |  c          
    ==>==@==>==@==>==@-3>--@==<=====+!==<==@-->5-@==>==@==>==        
      P2    P7 |  P8 |  P9    P5    |!  P5   -PC | -PB    P2         
               |     |              |!           |                   
               |     |        b     |!  b        |                   
               |     \========>=====+!==>========/                   
               |              P6    |!  P6                           
               |                    |!                               
               |              G     |!                               
               \-------------2------/!                               
                              P3     !                               
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[52];REAL S[3];REAL tmp[2];                                    
     
if(CalcConst) C133(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[23]*V[23]*V[23]*V[23];
D=+C[1]*S[1];
S[2]=V[23]*V[23];
tmp[0]=+DP[1]*(DP[0]*(DP[13]*(C[10]*(-DP[3]-DP[6])+C[7]*(-DP[4]-DP[7])+C[5]*
 (-DP[5]-DP[8]))+DP[14]*(C[10]*(-DP[3]-DP[6])+C[7]*(-DP[4]-DP[7])+C[5]*(-
 DP[5]-DP[8]))+S[2]*(-C[10]*DP[10]-C[7]*DP[11]-C[5]*DP[12])+DP[9]*(C[10]*
 DP[10]+C[7]*DP[11]+C[5]*DP[12])+C[47]*DP[10]+C[44]*DP[11]+C[42]*DP[12])+
 DP[13]*(DP[1]*(C[5]*(DP[4]+DP[7]))+C[14]*(DP[3]+DP[6])+C[12]*(DP[4]+DP[7])+
 C[6]*(-DP[5]-DP[8]))+DP[14]*(DP[1]*(C[5]*(DP[4]+DP[7]))+C[14]*(DP[3]+
 DP[6])+C[12]*(DP[4]+DP[7])+C[6]*(-DP[5]-DP[8]))+DP[11]*(DP[1]*(C[5]*(S[2]-
 DP[9])-C[42])+C[12]*(S[2]-DP[9])-C[49])+DP[10]*(C[14]*(S[2]-DP[9])-C[51])+
 DP[12]*(C[6]*(DP[9]-S[2])+C[43]))+DP[0]*(DP[0]*(C[7]*(DP[5]*(DP[13]+
 DP[14])+DP[8]*(DP[13]+DP[14])+DP[12]*(S[2]-DP[9]))-C[44]*DP[12])+C[8]*(
 DP[5]*(-DP[13]-DP[14])+DP[8]*(-DP[13]-DP[14])+DP[12]*(DP[9]-S[2]))+C[45]*
 DP[12])+C[9]*(DP[5]*(DP[13]+DP[14])+DP[8]*(DP[13]+DP[14])+DP[12]*(S[2]-
 DP[9]))-C[46]*DP[12];
tmp[1]=+S[2]*(DP[13]*(DP[2]*(S[2]*(DP[6]*(C[18]*(-DP[1]-DP[2])+C[26]-C[16]*
 DP[0])+DP[8]*(C[15]*(DP[1]+DP[2])-C[17]-C[16]*DP[0])+DP[7]*(C[24]-C[23]*
 DP[0]+C[18]*DP[1]))+DP[0]*(C[28]*(DP[3]+DP[5])+C[3]*(DP[6]+DP[8])+C[34]*
 DP[4]+C[10]*DP[7])+DP[1]*(C[2]*(DP[3]-DP[4]-DP[8])+C[5]*(DP[6]-DP[7])-
 C[10]*DP[5])+DP[2]*(C[2]*(DP[3]-DP[8])+C[5]*DP[6]-C[10]*DP[5])+C[29]*DP[5]-
 C[37]*DP[3]-C[35]*DP[4]-C[13]*DP[6]-C[11]*DP[7]+C[4]*DP[8])+DP[1]*(DP[0]*(
 S[2]*(-C[23]*DP[6]-C[20]*DP[7]-C[18]*DP[8])+C[34]*DP[3]+C[31]*DP[4]+C[2]*
 DP[5]+C[10]*DP[6]+C[7]*DP[7]+C[5]*DP[8])+S[2]*(DP[7]*(C[25]+C[18]*DP[1])+
 C[27]*DP[6]-C[19]*DP[8])+DP[1]*(-C[2]*DP[4]-C[5]*DP[7])+C[30]*DP[5]-C[38]*
 DP[3]-C[36]*DP[4]-C[14]*DP[6]-C[12]*DP[7]+C[6]*DP[8])+DP[0]*(DP[8]*(S[2]*(
 C[20]*DP[0]-C[21])+C[8]-C[7]*DP[0])+DP[5]*(C[32]-C[31]*DP[0]))+DP[8]*(
 C[22]*S[2]-C[9])-C[33]*DP[5])+DP[14]*(DP[2]*(DP[3]*(C[5]*(DP[1]+DP[2])+
 C[3]*DP[0]-C[13])+DP[5]*(C[2]*(-DP[1]-DP[2])+C[4]+C[3]*DP[0])+DP[4]*(C[10]*
 DP[0]-C[11]-C[5]*DP[1]))+DP[1]*(DP[0]*(C[10]*DP[3]+C[7]*DP[4]+C[5]*DP[5])+
 DP[4]*(-C[12]-C[5]*DP[1])+C[6]*DP[5]-C[14]*DP[3])+DP[5]*(DP[0]*(C[8]-C[7]*
 DP[0])-C[9])));
R=+DP[1]*(DP[9]*(DP[2]*(DP[13]*(DP[0]*(C[3]*(-DP[3]-DP[5]-DP[6]-DP[8])+
 C[10]*(-DP[4]-DP[7]))+DP[1]*(C[5]*(DP[4]-DP[3]-DP[6]+DP[7])+C[2]*(DP[5]+
 DP[8]))+DP[2]*(C[5]*(-DP[3]-DP[6])+C[2]*(DP[5]+DP[8]))+C[13]*(DP[3]+DP[6])+
 C[11]*(DP[4]+DP[7])+C[4]*(-DP[5]-DP[8]))+DP[14]*(DP[0]*(C[3]*(-DP[3]-DP[5]-
 DP[6]-DP[8])+C[10]*(-DP[4]-DP[7]))+DP[1]*(C[5]*(DP[4]-DP[3]-DP[6]+DP[7])+
 C[2]*(DP[5]+DP[8]))+DP[2]*(C[5]*(-DP[3]-DP[6])+C[2]*(DP[5]+DP[8]))+C[13]*(
 DP[3]+DP[6])+C[11]*(DP[4]+DP[7])+C[4]*(-DP[5]-DP[8]))+DP[10]*(S[2]*(C[5]*(-
 DP[1]-DP[2])+C[13]-C[3]*DP[0])+DP[9]*(C[5]*(DP[1]+DP[2])+C[3]*DP[0]-C[13])+
 C[42]*(DP[1]+DP[2])+C[40]*DP[0]-C[50])+DP[12]*(S[2]*(C[2]*(DP[1]+DP[2])-
 C[4]-C[3]*DP[0])+DP[9]*(C[2]*(-DP[1]-DP[2])+C[4]+C[3]*DP[0])+C[39]*(-DP[1]-
 DP[2])+C[41]+C[40]*DP[0])+DP[11]*(S[2]*(C[11]-C[10]*DP[0]+C[5]*DP[1])+
 DP[9]*(C[10]*DP[0]-C[11]-C[5]*DP[1])+C[47]*DP[0]-C[48]-C[42]*DP[1]))+
 tmp[0])+tmp[1]);
R*=(N/D)*Q1[5]*Q2[1]*Q2[2]*Q1[4];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*9)/(8);
 }
 return R;
}
