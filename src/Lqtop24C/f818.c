/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F818_out;
static void C818(REAL * C)
{
REAL* V=va_out;
REAL S[11];                                                                 
     
S[0]=V[38]*V[38];
S[1]=V[37]*V[37];
S[2]=V[8]*V[8]*V[8]*V[8];
C[88]=+S[2]*(V[9]*(V[9]*(V[37]*(20*V[38]-10*V[37])-10*S[0])+V[11]*(18*(S[0]-
 S[1]))));
S[3]=V[11]*V[11];
C[87]=+S[2]*(V[9]*(12*(S[1]*(-V[11]-V[9])+S[0]*(V[11]-V[9]))+24*V[38]*V[37]*
 V[9])+S[3]*(V[37]*(16*V[38]+8*V[37])+8*S[0]));
C[86]=+S[2]*(V[9]*(V[9]*(V[37]*(26*V[38]-13*V[37])-13*S[0])+V[11]*(2*(S[0]-
 S[1])))+S[3]*(V[37]*(14*V[38]+7*V[37])+7*S[0]));
S[4]=V[9]*V[9];
C[85]=+S[2]*(V[37]*(S[4]*(16*V[38]-8*V[37])+S[3]*(16*V[38]+8*V[37]))+S[0]*(
 8*(S[3]-S[4])));
C[84]=+S[2]*(V[37]*(4*V[37]-8*V[38])+4*S[0]);
C[83]=+S[2]*(S[4]*(V[37]*(S[4]*(4*V[38]-2*V[37])+S[3]*(4*V[38]+2*V[37]))+
 S[0]*(2*(S[3]-S[4]))));
C[82]=+S[2]*(V[9]*(V[9]*(V[37]*(12*V[38]-6*V[37])-6*S[0])+V[11]*(18*(S[0]-
 S[1]))));
C[81]=+S[2]*(V[9]*(V[9]*(V[37]*(10*V[38]-5*V[37])-5*S[0])+V[11]*(12*(S[0]-
 S[1])))+S[3]*(V[37]*(10*V[38]+5*V[37])+5*S[0]));
C[80]=+S[2]*(V[37]*(10*V[37]-20*V[38])+10*S[0]);
C[79]=+S[2]*(V[37]*(18*V[37]-36*V[38])+18*S[0]);
C[78]=+S[2]*(V[9]*(V[9]*(V[37]*(12*V[38]-6*V[37])-6*S[0])+V[11]*(2*(S[0]-
 S[1])))+S[3]*(V[37]*(8*V[38]+4*V[37])+4*S[0]));
C[77]=+S[2]*(V[37]*(S[4]*(8*V[38]-4*V[37])+S[3]*(8*V[38]+4*V[37]))+S[0]*(4*(
 S[3]-S[4])));
C[76]=+S[2]*(V[37]*(2*V[37]-4*V[38])+2*S[0]);
S[5]=V[8]*V[8];
C[75]=+S[5]*(V[9]*(V[9]*(V[37]*(80*V[38]-40*V[37])-40*S[0])+V[11]*(72*(S[0]-
 S[1]))));
C[74]=+S[5]*(S[4]*(V[37]*(S[4]*(16*V[38]-8*V[37])+S[3]*(16*V[38]+8*V[37]))+
 S[0]*(8*(S[3]-S[4]))));
C[73]=+S[5]*(V[9]*(V[9]*(V[37]*(48*V[38]-24*V[37])-24*S[0])+V[11]*(72*(S[0]-
 S[1]))));
C[72]=+V[9]*(V[9]*(V[37]*(80*V[38]-40*V[37])-40*S[0])+V[11]*(72*(S[0]-
 S[1])));
C[71]=+S[4]*(V[37]*(S[4]*(16*V[38]-8*V[37])+S[3]*(16*V[38]+8*V[37]))+S[0]*(
 8*(S[3]-S[4])));
C[70]=+V[9]*(V[9]*(V[37]*(48*V[38]-24*V[37])-24*S[0])+V[11]*(72*(S[0]-
 S[1])));
C[69]=+S[5]*(V[9]*(48*(S[1]*(-V[11]-V[9])+S[0]*(V[11]-V[9]))+96*V[38]*V[37]*
 V[9])+S[3]*(V[37]*(64*V[38]+32*V[37])+32*S[0]));
C[68]=+S[5]*(V[9]*(V[9]*(V[37]*(40*V[38]-20*V[37])-20*S[0])+V[11]*(48*(S[0]-
 S[1])))+S[3]*(V[37]*(40*V[38]+20*V[37])+20*S[0]));
C[67]=+S[5]*(V[37]*(40*V[37]-80*V[38])+40*S[0]);
C[66]=+V[9]*(48*(S[1]*(-V[11]-V[9])+S[0]*(V[11]-V[9]))+96*V[38]*V[37]*V[9])+
 S[3]*(V[37]*(64*V[38]+32*V[37])+32*S[0]);
C[65]=+V[9]*(V[9]*(V[37]*(40*V[38]-20*V[37])-20*S[0])+V[11]*(48*(S[0]-
 S[1])))+S[3]*(V[37]*(40*V[38]+20*V[37])+20*S[0]);
C[64]=+V[37]*(40*V[37]-80*V[38])+40*S[0];
C[63]=+S[5]*(V[37]*(72*V[37]-144*V[38])+72*S[0]);
C[62]=+V[37]*(72*V[37]-144*V[38])+72*S[0];
C[61]=+S[5]*(V[9]*(V[9]*(V[37]*(104*V[38]-52*V[37])-52*S[0])+V[11]*(8*(S[0]-
 S[1])))+S[3]*(V[37]*(56*V[38]+28*V[37])+28*S[0]));
C[60]=+S[5]*(V[9]*(V[9]*(V[37]*(48*V[38]-24*V[37])-24*S[0])+V[11]*(8*(S[0]-
 S[1])))+S[3]*(V[37]*(32*V[38]+16*V[37])+16*S[0]));
C[59]=+V[9]*(V[9]*(V[37]*(104*V[38]-52*V[37])-52*S[0])+V[11]*(8*(S[0]-
 S[1])))+S[3]*(V[37]*(56*V[38]+28*V[37])+28*S[0]);
C[58]=+V[9]*(V[9]*(V[37]*(48*V[38]-24*V[37])-24*S[0])+V[11]*(8*(S[0]-
 S[1])))+S[3]*(V[37]*(32*V[38]+16*V[37])+16*S[0]);
C[57]=+S[5]*(V[37]*(S[4]*(64*V[38]-32*V[37])+S[3]*(64*V[38]+32*V[37]))+S[0]*
 (32*(S[3]-S[4])));
C[56]=+V[37]*(S[4]*(64*V[38]-32*V[37])+S[3]*(64*V[38]+32*V[37]))+S[0]*(32*(
 S[3]-S[4]));
C[55]=+V[37]*(16*V[37]-32*V[38])+16*S[0];
C[54]=+V[37]*(S[4]*(32*V[38]-16*V[37])+S[3]*(32*V[38]+16*V[37]))+S[0]*(16*(
 S[3]-S[4]));
C[53]=+V[37]*(8*V[37]-16*V[38])+8*S[0];
C[52]=+S[5]*(V[9]*(V[9]*(V[37]*(28*V[37]-56*V[38])+28*S[0])+V[11]*(72*(S[1]-
 S[0])))+S[3]*(V[37]*(24*V[38]+12*V[37])+12*S[0]));
C[51]=+S[5]*(V[37]*(24*V[37]-48*V[38])+24*S[0]);
C[50]=+S[5]*(V[9]*(V[9]*(V[37]*(8*V[37]-16*V[38])+8*S[0])+V[11]*(48*(S[1]-
 S[0])))+S[3]*(V[37]*(16*V[38]+8*V[37])+8*S[0]));
C[49]=+S[5]*(V[37]*(120*V[37]-240*V[38])+120*S[0]);
C[48]=+S[5]*(V[37]*(160*V[37]-320*V[38])+160*S[0]);
C[47]=+S[5]*(V[37]*(64*V[37]-128*V[38])+64*S[0]);
C[46]=+S[5]*(V[9]*(V[9]*(V[37]*(20*V[37]-40*V[38])+20*S[0])+V[11]*(8*(S[1]-
 S[0])))+S[3]*(V[37]*(8*V[38]+4*V[37])+4*S[0]));
C[45]=+S[5]*(V[37]*(192*V[37]-384*V[38])+192*S[0]);
C[44]=+V[9]*(V[9]*(V[37]*(28*V[37]-56*V[38])+28*S[0])+V[11]*(72*(S[1]-
 S[0])))+S[3]*(V[37]*(24*V[38]+12*V[37])+12*S[0]);
C[43]=+V[37]*(24*V[37]-48*V[38])+24*S[0];
C[42]=+V[9]*(V[9]*(V[37]*(8*V[37]-16*V[38])+8*S[0])+V[11]*(48*(S[1]-S[0])))+
 S[3]*(V[37]*(16*V[38]+8*V[37])+8*S[0]);
C[41]=+V[37]*(120*V[37]-240*V[38])+120*S[0];
C[40]=+V[37]*(160*V[37]-320*V[38])+160*S[0];
C[39]=+V[37]*(64*V[37]-128*V[38])+64*S[0];
C[38]=+V[9]*(V[9]*(V[37]*(20*V[37]-40*V[38])+20*S[0])+V[11]*(8*(S[1]-
 S[0])))+S[3]*(V[37]*(8*V[38]+4*V[37])+4*S[0]);
C[37]=+V[37]*(192*V[37]-384*V[38])+192*S[0];
C[36]=+V[37]*(96*V[37]-192*V[38])+96*S[0];
C[35]=+V[37]*(32*V[37]-64*V[38])+32*S[0];
C[34]=+S[5]*(V[9]*(V[9]*(V[37]*(40*V[38]-20*V[37])-20*S[0])+V[11]*(36*(S[0]-
 S[1]))));
C[33]=+S[5]*(S[4]*(V[37]*(S[4]*(8*V[38]-4*V[37])+S[3]*(8*V[38]+4*V[37]))+
 S[0]*(4*(S[3]-S[4]))));
C[32]=+S[5]*(V[9]*(V[9]*(V[37]*(24*V[38]-12*V[37])-12*S[0])+V[11]*(36*(S[0]-
 S[1]))));
C[31]=+S[5]*(V[9]*(24*(S[1]*(-V[11]-V[9])+S[0]*(V[11]-V[9]))+48*V[38]*V[37]*
 V[9])+S[3]*(V[37]*(32*V[38]+16*V[37])+16*S[0]));
C[30]=+S[5]*(V[9]*(V[9]*(V[37]*(20*V[38]-10*V[37])-10*S[0])+V[11]*(24*(S[0]-
 S[1])))+S[3]*(V[37]*(20*V[38]+10*V[37])+10*S[0]));
C[29]=+S[5]*(V[37]*(20*V[37]-40*V[38])+20*S[0]);
C[28]=+S[5]*(V[37]*(36*V[37]-72*V[38])+36*S[0]);
C[27]=+S[5]*(V[9]*(V[9]*(V[37]*(52*V[38]-26*V[37])-26*S[0])+V[11]*(4*(S[0]-
 S[1])))+S[3]*(V[37]*(28*V[38]+14*V[37])+14*S[0]));
C[26]=+S[5]*(V[9]*(V[9]*(V[37]*(24*V[38]-12*V[37])-12*S[0])+V[11]*(4*(S[0]-
 S[1])))+S[3]*(V[37]*(16*V[38]+8*V[37])+8*S[0]));
C[25]=+S[5]*(V[37]*(S[4]*(32*V[38]-16*V[37])+S[3]*(32*V[38]+16*V[37]))+S[0]*
 (16*(S[3]-S[4])));
C[24]=+S[5]*(V[37]*(8*V[37]-16*V[38])+8*S[0]);
C[23]=+S[5]*(V[37]*(S[4]*(16*V[38]-8*V[37])+S[3]*(16*V[38]+8*V[37]))+S[0]*(
 8*(S[3]-S[4])));
C[22]=+S[5]*(V[37]*(4*V[37]-8*V[38])+4*S[0]);
C[21]=+S[2]*(V[9]*(V[9]*(V[37]*(7*V[37]-14*V[38])+7*S[0])+V[11]*(18*(S[1]-
 S[0])))+S[3]*(V[37]*(6*V[38]+3*V[37])+3*S[0]));
C[20]=+S[2]*(V[37]*(6*V[37]-12*V[38])+6*S[0]);
C[19]=+S[5]*(V[9]*(V[9]*(V[37]*(14*V[37]-28*V[38])+14*S[0])+V[11]*(36*(S[1]-
 S[0])))+S[3]*(V[37]*(12*V[38]+6*V[37])+6*S[0]));
C[18]=+S[5]*(V[37]*(12*V[37]-24*V[38])+12*S[0]);
C[17]=+S[2]*(V[9]*(V[9]*(V[37]*(2*V[37]-4*V[38])+2*S[0])+V[11]*(12*(S[1]-
 S[0])))+S[3]*(V[37]*(4*V[38]+2*V[37])+2*S[0]));
C[16]=+S[2]*(V[37]*(30*V[37]-60*V[38])+30*S[0]);
C[15]=+S[5]*(V[9]*(V[9]*(V[37]*(4*V[37]-8*V[38])+4*S[0])+V[11]*(24*(S[1]-
 S[0])))+S[3]*(V[37]*(8*V[38]+4*V[37])+4*S[0]));
C[14]=+S[5]*(V[37]*(60*V[37]-120*V[38])+60*S[0]);
C[13]=+S[2]*(V[37]*(40*V[37]-80*V[38])+40*S[0]);
C[12]=+S[5]*(V[37]*(80*V[37]-160*V[38])+80*S[0]);
C[11]=+S[2]*(V[37]*(16*V[37]-32*V[38])+16*S[0]);
C[10]=+S[5]*(V[37]*(32*V[37]-64*V[38])+32*S[0]);
C[9]=+S[2]*(V[9]*(V[9]*(V[37]*(5*V[37]-10*V[38])+5*S[0])+V[11]*(2*(S[1]-
 S[0])))+S[3]*(V[37]*(2*V[38]+V[37])+S[0]));
C[8]=+S[5]*(V[9]*(V[9]*(V[37]*(10*V[37]-20*V[38])+10*S[0])+V[11]*(4*(S[1]-
 S[0])))+S[3]*(V[37]*(4*V[38]+2*V[37])+2*S[0]));
C[7]=+S[2]*(V[37]*(48*V[37]-96*V[38])+48*S[0]);
C[6]=+S[5]*(V[37]*(96*V[37]-192*V[38])+96*S[0]);
C[5]=+S[2]*(V[37]*(24*V[37]-48*V[38])+24*S[0]);
C[4]=+S[5]*(V[37]*(48*V[37]-96*V[38])+48*S[0]);
C[3]=+S[2]*(V[37]*(8*V[37]-16*V[38])+8*S[0]);
C[2]=+S[5]*(V[37]*(16*V[37]-32*V[38])+16*S[0]);
S[6]=V[14]*V[14];
S[7]=V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[6]*S[7];
S[8]=V[52]*V[52];
S[9]=V[16]*V[16];
S[10]=V[1]*V[1]*V[1]*V[1];
C[0]=+3*S[8]*S[9]*S[10];
}
REAL F818_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
      G                       N2     !  N2                           
    -1---\                 /==<======!==<==\                         
      P1 |                 |  P3     !  P3 |                         
         |                 |         !     |                         
      G  |  G     t     W+ |  e2     !  e2 |  W+    t     G          
    -2---@-3---@==<==@-4<--@==>======!==>==@--<5-@==<==@---1-        
      P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1         
               |     |               !           |     |             
               |     |        B      !  B        |     |             
               |     \========<======!==<========/    c|-PA          
               |              P6     !  P6             |             
               |                     !                 |             
               |              c      !  c              |  G          
               \==============>======!==>==============@---2-        
                              P5     !  P5                P2         
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[89];REAL S[3];REAL tmp[4];                                    
     
if(CalcConst) C818(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[1];
S[2]=V[53]*V[53];
tmp[0]=+DP[7]*(DP[0]*(DP[12]*(C[22]*(DP[1]+DP[3])+C[2]*(DP[2]+DP[4])+C[4]*(-
 DP[8]-DP[9]))+DP[13]*(C[22]*(DP[1]+DP[3])+C[2]*(DP[2]+DP[4])+C[4]*(-DP[8]-
 DP[9]))+S[2]*(C[22]*DP[10]+C[2]*DP[11]-C[4]*DP[14])+DP[5]*(C[4]*DP[14]-
 C[22]*DP[10]-C[2]*DP[11])+C[5]*DP[14]-C[76]*DP[10]-C[3]*DP[11])+DP[7]*(
 C[2]*(DP[12]*(DP[1]+DP[3]+DP[8]+DP[9])+DP[13]*(DP[1]+DP[3]+DP[8]+DP[9])+
 S[2]*(DP[10]+DP[14])+DP[5]*(-DP[10]-DP[14]))+C[22]*(DP[2]*(DP[12]+DP[13])+
 DP[4]*(DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))+C[3]*(-DP[10]-DP[14])-C[76]*
 DP[11])+DP[12]*(C[27]*(DP[1]+DP[3])+C[26]*(DP[2]+DP[4])+C[8]*(DP[8]+
 DP[9]))+DP[13]*(C[27]*(DP[1]+DP[3])+C[26]*(DP[2]+DP[4])+C[8]*(DP[8]+
 DP[9]))+S[2]*(C[27]*DP[10]+C[26]*DP[11]+C[8]*DP[14])+DP[5]*(-C[27]*DP[10]-
 C[26]*DP[11]-C[8]*DP[14])-C[86]*DP[10]-C[78]*DP[11]-C[9]*DP[14])+DP[0]*(
 DP[12]*(DP[0]*(C[18]*(DP[8]+DP[9]))+C[34]*(-DP[1]-DP[3])+C[32]*(-DP[2]-
 DP[4])+C[19]*(-DP[8]-DP[9]))+DP[13]*(DP[0]*(C[18]*(DP[8]+DP[9]))+C[34]*(-
 DP[1]-DP[3])+C[32]*(-DP[2]-DP[4])+C[19]*(-DP[8]-DP[9]))+DP[14]*(DP[0]*(
 C[18]*(S[2]-DP[5])-C[20])+C[19]*(DP[5]-S[2])+C[21])+DP[10]*(C[34]*(DP[5]-
 S[2])+C[88])+DP[11]*(C[32]*(DP[5]-S[2])+C[82]))+C[33]*(DP[2]*(DP[12]+
 DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))-C[83]*DP[11];
tmp[1]=+DP[12]*(DP[6]*(S[2]*(DP[3]*(C[55]*(DP[0]-DP[6]+DP[7])+C[66])+DP[4]*(
 C[65]+C[64]*DP[0]-C[62]*DP[6]-C[39]*DP[7])+DP[9]*(C[42]-C[41]*DP[0]+C[40]*
 DP[6]+C[37]*DP[7]))+DP[0]*(C[49]*DP[8]-C[2]*DP[1]-C[67]*DP[2]-C[24]*DP[3]-
 C[29]*DP[4]+C[14]*DP[9])+DP[6]*(C[2]*DP[1]+C[63]*DP[2]+C[24]*DP[3]+C[28]*
 DP[4]-C[48]*DP[8]-C[12]*DP[9])+DP[7]*(C[47]*DP[2]-C[2]*DP[1]-C[24]*DP[3]+
 C[10]*DP[4]-C[45]*DP[8]-C[6]*DP[9])-C[69]*DP[1]-C[68]*DP[2]-C[31]*DP[3]-
 C[30]*DP[4]-C[50]*DP[8]-C[15]*DP[9])+DP[7]*(S[2]*(DP[0]*(C[53]*DP[3]+C[35]*
 DP[4]-C[36]*DP[9])+DP[7]*(C[35]*(DP[3]+DP[9])+C[53]*DP[4])+C[59]*DP[3]+
 C[58]*DP[4]+C[38]*DP[9])+DP[0]*(C[6]*DP[8]-C[24]*DP[1]-C[10]*DP[2]-C[22]*
 DP[3]-C[2]*DP[4]+C[4]*DP[9])+DP[7]*(C[10]*(-DP[1]-DP[8])+C[2]*(-DP[3]-
 DP[9])-C[24]*DP[2]-C[22]*DP[4])-C[61]*DP[1]-C[60]*DP[2]-C[27]*DP[3]-C[26]*
 DP[4]-C[46]*DP[8]-C[8]*DP[9])+DP[0]*(S[2]*(DP[9]*(C[43]*DP[0]-C[44])-C[72]*
 DP[3]-C[70]*DP[4])+DP[0]*(-C[51]*DP[8]-C[18]*DP[9])+C[75]*DP[1]+C[73]*
 DP[2]+C[34]*DP[3]+C[32]*DP[4]+C[52]*DP[8]+C[19]*DP[9])+DP[4]*(C[71]*S[2]-
 C[33])-C[74]*DP[2]);
tmp[2]=+DP[5]*(DP[6]*(DP[12]*(DP[0]*(C[24]*(DP[1]+DP[3])+C[29]*(DP[2]+
 DP[4])+C[14]*(-DP[8]-DP[9]))+DP[6]*(C[24]*(-DP[1]-DP[3])+C[28]*(-DP[2]-
 DP[4])+C[12]*(DP[8]+DP[9]))+DP[7]*(C[24]*(DP[1]+DP[3])+C[10]*(-DP[2]-
 DP[4])+C[6]*(DP[8]+DP[9]))+C[31]*(DP[1]+DP[3])+C[30]*(DP[2]+DP[4])+C[15]*(
 DP[8]+DP[9]))+DP[13]*(DP[0]*(C[24]*(DP[1]+DP[3])+C[29]*(DP[2]+DP[4])+C[14]*
 (-DP[8]-DP[9]))+DP[6]*(C[24]*(-DP[1]-DP[3])+C[28]*(-DP[2]-DP[4])+C[12]*(
 DP[8]+DP[9]))+DP[7]*(C[24]*(DP[1]+DP[3])+C[10]*(-DP[2]-DP[4])+C[6]*(DP[8]+
 DP[9]))+C[31]*(DP[1]+DP[3])+C[30]*(DP[2]+DP[4])+C[15]*(DP[8]+DP[9]))+S[2]*(
 DP[10]*(C[24]*(DP[0]-DP[6]+DP[7])+C[31])+DP[11]*(C[30]+C[29]*DP[0]-C[28]*
 DP[6]-C[10]*DP[7])+DP[14]*(C[15]-C[14]*DP[0]+C[12]*DP[6]+C[6]*DP[7]))+
 DP[5]*(DP[10]*(C[24]*(DP[6]-DP[0]-DP[7])-C[31])+DP[11]*(C[28]*DP[6]-C[30]-
 C[29]*DP[0]+C[10]*DP[7])+DP[14]*(C[14]*DP[0]-C[15]-C[12]*DP[6]-C[6]*
 DP[7]))+DP[10]*(C[84]*(DP[6]-DP[0]-DP[7])-C[87])+DP[11]*(C[79]*DP[6]-C[81]-
 C[80]*DP[0]+C[11]*DP[7])+DP[14]*(C[16]*DP[0]-C[17]-C[13]*DP[6]-C[7]*
 DP[7]))+tmp[0]);
tmp[3]=+DP[5]*(DP[6]*(DP[7]*(C[2]*(DP[12]*(DP[2]-DP[1]-DP[3]+DP[4])+DP[13]*(
 DP[2]-DP[1]-DP[3]+DP[4])+S[2]*(DP[11]-DP[10])+DP[5]*(DP[10]-DP[11]))+C[4]*(
 DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[3]*(
 DP[10]-DP[11])+C[5]*DP[14])+DP[6]*(C[2]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))+C[10]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-
 DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[11]*DP[14]-C[3]*DP[11])+C[25]*(DP[1]*
 (-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[23]*(DP[2]*
 (-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[85]*DP[10]+
 C[77]*DP[11])+DP[7]*(DP[7]*(C[2]*(DP[12]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[13]*
 (-DP[1]-DP[3]-DP[8]-DP[9])+S[2]*(-DP[10]-DP[14])+DP[5]*(DP[10]+DP[14]))+
 C[3]*(DP[10]+DP[14]))+C[25]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*(DP[5]-S[2]))+C[23]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*(DP[5]-S[2]))+C[85]*DP[10]+C[77]*DP[11]));
R=+DP[0]*(S[2]*(DP[13]*(DP[6]*(DP[1]*(C[24]*(DP[6]-DP[0]-DP[7])-C[31])+
 DP[2]*(C[28]*DP[6]-C[30]-C[29]*DP[0]+C[10]*DP[7])+DP[8]*(C[14]*DP[0]-C[15]-
 C[12]*DP[6]-C[6]*DP[7]))+DP[7]*(DP[0]*(C[4]*DP[8]-C[22]*DP[1]-C[2]*DP[2])+
 DP[7]*(C[2]*(-DP[1]-DP[8])-C[22]*DP[2])-C[27]*DP[1]-C[26]*DP[2]-C[8]*
 DP[8])+DP[0]*(DP[8]*(C[19]-C[18]*DP[0])+C[34]*DP[1]+C[32]*DP[2])-C[33]*
 DP[2])+tmp[1])+tmp[2])+DP[6]*(S[2]*(DP[12]*(DP[6]*(DP[7]*(S[2]*(C[35]*(
 DP[4]-DP[3])-C[36]*DP[9])+C[10]*(DP[1]-DP[2])+C[2]*(DP[3]-DP[4])+C[6]*
 DP[8]+C[4]*DP[9])+DP[6]*(S[2]*(C[35]*DP[4]-C[39]*DP[9])+C[10]*(DP[9]-
 DP[2])+C[47]*DP[8]-C[2]*DP[4])+S[2]*(-C[56]*DP[3]-C[54]*DP[4])+C[25]*(
 DP[2]+DP[3])+C[57]*DP[1]+C[23]*DP[4])+DP[7]*(DP[7]*(S[2]*(C[35]*(-DP[3]-
 DP[9]))+C[10]*(DP[1]+DP[8])+C[2]*(DP[3]+DP[9]))+S[2]*(-C[56]*DP[3]-C[54]*
 DP[4])+C[25]*(DP[2]+DP[3])+C[57]*DP[1]+C[23]*DP[4]))+DP[13]*(DP[6]*(DP[2]*(
 C[2]*(-DP[6]-DP[7])+C[23])+DP[1]*(C[25]+C[2]*DP[7])+DP[8]*(C[10]*DP[6]+
 C[4]*DP[7]))+DP[7]*(DP[1]*(C[25]+C[2]*DP[7])+C[23]*DP[2]+C[2]*DP[8]*
 DP[7])))+tmp[3]);
R*=(N/D)*Q1[3]*Q2[1]*Q2[2]*Q1[7];
 if(cb_coeff_out)
 {
  cb_coeff_out[2] += (R*9)/(8);
 }
 return R;
}
