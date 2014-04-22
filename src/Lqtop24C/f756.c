/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F756_out;
static void C756(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[36]*V[36];
S[1]=V[11]*V[11];
S[2]=V[8]*V[8]*V[8]*V[8];
C[66]=+S[2]*(S[1]*(V[35]*(14*V[36]+7*V[35])+7*S[0]));
C[65]=+S[2]*(S[1]*(V[35]*(16*V[36]+8*V[35])+8*S[0]));
C[64]=+S[2]*(V[35]*(4*V[35]-8*V[36])+4*S[0]);
C[63]=+S[2]*(S[1]*(V[35]*(10*V[36]+5*V[35])+5*S[0]));
C[62]=+S[2]*(V[35]*(10*V[35]-20*V[36])+10*S[0]);
C[61]=+S[2]*(V[35]*(18*V[35]-36*V[36])+18*S[0]);
C[60]=+S[2]*(S[1]*(V[35]*(8*V[36]+4*V[35])+4*S[0]));
C[59]=+S[2]*(V[35]*(2*V[35]-4*V[36])+2*S[0]);
S[3]=V[8]*V[8];
C[58]=+S[3]*(S[1]*(V[35]*(40*V[36]+20*V[35])+20*S[0]));
C[57]=+S[3]*(V[35]*(40*V[35]-80*V[36])+40*S[0]);
C[56]=+S[1]*(V[35]*(40*V[36]+20*V[35])+20*S[0]);
C[55]=+V[35]*(40*V[35]-80*V[36])+40*S[0];
C[54]=+S[3]*(V[35]*(72*V[35]-144*V[36])+72*S[0]);
C[53]=+V[35]*(72*V[35]-144*V[36])+72*S[0];
C[52]=+S[3]*(S[1]*(V[35]*(56*V[36]+28*V[35])+28*S[0]));
C[51]=+S[1]*(V[35]*(56*V[36]+28*V[35])+28*S[0]);
C[50]=+S[3]*(S[1]*(V[35]*(64*V[36]+32*V[35])+32*S[0]));
C[49]=+S[1]*(V[35]*(64*V[36]+32*V[35])+32*S[0]);
C[48]=+V[35]*(16*V[35]-32*V[36])+16*S[0];
C[47]=+S[1]*(V[35]*(32*V[36]+16*V[35])+16*S[0]);
C[46]=+V[35]*(8*V[35]-16*V[36])+8*S[0];
C[45]=+S[3]*(S[1]*(V[35]*(24*V[36]+12*V[35])+12*S[0]));
C[44]=+S[3]*(V[35]*(24*V[35]-48*V[36])+24*S[0]);
C[43]=+S[3]*(V[35]*(120*V[35]-240*V[36])+120*S[0]);
C[42]=+S[3]*(V[35]*(160*V[35]-320*V[36])+160*S[0]);
C[41]=+S[3]*(V[35]*(64*V[35]-128*V[36])+64*S[0]);
C[40]=+S[3]*(V[35]*(192*V[35]-384*V[36])+192*S[0]);
C[39]=+S[1]*(V[35]*(24*V[36]+12*V[35])+12*S[0]);
C[38]=+V[35]*(24*V[35]-48*V[36])+24*S[0];
C[37]=+S[1]*(V[35]*(16*V[36]+8*V[35])+8*S[0]);
C[36]=+V[35]*(120*V[35]-240*V[36])+120*S[0];
C[35]=+V[35]*(160*V[35]-320*V[36])+160*S[0];
C[34]=+V[35]*(64*V[35]-128*V[36])+64*S[0];
C[33]=+S[1]*(V[35]*(8*V[36]+4*V[35])+4*S[0]);
C[32]=+V[35]*(192*V[35]-384*V[36])+192*S[0];
C[31]=+V[35]*(96*V[35]-192*V[36])+96*S[0];
C[30]=+V[35]*(32*V[35]-64*V[36])+32*S[0];
C[29]=+S[3]*(S[1]*(V[35]*(20*V[36]+10*V[35])+10*S[0]));
C[28]=+S[3]*(V[35]*(20*V[35]-40*V[36])+20*S[0]);
C[27]=+S[3]*(V[35]*(36*V[35]-72*V[36])+36*S[0]);
C[26]=+S[3]*(S[1]*(V[35]*(28*V[36]+14*V[35])+14*S[0]));
C[25]=+S[3]*(S[1]*(V[35]*(32*V[36]+16*V[35])+16*S[0]));
C[24]=+S[3]*(V[35]*(8*V[35]-16*V[36])+8*S[0]);
C[23]=+S[3]*(S[1]*(V[35]*(16*V[36]+8*V[35])+8*S[0]));
C[22]=+S[3]*(V[35]*(4*V[35]-8*V[36])+4*S[0]);
C[21]=+S[2]*(S[1]*(V[35]*(6*V[36]+3*V[35])+3*S[0]));
C[20]=+S[2]*(V[35]*(6*V[35]-12*V[36])+6*S[0]);
C[19]=+S[3]*(S[1]*(V[35]*(12*V[36]+6*V[35])+6*S[0]));
C[18]=+S[3]*(V[35]*(12*V[35]-24*V[36])+12*S[0]);
C[17]=+S[2]*(S[1]*(V[35]*(4*V[36]+2*V[35])+2*S[0]));
C[16]=+S[2]*(V[35]*(30*V[35]-60*V[36])+30*S[0]);
C[15]=+S[3]*(S[1]*(V[35]*(8*V[36]+4*V[35])+4*S[0]));
C[14]=+S[3]*(V[35]*(60*V[35]-120*V[36])+60*S[0]);
C[13]=+S[2]*(V[35]*(40*V[35]-80*V[36])+40*S[0]);
C[12]=+S[3]*(V[35]*(80*V[35]-160*V[36])+80*S[0]);
C[11]=+S[2]*(V[35]*(16*V[35]-32*V[36])+16*S[0]);
C[10]=+S[3]*(V[35]*(32*V[35]-64*V[36])+32*S[0]);
C[9]=+S[2]*(S[1]*(V[35]*(2*V[36]+V[35])+S[0]));
C[8]=+S[3]*(S[1]*(V[35]*(4*V[36]+2*V[35])+2*S[0]));
C[7]=+S[2]*(V[35]*(48*V[35]-96*V[36])+48*S[0]);
C[6]=+S[3]*(V[35]*(96*V[35]-192*V[36])+96*S[0]);
C[5]=+S[2]*(V[35]*(24*V[35]-48*V[36])+24*S[0]);
C[4]=+S[3]*(V[35]*(48*V[35]-96*V[36])+48*S[0]);
C[3]=+S[2]*(V[35]*(8*V[35]-16*V[36])+8*S[0]);
C[2]=+S[3]*(V[35]*(16*V[35]-32*V[36])+16*S[0]);
S[4]=V[14]*V[14];
S[5]=V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[4]*S[5];
S[6]=V[52]*V[52];
S[7]=V[15]*V[15];
S[8]=V[1]*V[1]*V[1]*V[1];
C[0]=+3*S[6]*S[7]*S[8];
}
REAL F756_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
      G                       n2     !  n2                           
    -1---\                 /==>======!==>==\                         
      P1 |                 |  P3     !  P3 |                         
         |                 |         !     |                         
      G  |  G     t     W+ |  E2     !  E2 |  W+    t     G          
    -2---@-3---@==>==@-4>--@==<======!==<==@-->5-@==>==@---1-        
      P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1         
               |     |               !           |     |             
               |     |        b      !  b        |     |             
               |     \========>======!==>========/    u|-PA          
               |              P6     !  P6             |             
               |                     !                 |             
               |              U      !  U              |  G          
               \==============<======!==<==============@---2-        
                              P5     !  P5                P2         
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[67];REAL S[3];REAL tmp[4];                                    
     
if(CalcConst) C756(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[1];
S[2]=V[53]*V[53];
tmp[0]=+DP[6]*(DP[12]*(DP[0]*(C[24]*(DP[1]+DP[3])+C[28]*(DP[2]+DP[4])+C[14]*
 (-DP[8]-DP[9]))+DP[6]*(C[24]*(-DP[1]-DP[3])+C[27]*(-DP[2]-DP[4])+C[12]*(
 DP[8]+DP[9]))+DP[7]*(C[24]*(DP[1]+DP[3])+C[10]*(-DP[2]-DP[4])+C[6]*(DP[8]+
 DP[9]))+C[25]*(DP[1]+DP[3])+C[29]*(DP[2]+DP[4])+C[15]*(DP[8]+DP[9]))+
 DP[13]*(DP[0]*(C[24]*(DP[1]+DP[3])+C[28]*(DP[2]+DP[4])+C[14]*(-DP[8]-
 DP[9]))+DP[6]*(C[24]*(-DP[1]-DP[3])+C[27]*(-DP[2]-DP[4])+C[12]*(DP[8]+
 DP[9]))+DP[7]*(C[24]*(DP[1]+DP[3])+C[10]*(-DP[2]-DP[4])+C[6]*(DP[8]+
 DP[9]))+C[25]*(DP[1]+DP[3])+C[29]*(DP[2]+DP[4])+C[15]*(DP[8]+DP[9]))+S[2]*(
 DP[10]*(C[24]*(DP[0]-DP[6]+DP[7])+C[25])+DP[11]*(C[29]+C[28]*DP[0]-C[27]*
 DP[6]-C[10]*DP[7])+DP[14]*(C[15]-C[14]*DP[0]+C[12]*DP[6]+C[6]*DP[7]))+
 DP[5]*(DP[10]*(C[24]*(DP[6]-DP[0]-DP[7])-C[25])+DP[11]*(C[27]*DP[6]-C[29]-
 C[28]*DP[0]+C[10]*DP[7])+DP[14]*(C[14]*DP[0]-C[15]-C[12]*DP[6]-C[6]*
 DP[7]))+DP[10]*(C[64]*(DP[6]-DP[0]-DP[7])-C[65])+DP[11]*(C[61]*DP[6]-C[63]-
 C[62]*DP[0]+C[11]*DP[7])+DP[14]*(C[16]*DP[0]-C[17]-C[13]*DP[6]-C[7]*
 DP[7]));
tmp[1]=+S[2]*(DP[12]*(DP[6]*(S[2]*(DP[3]*(C[48]*(DP[0]-DP[6]+DP[7])+C[49])+
 DP[4]*(C[56]+C[55]*DP[0]-C[53]*DP[6]-C[34]*DP[7])+DP[9]*(C[37]-C[36]*DP[0]+
 C[35]*DP[6]+C[32]*DP[7]))+DP[0]*(C[43]*DP[8]-C[2]*DP[1]-C[57]*DP[2]-C[24]*
 DP[3]-C[28]*DP[4]+C[14]*DP[9])+DP[6]*(C[2]*DP[1]+C[54]*DP[2]+C[24]*DP[3]+
 C[27]*DP[4]-C[42]*DP[8]-C[12]*DP[9])+DP[7]*(C[41]*DP[2]-C[2]*DP[1]-C[24]*
 DP[3]+C[10]*DP[4]-C[40]*DP[8]-C[6]*DP[9])-C[50]*DP[1]-C[58]*DP[2]-C[25]*
 DP[3]-C[29]*DP[4]-C[23]*DP[8]-C[15]*DP[9])+DP[7]*(S[2]*(DP[0]*(C[46]*DP[3]+
 C[30]*DP[4]-C[31]*DP[9])+DP[7]*(C[30]*(DP[3]+DP[9])+C[46]*DP[4])+C[51]*
 DP[3]+C[47]*DP[4]+C[33]*DP[9])+DP[0]*(C[6]*DP[8]-C[24]*DP[1]-C[10]*DP[2]-
 C[22]*DP[3]-C[2]*DP[4]+C[4]*DP[9])+DP[7]*(C[10]*(-DP[1]-DP[8])+C[2]*(-
 DP[3]-DP[9])-C[24]*DP[2]-C[22]*DP[4])-C[52]*DP[1]-C[25]*DP[2]-C[26]*DP[3]-
 C[23]*DP[4]-C[15]*DP[8]-C[8]*DP[9])+DP[0]*(DP[9]*(S[2]*(C[38]*DP[0]-C[39])+
 C[19]-C[18]*DP[0])+DP[8]*(C[45]-C[44]*DP[0])))+DP[13]*(DP[6]*(DP[1]*(C[24]*
 (DP[6]-DP[0]-DP[7])-C[25])+DP[2]*(C[27]*DP[6]-C[29]-C[28]*DP[0]+C[10]*
 DP[7])+DP[8]*(C[14]*DP[0]-C[15]-C[12]*DP[6]-C[6]*DP[7]))+DP[7]*(DP[0]*(
 C[4]*DP[8]-C[22]*DP[1]-C[2]*DP[2])+DP[7]*(C[2]*(-DP[1]-DP[8])-C[22]*DP[2])-
 C[26]*DP[1]-C[23]*DP[2]-C[8]*DP[8])+DP[0]*(DP[8]*(C[19]-C[18]*DP[0]))));
tmp[2]=+DP[5]*(DP[6]*(DP[7]*(C[2]*(DP[12]*(DP[2]-DP[1]-DP[3]+DP[4])+DP[13]*(
 DP[2]-DP[1]-DP[3]+DP[4])+S[2]*(DP[11]-DP[10])+DP[5]*(DP[10]-DP[11]))+C[4]*(
 DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[3]*(
 DP[10]-DP[11])+C[5]*DP[14])+DP[6]*(C[2]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))+C[10]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-
 DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[11]*DP[14]-C[3]*DP[11])+C[25]*(DP[1]*
 (-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[23]*(DP[2]*
 (-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[65]*DP[10]+
 C[60]*DP[11])+DP[7]*(DP[7]*(C[2]*(DP[12]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[13]*
 (-DP[1]-DP[3]-DP[8]-DP[9])+S[2]*(-DP[10]-DP[14])+DP[5]*(DP[10]+DP[14]))+
 C[3]*(DP[10]+DP[14]))+C[25]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*(DP[5]-S[2]))+C[23]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*(DP[5]-S[2]))+C[65]*DP[10]+C[60]*DP[11]));
tmp[3]=+DP[0]*(DP[5]*(DP[7]*(DP[0]*(DP[12]*(C[22]*(DP[1]+DP[3])+C[2]*(DP[2]+
 DP[4])+C[4]*(-DP[8]-DP[9]))+DP[13]*(C[22]*(DP[1]+DP[3])+C[2]*(DP[2]+DP[4])+
 C[4]*(-DP[8]-DP[9]))+S[2]*(C[22]*DP[10]+C[2]*DP[11]-C[4]*DP[14])+DP[5]*(
 C[4]*DP[14]-C[22]*DP[10]-C[2]*DP[11])+C[5]*DP[14]-C[59]*DP[10]-C[3]*
 DP[11])+DP[7]*(C[2]*(DP[12]*(DP[1]+DP[3]+DP[8]+DP[9])+DP[13]*(DP[1]+DP[3]+
 DP[8]+DP[9])+S[2]*(DP[10]+DP[14])+DP[5]*(-DP[10]-DP[14]))+C[22]*(DP[2]*(
 DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))+C[3]*(-DP[10]-
 DP[14])-C[59]*DP[11])+DP[12]*(C[26]*(DP[1]+DP[3])+C[23]*(DP[2]+DP[4])+C[8]*
 (DP[8]+DP[9]))+DP[13]*(C[26]*(DP[1]+DP[3])+C[23]*(DP[2]+DP[4])+C[8]*(DP[8]+
 DP[9]))+S[2]*(C[26]*DP[10]+C[23]*DP[11]+C[8]*DP[14])+DP[5]*(-C[26]*DP[10]-
 C[23]*DP[11]-C[8]*DP[14])-C[66]*DP[10]-C[60]*DP[11]-C[9]*DP[14])+DP[0]*(
 DP[0]*(C[18]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[2]-
 DP[5]))-C[20]*DP[14])+C[19]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*(DP[5]-S[2]))+C[21]*DP[14])+tmp[0])+tmp[1]);
R=+DP[6]*(S[2]*(DP[12]*(DP[6]*(DP[7]*(S[2]*(C[30]*(DP[4]-DP[3])-C[31]*
 DP[9])+C[10]*(DP[1]-DP[2])+C[2]*(DP[3]-DP[4])+C[6]*DP[8]+C[4]*DP[9])+DP[6]*
 (S[2]*(C[30]*DP[4]-C[34]*DP[9])+C[10]*(DP[9]-DP[2])+C[41]*DP[8]-C[2]*
 DP[4])+S[2]*(-C[49]*DP[3]-C[47]*DP[4])+C[25]*(DP[2]+DP[3])+C[50]*DP[1]+
 C[23]*DP[4])+DP[7]*(DP[7]*(S[2]*(C[30]*(-DP[3]-DP[9]))+C[10]*(DP[1]+DP[8])+
 C[2]*(DP[3]+DP[9]))+S[2]*(-C[49]*DP[3]-C[47]*DP[4])+C[25]*(DP[2]+DP[3])+
 C[50]*DP[1]+C[23]*DP[4]))+DP[13]*(DP[6]*(DP[2]*(C[2]*(-DP[6]-DP[7])+C[23])+
 DP[1]*(C[25]+C[2]*DP[7])+DP[8]*(C[10]*DP[6]+C[4]*DP[7]))+DP[7]*(DP[1]*(
 C[25]+C[2]*DP[7])+C[23]*DP[2]+C[2]*DP[8]*DP[7])))+tmp[2])+tmp[3];
R*=(N/D)*Q1[3]*Q2[1]*Q2[2]*Q1[6];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*-9)/(-8);
 }
 return R;
}
