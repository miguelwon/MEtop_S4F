/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F589_out;
static void C589(REAL * C)
{
REAL* V=va_out;
REAL S[13];                                                                 
     
S[0]=V[38]*V[38];
S[1]=V[37]*V[37];
S[2]=V[11]*V[11];
S[3]=V[9]*V[9]*V[9]*V[9];
S[4]=V[8]*V[8]*V[8]*V[8];
C[66]=+S[4]*(S[3]*(V[9]*(V[9]*(V[37]*(10*V[38]-5*V[37])-5*S[0])+V[11]*(6*(
 S[0]-S[1])))+S[2]*(V[37]*(2*V[38]+V[37])+S[0])));
S[5]=V[9]*V[9];
C[65]=+S[4]*(S[5]*(V[9]*(V[9]*(V[37]*(6*V[38]-3*V[37])-3*S[0])+V[11]*(2*(
 S[1]-S[0])))+S[2]*(V[37]*(10*V[38]+5*V[37])+5*S[0])));
C[64]=+S[4]*(S[2]*(V[37]*(4*V[38]+2*V[37])+2*S[0]));
C[63]=+S[4]*(S[5]*(V[9]*(6*(S[1]*(-V[11]-V[9])+S[0]*(V[11]-V[9]))+12*V[38]*
 V[37]*V[9])+S[2]*(V[37]*(4*V[38]+2*V[37])+2*S[0])));
C[62]=+S[4]*(V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[0])+V[11]*(8*(S[0]-
 S[1]))));
C[61]=+S[4]*(S[5]*(V[37]*(2*V[37]-4*V[38])+2*S[0]));
C[60]=+S[4]*(V[37]*(8*V[37]-16*V[38])+8*S[0]);
S[6]=V[8]*V[8];
C[59]=+S[3]*(S[6]*(V[9]*(V[9]*(V[37]*(40*V[38]-20*V[37])-20*S[0])+V[11]*(24*
 (S[0]-S[1])))+S[2]*(V[37]*(8*V[38]+4*V[37])+4*S[0])));
C[58]=+S[3]*(V[9]*(V[9]*(V[37]*(40*V[38]-20*V[37])-20*S[0])+V[11]*(24*(S[0]-
 S[1])))+S[2]*(V[37]*(8*V[38]+4*V[37])+4*S[0]));
C[57]=+S[6]*(S[5]*(V[9]*(V[9]*(V[37]*(24*V[38]-12*V[37])-12*S[0])+V[11]*(8*(
 S[1]-S[0])))+S[2]*(V[37]*(40*V[38]+20*V[37])+20*S[0])));
C[56]=+S[5]*(V[9]*(V[9]*(V[37]*(24*V[38]-12*V[37])-12*S[0])+V[11]*(8*(S[1]-
 S[0])))+S[2]*(V[37]*(40*V[38]+20*V[37])+20*S[0]));
C[55]=+S[6]*(S[2]*(V[37]*(16*V[38]+8*V[37])+8*S[0]));
C[54]=+S[2]*(V[37]*(16*V[38]+8*V[37])+8*S[0]);
C[53]=+S[6]*(S[5]*(V[9]*(24*(S[1]*(-V[11]-V[9])+S[0]*(V[11]-V[9]))+48*V[38]*
 V[37]*V[9])+S[2]*(V[37]*(16*V[38]+8*V[37])+8*S[0])));
C[52]=+S[6]*(V[9]*(V[9]*(V[37]*(32*V[38]-16*V[37])-16*S[0])+V[11]*(32*(S[0]-
 S[1]))));
C[51]=+S[5]*(V[9]*(24*(S[1]*(-V[11]-V[9])+S[0]*(V[11]-V[9]))+48*V[38]*V[37]*
 V[9])+S[2]*(V[37]*(16*V[38]+8*V[37])+8*S[0]));
C[50]=+V[9]*(V[9]*(V[37]*(32*V[38]-16*V[37])-16*S[0])+V[11]*(32*(S[0]-
 S[1])));
C[49]=+S[6]*(V[37]*(32*V[37]-64*V[38])+32*S[0]);
C[48]=+S[5]*(V[37]*(8*V[37]-16*V[38])+8*S[0]);
C[47]=+V[37]*(32*V[37]-64*V[38])+32*S[0];
C[46]=+S[3]*(S[6]*(V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[0])+V[11]*(24*(
 S[1]-S[0])))+S[2]*(V[37]*(8*V[38]+4*V[37])+4*S[0])));
C[45]=+S[6]*(S[5]*(V[9]*(V[9]*(V[37]*(56*V[38]-28*V[37])-28*S[0])+V[11]*(24*
 (S[1]-S[0])))+S[2]*(V[37]*(8*V[38]+4*V[37])+4*S[0])));
C[44]=+S[6]*(S[5]*(V[9]*(V[9]*(V[37]*(40*V[37]-80*V[38])+40*S[0])+V[11]*(8*(
 S[1]-S[0])))+S[2]*(V[37]*(16*V[38]+8*V[37])+8*S[0])));
C[43]=+S[6]*(V[37]*(S[5]*(32*V[37]-64*V[38])+S[2]*(16*V[38]+8*V[37]))+S[0]*(
 8*S[2]+32*S[5]));
S[7]=V[9]*V[9]*V[9];
C[42]=+S[7]*(S[6]*(V[9]*(V[37]*(16*V[37]-32*V[38])+16*S[0])+V[11]*(24*(S[0]-
 S[1]))));
C[41]=+S[6]*(V[9]*(V[9]*(V[37]*(24*V[37]-48*V[38])+24*S[0])+V[11]*(32*(S[0]-
 S[1]))));
C[40]=+S[6]*(S[5]*(V[37]*(48*V[37]-96*V[38])+48*S[0]));
C[39]=+S[6]*(S[5]*(V[37]*(16*V[37]-32*V[38])+16*S[0]));
C[38]=+S[3]*(V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[0])+V[11]*(24*(S[1]-
 S[0])))+S[2]*(V[37]*(8*V[38]+4*V[37])+4*S[0]));
C[37]=+S[5]*(V[9]*(V[9]*(V[37]*(56*V[38]-28*V[37])-28*S[0])+V[11]*(24*(S[1]-
 S[0])))+S[2]*(V[37]*(8*V[38]+4*V[37])+4*S[0]));
C[36]=+S[5]*(V[37]*(24*V[37]-48*V[38])+24*S[0]);
C[35]=+S[5]*(V[9]*(V[9]*(V[37]*(40*V[37]-80*V[38])+40*S[0])+V[11]*(8*(S[1]-
 S[0])))+S[2]*(V[37]*(16*V[38]+8*V[37])+8*S[0]));
C[34]=+V[37]*(S[5]*(32*V[37]-64*V[38])+S[2]*(16*V[38]+8*V[37]))+S[0]*(8*
 S[2]+32*S[5]);
C[33]=+S[7]*(V[9]*(V[37]*(16*V[37]-32*V[38])+16*S[0])+V[11]*(24*(S[0]-
 S[1])));
C[32]=+V[9]*(V[9]*(V[37]*(24*V[37]-48*V[38])+24*S[0])+V[11]*(32*(S[0]-
 S[1])));
C[31]=+S[5]*(V[37]*(48*V[37]-96*V[38])+48*S[0]);
C[30]=+V[37]*(16*V[37]-32*V[38])+16*S[0];
C[29]=+S[5]*(V[37]*(16*V[37]-32*V[38])+16*S[0]);
C[28]=+S[3]*(S[6]*(V[9]*(V[9]*(V[37]*(20*V[38]-10*V[37])-10*S[0])+V[11]*(12*
 (S[0]-S[1])))+S[2]*(V[37]*(4*V[38]+2*V[37])+2*S[0])));
C[27]=+S[6]*(S[5]*(V[9]*(V[9]*(V[37]*(12*V[38]-6*V[37])-6*S[0])+V[11]*(4*(
 S[1]-S[0])))+S[2]*(V[37]*(20*V[38]+10*V[37])+10*S[0])));
C[26]=+S[6]*(S[2]*(V[37]*(8*V[38]+4*V[37])+4*S[0]));
C[25]=+S[6]*(S[5]*(V[9]*(12*(S[1]*(-V[11]-V[9])+S[0]*(V[11]-V[9]))+24*V[38]*
 V[37]*V[9])+S[2]*(V[37]*(8*V[38]+4*V[37])+4*S[0])));
C[24]=+S[6]*(V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[0])+V[11]*(16*(S[0]-
 S[1]))));
C[23]=+S[6]*(S[5]*(V[37]*(4*V[37]-8*V[38])+4*S[0]));
C[22]=+S[6]*(V[37]*(16*V[37]-32*V[38])+16*S[0]);
C[21]=+S[4]*(S[3]*(V[9]*(V[9]*(V[37]*(2*V[38]-V[37])-S[0])+V[11]*(6*(S[1]-
 S[0])))+S[2]*(V[37]*(2*V[38]+V[37])+S[0])));
C[20]=+S[4]*(S[5]*(V[9]*(V[9]*(V[37]*(14*V[38]-7*V[37])-7*S[0])+V[11]*(6*(
 S[1]-S[0])))+S[2]*(V[37]*(2*V[38]+V[37])+S[0])));
C[19]=+S[4]*(S[5]*(V[37]*(6*V[37]-12*V[38])+6*S[0]));
C[18]=+S[3]*(S[6]*(V[9]*(V[9]*(V[37]*(4*V[38]-2*V[37])-2*S[0])+V[11]*(12*(
 S[1]-S[0])))+S[2]*(V[37]*(4*V[38]+2*V[37])+2*S[0])));
C[17]=+S[6]*(S[5]*(V[9]*(V[9]*(V[37]*(28*V[38]-14*V[37])-14*S[0])+V[11]*(12*
 (S[1]-S[0])))+S[2]*(V[37]*(4*V[38]+2*V[37])+2*S[0])));
C[16]=+S[6]*(S[5]*(V[37]*(12*V[37]-24*V[38])+12*S[0]));
C[15]=+S[4]*(S[5]*(V[9]*(V[9]*(V[37]*(10*V[37]-20*V[38])+10*S[0])+V[11]*(2*(
 S[1]-S[0])))+S[2]*(V[37]*(4*V[38]+2*V[37])+2*S[0])));
C[14]=+S[4]*(V[37]*(S[5]*(8*V[37]-16*V[38])+S[2]*(4*V[38]+2*V[37]))+S[0]*(2*
 S[2]+8*S[5]));
C[13]=+S[6]*(S[5]*(V[9]*(V[9]*(V[37]*(20*V[37]-40*V[38])+20*S[0])+V[11]*(4*(
 S[1]-S[0])))+S[2]*(V[37]*(8*V[38]+4*V[37])+4*S[0])));
C[12]=+S[6]*(V[37]*(S[5]*(16*V[37]-32*V[38])+S[2]*(8*V[38]+4*V[37]))+S[0]*(
 4*S[2]+16*S[5]));
C[11]=+S[4]*(S[7]*(V[9]*(V[37]*(4*V[37]-8*V[38])+4*S[0])+V[11]*(6*(S[0]-
 S[1]))));
C[10]=+S[4]*(V[9]*(V[9]*(V[37]*(6*V[37]-12*V[38])+6*S[0])+V[11]*(8*(S[0]-
 S[1]))));
C[9]=+S[7]*(S[6]*(V[9]*(V[37]*(8*V[37]-16*V[38])+8*S[0])+V[11]*(12*(S[0]-
 S[1]))));
C[8]=+S[6]*(V[9]*(V[9]*(V[37]*(12*V[37]-24*V[38])+12*S[0])+V[11]*(16*(S[0]-
 S[1]))));
C[7]=+S[4]*(S[5]*(V[37]*(12*V[37]-24*V[38])+12*S[0]));
C[6]=+S[4]*(V[37]*(4*V[37]-8*V[38])+4*S[0]);
C[5]=+S[6]*(S[5]*(V[37]*(24*V[37]-48*V[38])+24*S[0]));
C[4]=+S[6]*(V[37]*(8*V[37]-16*V[38])+8*S[0]);
C[3]=+S[4]*(S[5]*(V[37]*(4*V[37]-8*V[38])+4*S[0]));
C[2]=+S[6]*(S[5]*(V[37]*(8*V[37]-16*V[38])+8*S[0]));
S[8]=V[14]*V[14];
S[9]=V[2]*V[2]*V[2]*V[2];
C[1]=+27*S[8]*S[9];
S[10]=V[52]*V[52];
S[11]=V[16]*V[16];
S[12]=V[1]*V[1]*V[1]*V[1];
C[0]=+16*S[10]*S[11]*S[12];
}
REAL F589_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
      C                       N2     !  N2                           
    ==<==\                 /==<======!==<==\                         
      P1 |                 |  P3     !  P3 |                         
         |                 |         !     |                         
      c  |  G     t     W+ |  e2     !  e2 |  W+    t     C          
    ==>==@-1---@==<==@-2<--@==>======!==>==@--<4-@==<==@==<==        
      P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1         
               |     |               !           |     |             
               |     |        B      !  B        |     |             
               |     \========<======!==<========/    G|-PA          
               |              P6     !  P6             3             
               |                     !                 |             
               |              c      !  c              |  c          
               \==============>======!==>==============@==>==        
                              P5     !  P5                P2         
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[67];REAL S[3];REAL tmp[5];                                    
     
if(CalcConst) C589(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[1];
S[2]=V[53]*V[53];
tmp[0]=+DP[7]*(C[4]*(DP[6]*(DP[12]*(DP[1]-DP[2]+DP[3]-DP[4])+DP[13]*(DP[1]-
 DP[2]+DP[3]-DP[4])+S[2]*(DP[10]-DP[11])+DP[5]*(DP[11]-DP[10]))+DP[7]*(
 DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[2]-DP[5])))+DP[12]*(
 C[12]*(DP[1]+DP[3])+C[23]*(DP[2]+DP[4])+C[5]*(-DP[8]-DP[9]))+DP[13]*(C[12]*
 (DP[1]+DP[3])+C[23]*(DP[2]+DP[4])+C[5]*(-DP[8]-DP[9]))+DP[10]*(C[12]*(S[2]-
 DP[5])+C[6]*(-DP[6]-DP[7])-C[14])+DP[11]*(C[23]*(S[2]-DP[5])+C[6]*DP[6]-
 C[61])+DP[14]*(C[5]*(DP[5]-S[2])+C[7]))+DP[6]*(DP[6]*(C[4]*(DP[2]*(-DP[12]-
 DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[6]*DP[11])+C[26]*(
 DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[64]*
 DP[11])+C[13]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(DP[8]-DP[1]-DP[3]+
 DP[9])+S[2]*(DP[14]-DP[10])+DP[5]*(DP[10]-DP[14]))+C[27]*(DP[2]*(-DP[12]-
 DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[15]*(DP[10]-DP[14])+
 C[65]*DP[11];
tmp[1]=+DP[0]*(DP[7]*(C[8]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(DP[8]-
 DP[1]-DP[3]+DP[9])+S[2]*(DP[14]-DP[10])+DP[5]*(DP[10]-DP[14]))+C[24]*(
 DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[10]*(
 DP[10]-DP[14])+C[62]*DP[11])+DP[0]*(C[2]*(DP[1]*(DP[12]+DP[13])+DP[3]*(
 DP[12]+DP[13])+DP[10]*(S[2]-DP[5]))+C[16]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-
 DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[19]*DP[14]-C[3]*DP[10])+DP[12]*(C[9]*
 (DP[1]+DP[3])+C[25]*(DP[2]+DP[4])+C[17]*(DP[8]+DP[9]))+DP[13]*(C[9]*(DP[1]+
 DP[3])+C[25]*(DP[2]+DP[4])+C[17]*(DP[8]+DP[9]))+S[2]*(C[9]*DP[10]+C[25]*
 DP[11]+C[17]*DP[14])+DP[5]*(-C[9]*DP[10]-C[25]*DP[11]-C[17]*DP[14])-C[11]*
 DP[10]-C[63]*DP[11]-C[20]*DP[14]);
tmp[2]=+DP[6]*(DP[0]*(C[4]*(DP[6]*(DP[12]*(DP[2]+DP[4]+DP[8]+DP[9])+DP[13]*(
 DP[2]+DP[4]+DP[8]+DP[9])+S[2]*(DP[11]+DP[14])+DP[5]*(-DP[11]-DP[14]))+
 DP[7]*(DP[12]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+
 S[2]*(DP[10]-DP[14])+DP[5]*(DP[14]-DP[10]))+DP[0]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2])))+DP[7]*(C[22]*(DP[2]*(DP[12]+
 DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))+C[6]*(DP[14]-DP[10])-
 C[60]*DP[11])+DP[12]*(C[5]*(-DP[1]-DP[3])+C[23]*(-DP[2]-DP[4])+C[12]*(
 DP[8]+DP[9]))+DP[13]*(C[5]*(-DP[1]-DP[3])+C[23]*(-DP[2]-DP[4])+C[12]*(
 DP[8]+DP[9]))+DP[14]*(C[12]*(S[2]-DP[5])+C[6]*(DP[0]-DP[6])-C[14])+DP[11]*(
 C[23]*(DP[5]-S[2])+C[61]-C[6]*DP[6])+DP[10]*(C[5]*(DP[5]-S[2])+C[7]))+
 tmp[0]);
tmp[3]=+DP[6]*(DP[0]*(S[2]*(C[30]*(DP[9]*(DP[6]-DP[0]-DP[7])+DP[6]*DP[4]+
 DP[7]*DP[3])+DP[4]*(C[47]*DP[7]-C[48])+C[34]*DP[9]-C[31]*DP[3])+DP[7]*(
 C[22]*(DP[8]-DP[1]-DP[4])+C[4]*(DP[9]-DP[3])-C[49]*DP[2])+DP[6]*(C[22]*(-
 DP[2]-DP[8])+C[4]*(-DP[4]-DP[9]))+DP[0]*(C[22]*DP[8]+C[4]*DP[9])+C[40]*
 DP[1]+C[2]*DP[2]+C[5]*DP[3]+C[23]*DP[4]-C[43]*DP[8]-C[12]*DP[9])+DP[7]*(
 S[2]*(DP[3]*(C[30]*(DP[6]+DP[7])+C[34])+DP[4]*(C[48]-C[30]*DP[6])-C[31]*
 DP[9])+DP[6]*(C[22]*(DP[2]-DP[1])+C[4]*(DP[4]-DP[3]))+DP[1]*(-C[43]-C[22]*
 DP[7])+DP[3]*(-C[12]-C[4]*DP[7])+C[40]*DP[8]-C[2]*DP[2]-C[23]*DP[4]+C[5]*
 DP[9])+DP[4]*(DP[6]*(S[2]*(-C[54]-C[30]*DP[6])+C[26]+C[4]*DP[6])+C[27]-
 C[56]*S[2])+DP[2]*(DP[6]*(C[55]+C[22]*DP[6])+C[57])+S[2]*(C[35]*(DP[9]-
 DP[3]))+C[44]*(DP[1]-DP[8])+C[13]*(DP[3]-DP[9]));
tmp[4]=+S[2]*(DP[12]*(DP[0]*(DP[7]*(S[2]*(C[32]*(DP[9]-DP[3])-C[50]*DP[4])+
 C[41]*(DP[1]-DP[8])+C[8]*(DP[3]-DP[9])+C[52]*DP[2]+C[24]*DP[4])+DP[0]*(
 S[2]*(C[29]*DP[3]-C[36]*DP[9])+C[5]*DP[8]-C[39]*DP[1]-C[2]*DP[3]+C[16]*
 DP[9])+S[2]*(C[33]*DP[3]+C[51]*DP[4]+C[37]*DP[9])-C[42]*DP[1]-C[53]*DP[2]-
 C[9]*DP[3]-C[25]*DP[4]-C[45]*DP[8]-C[17]*DP[9])+DP[7]*(DP[7]*(S[2]*(C[36]*
 DP[3]-C[29]*DP[9])+C[39]*DP[8]-C[5]*DP[1]-C[16]*DP[3]+C[2]*DP[9])+S[2]*(
 C[37]*DP[3]-C[51]*DP[4]+C[33]*DP[9])+C[53]*DP[2]-C[45]*DP[1]-C[17]*DP[3]+
 C[25]*DP[4]-C[42]*DP[8]-C[9]*DP[9])+S[2]*(C[38]*(DP[9]-DP[3])+C[58]*DP[4])+
 C[46]*(DP[1]-DP[8])+C[18]*(DP[3]-DP[9])-C[59]*DP[2]-C[28]*DP[4]+tmp[3])+
 DP[13]*(DP[6]*(DP[0]*(C[4]*(DP[8]*(DP[0]-DP[6]+DP[7])-DP[6]*DP[2]-DP[7]*
 DP[1])+DP[2]*(C[23]-C[22]*DP[7])+C[5]*DP[1]-C[12]*DP[8])+DP[7]*(DP[1]*(
 C[4]*(-DP[6]-DP[7])-C[12])+DP[2]*(C[4]*DP[6]-C[23])+C[5]*DP[8])+DP[2]*(
 DP[6]*(C[26]+C[4]*DP[6])+C[27])+C[13]*(DP[1]-DP[8]))+DP[0]*(DP[1]*(C[8]*
 DP[7]-C[9]-C[2]*DP[0])+DP[8]*(C[16]*DP[0]-C[17]-C[8]*DP[7])+DP[2]*(C[24]*
 DP[7]-C[25]))+DP[7]*(DP[1]*(-C[17]-C[16]*DP[7])+DP[8]*(C[2]*DP[7]-C[9])+
 C[25]*DP[2])+C[18]*(DP[1]-DP[8])-C[28]*DP[2]));
R=+DP[5]*(DP[7]*(DP[7]*(C[16]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+
 DP[10]*(S[2]-DP[5]))+C[2]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*(DP[5]-S[2]))+C[3]*DP[14]-C[19]*DP[10])+DP[12]*(C[17]*(DP[1]+DP[3])+
 C[25]*(-DP[2]-DP[4])+C[9]*(DP[8]+DP[9]))+DP[13]*(C[17]*(DP[1]+DP[3])+C[25]*
 (-DP[2]-DP[4])+C[9]*(DP[8]+DP[9]))+S[2]*(C[17]*DP[10]-C[25]*DP[11]+C[9]*
 DP[14])+DP[5]*(C[25]*DP[11]-C[17]*DP[10]-C[9]*DP[14])+C[63]*DP[11]-C[20]*
 DP[10]-C[11]*DP[14])+C[18]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(DP[8]-
 DP[1]-DP[3]+DP[9])+S[2]*(DP[14]-DP[10])+DP[5]*(DP[10]-DP[14]))+C[28]*(
 DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))+C[21]*(
 DP[10]-DP[14])-C[66]*DP[11]+tmp[1]+tmp[2])+tmp[4];
R*=(N/D)*Q1[3]*Q2[1]*Q2[2]*Q1[4];
 if(cb_coeff_out)
 {
 }
 return R;
}
