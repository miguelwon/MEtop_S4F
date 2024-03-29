/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F9_out;
static void C9(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[16]*V[16];
S[1]=V[9]*V[9];
S[2]=V[7]*V[7]*V[7]*V[7];
C[43]=+S[2]*(S[1]*(V[15]*(6*V[15]-4*V[16])+6*S[0]));
C[42]=+S[2]*(V[15]*(16*V[15]-32*V[16])+16*S[0]);
C[41]=+S[2]*(S[1]*(V[15]*(11*V[15]-6*V[16])+11*S[0]));
C[40]=+S[2]*(S[1]*(V[15]*(4*V[16]+6*V[15])+6*S[0]));
C[39]=+S[2]*(S[1]*(V[15]*(6*V[16]+9*V[15])+9*S[0]));
C[38]=+S[2]*(S[1]*(V[15]*(8*V[16]+12*V[15])+12*S[0]));
C[37]=+S[2]*(S[1]*(V[15]*(7*V[15]-6*V[16])+7*S[0]));
C[36]=+S[2]*(V[15]*(18*V[15]-36*V[16])+18*S[0]);
C[35]=+S[2]*(S[1]*(V[15]*(12*V[15]-8*V[16])+12*S[0]));
C[34]=+S[2]*(V[15]*(2*V[15]-4*V[16])+2*S[0]);
C[33]=+S[2]*(V[15]*(20*V[15]-40*V[16])+20*S[0]);
S[3]=V[7]*V[7];
C[32]=+S[3]*(V[15]*(64*V[15]-128*V[16])+64*S[0]);
C[31]=+S[3]*(S[1]*(V[15]*(44*V[15]-24*V[16])+44*S[0]));
C[30]=+S[3]*(S[1]*(V[15]*(24*V[16]+36*V[15])+36*S[0]));
C[29]=+S[3]*(S[1]*(V[15]*(32*V[16]+48*V[15])+48*S[0]));
C[28]=+S[3]*(S[1]*(V[15]*(28*V[15]-24*V[16])+28*S[0]));
C[27]=+S[3]*(V[15]*(72*V[15]-144*V[16])+72*S[0]);
C[26]=+S[3]*(S[1]*(V[15]*(48*V[15]-32*V[16])+48*S[0]));
C[25]=+S[3]*(V[15]*(8*V[15]-16*V[16])+8*S[0]);
C[24]=+S[3]*(V[15]*(80*V[15]-160*V[16])+80*S[0]);
C[23]=+S[1]*(V[15]*(24*V[15]-16*V[16])+24*S[0]);
C[22]=+V[15]*(64*V[15]-128*V[16])+64*S[0];
C[21]=+S[1]*(V[15]*(44*V[15]-24*V[16])+44*S[0]);
C[20]=+S[1]*(V[15]*(16*V[16]+24*V[15])+24*S[0]);
C[19]=+S[1]*(V[15]*(24*V[16]+36*V[15])+36*S[0]);
C[18]=+S[1]*(V[15]*(32*V[16]+48*V[15])+48*S[0]);
C[17]=+S[1]*(V[15]*(28*V[15]-24*V[16])+28*S[0]);
C[16]=+V[15]*(72*V[15]-144*V[16])+72*S[0];
C[15]=+S[1]*(V[15]*(48*V[15]-32*V[16])+48*S[0]);
C[14]=+V[15]*(8*V[15]-16*V[16])+8*S[0];
C[13]=+V[15]*(80*V[15]-160*V[16])+80*S[0];
C[12]=+S[3]*(S[1]*(V[15]*(12*V[15]-8*V[16])+12*S[0]));
C[11]=+S[3]*(V[15]*(32*V[15]-64*V[16])+32*S[0]);
C[10]=+S[3]*(S[1]*(V[15]*(22*V[15]-12*V[16])+22*S[0]));
C[9]=+S[3]*(S[1]*(V[15]*(8*V[16]+12*V[15])+12*S[0]));
C[8]=+S[3]*(S[1]*(V[15]*(12*V[16]+18*V[15])+18*S[0]));
C[7]=+S[3]*(S[1]*(V[15]*(16*V[16]+24*V[15])+24*S[0]));
C[6]=+S[3]*(S[1]*(V[15]*(14*V[15]-12*V[16])+14*S[0]));
C[5]=+S[3]*(V[15]*(36*V[15]-72*V[16])+36*S[0]);
C[4]=+S[3]*(S[1]*(V[15]*(24*V[15]-16*V[16])+24*S[0]));
C[3]=+S[3]*(V[15]*(4*V[15]-8*V[16])+4*S[0]);
C[2]=+S[3]*(V[15]*(40*V[15]-80*V[16])+40*S[0]);
S[4]=V[12]*V[12];
S[5]=V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[4]*S[5];
S[6]=V[22]*V[22];
S[7]=V[13]*V[13];
S[8]=V[1]*V[1]*V[1]*V[1];
C[0]=+8*S[6]*S[7]*S[8];
}
REAL F9_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         u                 G      !  G                 u             
       ==>==@-------------1-------!---1-------------@==>==           
         P1 |              P3     !  P3             |  P1            
            |                     !                 |                
            |              n2     !  n2             |                
           u|P7         /==>======!==>==\          t|-PA             
            |           |  P4     !  P4 |           |                
            |           |         !     |           |                
         G  |  t     W+ |  E2     !  E2 |  W+    t  |  G             
       -2---@==>==@-3>--@==<======!==<==@-->4-@==>==@---2-           
         P2    P8 |  P9    P5     !  P5   -PC | -PB    P2            
                  |               !           |                      
                  |        b      !  b        |                      
                  \========>======!==>========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[44];REAL S[3];REAL tmp[2];                                    
     
if(CalcConst) C9(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[23]*V[23]*V[23]*V[23];
D=+C[1]*S[1];
S[2]=V[23]*V[23];
tmp[0]=+DP[2]*(DP[1]*(DP[13]*(C[5]*(-DP[3]-DP[6])+C[3]*(-DP[4]-DP[7])+C[2]*(
 DP[5]+DP[8]))+DP[14]*(C[5]*(-DP[3]-DP[6])+C[3]*(-DP[4]-DP[7])+C[2]*(DP[5]+
 DP[8]))+S[2]*(C[2]*DP[12]-C[5]*DP[10]-C[3]*DP[11])+DP[9]*(C[5]*DP[10]+C[3]*
 DP[11]-C[2]*DP[12])+C[36]*DP[10]+C[34]*DP[11]-C[33]*DP[12])+DP[13]*(DP[2]*(
 C[3]*(DP[3]+DP[6]))+C[10]*(-DP[3]-DP[6])+C[7]*(-DP[4]-DP[7])+C[4]*(DP[5]+
 DP[8]))+DP[14]*(DP[2]*(C[3]*(DP[3]+DP[6]))+C[10]*(-DP[3]-DP[6])+C[7]*(-
 DP[4]-DP[7])+C[4]*(DP[5]+DP[8]))+DP[10]*(DP[2]*(C[3]*(S[2]-DP[9])-C[34])+
 C[10]*(DP[9]-S[2])+C[41])+DP[11]*(C[7]*(DP[9]-S[2])+C[38])+DP[12]*(C[4]*(
 S[2]-DP[9])-C[35]))+DP[1]*(DP[1]*(C[5]*(DP[4]*(DP[13]+DP[14])+DP[7]*(
 DP[13]+DP[14])+DP[11]*(S[2]-DP[9]))-C[36]*DP[11])+C[8]*(DP[4]*(DP[13]+
 DP[14])+DP[7]*(DP[13]+DP[14])+DP[11]*(S[2]-DP[9]))-C[39]*DP[11]);
tmp[1]=+S[2]*(DP[13]*(DP[0]*(S[2]*(DP[8]*(C[14]*(DP[0]-DP[2])-C[17]-C[16]*
 DP[1])+DP[6]*(C[23]+C[22]*DP[1]-C[14]*DP[2])+DP[7]*(C[20]-C[14]*DP[1]))+
 DP[1]*(C[25]*DP[4]-C[32]*DP[3]+C[27]*DP[5]-C[11]*DP[6]+C[3]*DP[7]+C[5]*
 DP[8])+DP[2]*(C[25]*(DP[3]+DP[5])+C[3]*(DP[6]+DP[8]))+DP[0]*(-C[25]*DP[5]-
 C[3]*DP[8])+C[28]*DP[5]-C[4]*DP[3]-C[7]*DP[4]-C[12]*DP[6]-C[9]*DP[7]+C[6]*
 DP[8])+DP[2]*(DP[1]*(S[2]*(C[13]*DP[8]-C[16]*DP[6]-C[14]*DP[7])+C[27]*
 DP[3]+C[25]*DP[4]-C[24]*DP[5]+C[5]*DP[6]+C[3]*DP[7]-C[2]*DP[8])+S[2]*(
 DP[6]*(C[14]*DP[2]-C[21])+C[15]*DP[8]-C[18]*DP[7])+DP[2]*(-C[25]*DP[3]-
 C[3]*DP[6])+C[31]*DP[3]+C[29]*DP[4]-C[26]*DP[5]+C[10]*DP[6]+C[7]*DP[7]-
 C[4]*DP[8])+DP[1]*(DP[7]*(S[2]*(C[19]+C[16]*DP[1])-C[8]-C[5]*DP[1])+DP[4]*
 (-C[30]-C[27]*DP[1])))+DP[14]*(DP[0]*(DP[5]*(C[3]*(DP[2]-DP[0])+C[6]+C[5]*
 DP[1])+DP[3]*(C[3]*DP[2]-C[12]-C[11]*DP[1])+DP[4]*(C[3]*DP[1]-C[9]))+DP[2]*
 (DP[1]*(C[5]*DP[3]+C[3]*DP[4]-C[2]*DP[5])+DP[3]*(C[10]-C[3]*DP[2])+C[7]*
 DP[4]-C[4]*DP[5])+DP[1]*(DP[4]*(-C[8]-C[5]*DP[1]))));
R=+DP[1]*(DP[9]*(DP[0]*(C[3]*(DP[2]*(DP[13]*(-DP[3]-DP[5]-DP[6]-DP[8])+
 DP[14]*(-DP[3]-DP[5]-DP[6]-DP[8])+S[2]*(-DP[10]-DP[12])+DP[9]*(DP[10]+
 DP[12]))+DP[0]*(DP[5]*(DP[13]+DP[14])+DP[8]*(DP[13]+DP[14])+DP[12]*(S[2]-
 DP[9]))+DP[1]*(DP[4]*(-DP[13]-DP[14])+DP[7]*(-DP[13]-DP[14])+DP[11]*(DP[9]-
 S[2])))+DP[1]*(C[11]*(DP[3]*(DP[13]+DP[14])+DP[6]*(DP[13]+DP[14])+DP[10]*(
 S[2]-DP[9]))+C[5]*(DP[5]*(-DP[13]-DP[14])+DP[8]*(-DP[13]-DP[14])+DP[12]*(
 DP[9]-S[2]))+C[34]*DP[11]-C[42]*DP[10]+C[36]*DP[12])+DP[13]*(C[12]*(DP[3]+
 DP[6])+C[9]*(DP[4]+DP[7])+C[6]*(-DP[5]-DP[8]))+DP[14]*(C[12]*(DP[3]+DP[6])+
 C[9]*(DP[4]+DP[7])+C[6]*(-DP[5]-DP[8]))+DP[12]*(C[6]*(DP[9]-S[2])+C[34]*(
 DP[2]-DP[0])+C[37])+DP[10]*(C[12]*(S[2]-DP[9])+C[34]*DP[2]-C[43])+DP[11]*(
 C[9]*(S[2]-DP[9])-C[40]))+tmp[0])+tmp[1]);
R*=(N/D)*Q1[5]*Q2[1]*Q2[2]*Q1[6];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*81)/(64);
 }
 return R;
}
