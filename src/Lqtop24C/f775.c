/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F775_out;
static void C775(REAL * C)
{
REAL* V=va_out;
REAL S[12];                                                                 
     
S[0]=V[38]*V[38];
S[1]=V[37]*V[37];
S[2]=V[11]*V[11];
S[3]=V[11]*V[11]*V[11];
S[4]=V[8]*V[8]*V[8]*V[8];
C[107]=+S[4]*(V[9]*(V[9]*(V[9]*(V[9]*(V[37]*(2*V[37]-4*V[38])+2*S[0])+V[11]*
 (6*(S[1]-S[0])))+S[2]*(V[37]*(4*V[38]-2*V[37])-2*S[0]))+S[3]*(6*(S[0]-
 S[1]))));
C[106]=+S[4]*(V[9]*(4*(S[1]*(-V[11]-V[9])+S[0]*(V[11]-V[9]))+8*V[38]*V[37]*
 V[9]));
C[105]=+S[4]*(V[9]*(V[9]*(V[37]*(32*V[38]-16*V[37])-16*S[0])+V[11]*(36*(
 S[0]-S[1])))+S[2]*(V[37]*(24*V[38]+4*V[37])+4*S[0]));
S[5]=V[9]*V[9];
C[104]=+S[4]*(V[37]*(S[5]*(32*V[38]-16*V[37])+S[2]*(32*V[38]+16*V[37]))+
 S[0]*(16*(S[2]-S[5])));
C[103]=+S[4]*(V[9]*(V[9]*(V[37]*(5*V[37]-10*V[38])+5*S[0])+V[11]*(16*(S[1]-
 S[0])))+S[2]*(V[37]*(2*V[38]+11*V[37])+11*S[0]));
C[102]=+S[4]*(V[37]*(S[5]*(8*V[38]-4*V[37])+S[2]*(56*V[38]+4*V[37]))+S[0]*(
 4*(S[2]-S[5])));
C[101]=+S[4]*(V[37]*(10*V[37]-20*V[38])+10*S[0]);
C[100]=+S[4]*(V[37]*(S[5]*(4*V[38]-2*V[37])+S[2]*(2*V[37]-4*V[38]))+S[0]*(2*
 (S[2]-S[5])));
C[99]=+S[4]*(V[9]*(V[9]*(V[9]*(V[9]*(V[37]*(3*V[37]-6*V[38])+3*S[0])+V[11]*(
 7*(S[1]-S[0])))+S[2]*(V[37]*(-10*V[38]-3*V[37])-3*S[0]))+S[3]*(7*(S[0]-
 S[1]))));
C[98]=+S[4]*(V[9]*(V[9]*(V[37]*(12*V[38]-6*V[37])-6*S[0])+V[11]*(22*(S[0]-
 S[1]))));
C[97]=+S[4]*(V[9]*(V[9]*(V[37]*(22*V[38]-11*V[37])-11*S[0])+V[11]*(10*(S[0]-
 S[1])))+S[2]*(V[37]*(9*V[37]-58*V[38])+9*S[0]));
C[96]=+S[4]*(V[37]*(S[5]*(40*V[38]-20*V[37])+S[2]*(20*V[37]-8*V[38]))+S[0]*(
 20*(S[2]-S[5])));
C[95]=+S[4]*(V[37]*(8*V[37]-16*V[38])+8*S[0]);
C[94]=+S[4]*(V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[0])+V[11]*(10*(S[0]-
 S[1])))+S[2]*(V[37]*(12*V[38]+10*V[37])+10*S[0]));
C[93]=+S[4]*(V[37]*(S[5]*(20*V[38]-10*V[37])+S[2]*(12*V[38]+10*V[37]))+S[0]*
 (10*(S[2]-S[5])));
C[92]=+S[4]*(V[37]*(14*V[37]-28*V[38])+14*S[0]);
C[91]=+S[4]*(V[37]*(12*V[37]-24*V[38])+12*S[0]);
S[6]=V[8]*V[8];
C[90]=+S[6]*(V[9]*(V[9]*(V[9]*(V[9]*(V[37]*(8*V[37]-16*V[38])+8*S[0])+V[11]*
 (24*(S[1]-S[0])))+S[2]*(V[37]*(16*V[38]-8*V[37])-8*S[0]))+S[3]*(24*(S[0]-
 S[1]))));
C[89]=+S[6]*(V[9]*(16*(S[1]*(-V[11]-V[9])+S[0]*(V[11]-V[9]))+32*V[38]*V[37]*
 V[9]));
C[88]=+S[6]*(V[9]*(V[9]*(V[9]*(V[9]*(V[37]*(12*V[37]-24*V[38])+12*S[0])+
 V[11]*(28*(S[1]-S[0])))+S[2]*(V[37]*(-40*V[38]-12*V[37])-12*S[0]))+S[3]*(
 28*(S[0]-S[1]))));
C[87]=+S[6]*(V[9]*(V[9]*(V[37]*(48*V[38]-24*V[37])-24*S[0])+V[11]*(88*(S[0]-
 S[1]))));
C[86]=+V[9]*(V[9]*(V[9]*(V[9]*(V[37]*(8*V[37]-16*V[38])+8*S[0])+V[11]*(24*(
 S[1]-S[0])))+S[2]*(V[37]*(16*V[38]-8*V[37])-8*S[0]))+S[3]*(24*(S[0]-
 S[1])));
C[85]=+V[9]*(16*(S[1]*(-V[11]-V[9])+S[0]*(V[11]-V[9]))+32*V[38]*V[37]*V[9]);
C[84]=+V[9]*(V[9]*(V[9]*(V[9]*(V[37]*(12*V[37]-24*V[38])+12*S[0])+V[11]*(28*
 (S[1]-S[0])))+S[2]*(V[37]*(-40*V[38]-12*V[37])-12*S[0]))+S[3]*(28*(S[0]-
 S[1])));
C[83]=+V[9]*(V[9]*(V[37]*(48*V[38]-24*V[37])-24*S[0])+V[11]*(88*(S[0]-
 S[1])));
C[82]=+S[6]*(V[9]*(V[9]*(V[37]*(128*V[38]-64*V[37])-64*S[0])+V[11]*(144*(
 S[0]-S[1])))+S[2]*(V[37]*(96*V[38]+16*V[37])+16*S[0]));
C[81]=+S[6]*(V[9]*(V[9]*(V[37]*(88*V[38]-44*V[37])-44*S[0])+V[11]*(40*(S[0]-
 S[1])))+S[2]*(V[37]*(36*V[37]-232*V[38])+36*S[0]));
C[80]=+V[9]*(V[9]*(V[37]*(128*V[38]-64*V[37])-64*S[0])+V[11]*(144*(S[0]-
 S[1])))+S[2]*(V[37]*(96*V[38]+16*V[37])+16*S[0]);
C[79]=+V[9]*(V[9]*(V[37]*(88*V[38]-44*V[37])-44*S[0])+V[11]*(40*(S[0]-
 S[1])))+S[2]*(V[37]*(36*V[37]-232*V[38])+36*S[0]);
C[78]=+S[6]*(V[37]*(S[5]*(128*V[38]-64*V[37])+S[2]*(128*V[38]+64*V[37]))+
 S[0]*(64*(S[2]-S[5])));
C[77]=+S[6]*(V[37]*(S[5]*(160*V[38]-80*V[37])+S[2]*(80*V[37]-32*V[38]))+
 S[0]*(80*(S[2]-S[5])));
C[76]=+V[37]*(S[5]*(128*V[38]-64*V[37])+S[2]*(128*V[38]+64*V[37]))+S[0]*(64*
 (S[2]-S[5]));
C[75]=+V[37]*(S[5]*(160*V[38]-80*V[37])+S[2]*(80*V[37]-32*V[38]))+S[0]*(80*(
 S[2]-S[5]));
C[74]=+S[6]*(V[9]*(V[9]*(V[37]*(20*V[37]-40*V[38])+20*S[0])+V[11]*(64*(S[1]-
 S[0])))+S[2]*(V[37]*(8*V[38]+44*V[37])+44*S[0]));
C[73]=+S[6]*(V[9]*(V[9]*(V[37]*(32*V[38]-16*V[37])-16*S[0])+V[11]*(40*(S[0]-
 S[1])))+S[2]*(V[37]*(48*V[38]+40*V[37])+40*S[0]));
C[72]=+V[9]*(V[9]*(V[37]*(20*V[37]-40*V[38])+20*S[0])+V[11]*(64*(S[1]-
 S[0])))+S[2]*(V[37]*(8*V[38]+44*V[37])+44*S[0]);
C[71]=+V[9]*(V[9]*(V[37]*(32*V[38]-16*V[37])-16*S[0])+V[11]*(40*(S[0]-
 S[1])))+S[2]*(V[37]*(48*V[38]+40*V[37])+40*S[0]);
C[70]=+S[6]*(V[37]*(S[5]*(32*V[38]-16*V[37])+S[2]*(224*V[38]+16*V[37]))+
 S[0]*(16*(S[2]-S[5])));
C[69]=+S[6]*(V[37]*(S[5]*(80*V[38]-40*V[37])+S[2]*(48*V[38]+40*V[37]))+S[0]*
 (40*(S[2]-S[5])));
C[68]=+S[6]*(V[37]*(56*V[37]-112*V[38])+56*S[0]);
C[67]=+V[37]*(S[5]*(32*V[38]-16*V[37])+S[2]*(224*V[38]+16*V[37]))+S[0]*(16*(
 S[2]-S[5]));
C[66]=+V[37]*(40*V[37]-80*V[38])+40*S[0];
C[65]=+V[37]*(S[5]*(80*V[38]-40*V[37])+S[2]*(48*V[38]+40*V[37]))+S[0]*(40*(
 S[2]-S[5]));
C[64]=+V[37]*(56*V[37]-112*V[38])+56*S[0];
C[63]=+V[37]*(32*V[37]-64*V[38])+32*S[0];
C[62]=+S[6]*(V[37]*(S[5]*(16*V[38]-8*V[37])+S[2]*(8*V[37]-16*V[38]))+S[0]*(
 8*(S[2]-S[5])));
C[61]=+V[37]*(S[5]*(16*V[38]-8*V[37])+S[2]*(8*V[37]-16*V[38]))+S[0]*(8*(
 S[2]-S[5]));
C[60]=+S[6]*(V[37]*(48*V[37]-96*V[38])+48*S[0]);
C[59]=+V[37]*(48*V[37]-96*V[38])+48*S[0];
C[58]=+S[6]*(V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[0])+V[11]*(32*(S[1]-
 S[0])))+S[2]*(V[37]*(56*V[38]+4*V[37])+4*S[0]));
C[57]=+S[6]*(V[9]*(V[9]*(V[37]*(64*V[38]-32*V[37])-32*S[0])+V[11]*(96*(S[0]-
 S[1])))-64*V[38]*V[37]*S[2]);
C[56]=+S[6]*(V[37]*(224*V[37]-448*V[38])+224*S[0]);
C[55]=+S[6]*(V[37]*(128*V[37]-256*V[38])+128*S[0]);
C[54]=+S[6]*(V[9]*(16*(S[1]*(V[11]+V[9])+S[0]*(V[9]-V[11]))-32*V[38]*V[37]*
 V[9])+S[2]*(32*(V[37]*(V[37]-V[38])+S[0])));
C[53]=+S[6]*(V[37]*(80*V[37]-160*V[38])+80*S[0]);
C[52]=+S[6]*(V[37]*(192*V[37]-384*V[38])+192*S[0]);
C[51]=+V[9]*(V[9]*(V[37]*(8*V[38]-4*V[37])-4*S[0])+V[11]*(32*(S[1]-S[0])))+
 S[2]*(V[37]*(56*V[38]+4*V[37])+4*S[0]);
C[50]=+V[9]*(V[9]*(V[37]*(64*V[38]-32*V[37])-32*S[0])+V[11]*(96*(S[0]-
 S[1])))-64*V[38]*V[37]*S[2];
C[49]=+V[37]*(8*V[37]-16*V[38])+8*S[0];
C[48]=+V[37]*(224*V[37]-448*V[38])+224*S[0];
C[47]=+V[37]*(128*V[37]-256*V[38])+128*S[0];
C[46]=+V[9]*(16*(S[1]*(V[11]+V[9])+S[0]*(V[9]-V[11]))-32*V[38]*V[37]*V[9])+
 S[2]*(32*(V[37]*(V[37]-V[38])+S[0]));
C[45]=+V[37]*(24*V[37]-48*V[38])+24*S[0];
C[44]=+V[37]*(80*V[37]-160*V[38])+80*S[0];
C[43]=+V[37]*(192*V[37]-384*V[38])+192*S[0];
C[42]=+V[37]*(16*V[37]-32*V[38])+16*S[0];
C[41]=+V[37]*(64*V[37]-128*V[38])+64*S[0];
C[40]=+S[6]*(V[9]*(V[9]*(V[9]*(V[9]*(V[37]*(4*V[37]-8*V[38])+4*S[0])+V[11]*(
 12*(S[1]-S[0])))+S[2]*(V[37]*(8*V[38]-4*V[37])-4*S[0]))+S[3]*(12*(S[0]-
 S[1]))));
C[39]=+S[6]*(V[9]*(8*(S[1]*(-V[11]-V[9])+S[0]*(V[11]-V[9]))+16*V[38]*V[37]*
 V[9]));
C[38]=+S[6]*(V[9]*(V[9]*(V[9]*(V[9]*(V[37]*(6*V[37]-12*V[38])+6*S[0])+V[11]*
 (14*(S[1]-S[0])))+S[2]*(V[37]*(-20*V[38]-6*V[37])-6*S[0]))+S[3]*(14*(S[0]-
 S[1]))));
C[37]=+S[6]*(V[9]*(V[9]*(V[37]*(24*V[38]-12*V[37])-12*S[0])+V[11]*(44*(S[0]-
 S[1]))));
C[36]=+S[6]*(V[9]*(V[9]*(V[37]*(64*V[38]-32*V[37])-32*S[0])+V[11]*(72*(S[0]-
 S[1])))+S[2]*(V[37]*(48*V[38]+8*V[37])+8*S[0]));
C[35]=+S[6]*(V[9]*(V[9]*(V[37]*(44*V[38]-22*V[37])-22*S[0])+V[11]*(20*(S[0]-
 S[1])))+S[2]*(V[37]*(18*V[37]-116*V[38])+18*S[0]));
C[34]=+S[6]*(V[37]*(S[5]*(64*V[38]-32*V[37])+S[2]*(64*V[38]+32*V[37]))+S[0]*
 (32*(S[2]-S[5])));
C[33]=+S[6]*(V[37]*(S[5]*(80*V[38]-40*V[37])+S[2]*(40*V[37]-16*V[38]))+S[0]*
 (40*(S[2]-S[5])));
C[32]=+S[6]*(V[9]*(V[9]*(V[37]*(10*V[37]-20*V[38])+10*S[0])+V[11]*(32*(S[1]-
 S[0])))+S[2]*(V[37]*(4*V[38]+22*V[37])+22*S[0]));
C[31]=+S[6]*(V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[0])+V[11]*(20*(S[0]-
 S[1])))+S[2]*(V[37]*(24*V[38]+20*V[37])+20*S[0]));
C[30]=+S[6]*(V[37]*(S[5]*(16*V[38]-8*V[37])+S[2]*(112*V[38]+8*V[37]))+S[0]*(
 8*(S[2]-S[5])));
C[29]=+S[6]*(V[37]*(20*V[37]-40*V[38])+20*S[0]);
C[28]=+S[6]*(V[37]*(S[5]*(40*V[38]-20*V[37])+S[2]*(24*V[38]+20*V[37]))+S[0]*
 (20*(S[2]-S[5])));
C[27]=+S[6]*(V[37]*(28*V[37]-56*V[38])+28*S[0]);
C[26]=+S[6]*(V[37]*(16*V[37]-32*V[38])+16*S[0]);
C[25]=+S[6]*(V[37]*(S[5]*(8*V[38]-4*V[37])+S[2]*(4*V[37]-8*V[38]))+S[0]*(4*(
 S[2]-S[5])));
C[24]=+S[6]*(V[37]*(24*V[37]-48*V[38])+24*S[0]);
C[23]=+S[4]*(V[9]*(V[9]*(V[37]*(2*V[38]-V[37])-S[0])+V[11]*(8*(S[1]-S[0])))+
 S[2]*(V[37]*(14*V[38]+V[37])+S[0]));
C[22]=+S[6]*(V[9]*(V[9]*(V[37]*(4*V[38]-2*V[37])-2*S[0])+V[11]*(16*(S[1]-
 S[0])))+S[2]*(V[37]*(28*V[38]+2*V[37])+2*S[0]));
C[21]=+S[4]*(V[9]*(V[9]*(V[37]*(16*V[38]-8*V[37])-8*S[0])+V[11]*(24*(S[0]-
 S[1])))-16*V[38]*V[37]*S[2]);
C[20]=+S[4]*(V[37]*(2*V[37]-4*V[38])+2*S[0]);
C[19]=+S[6]*(V[9]*(V[9]*(V[37]*(32*V[38]-16*V[37])-16*S[0])+V[11]*(48*(S[0]-
 S[1])))-32*V[38]*V[37]*S[2]);
C[18]=+S[6]*(V[37]*(4*V[37]-8*V[38])+4*S[0]);
C[17]=+S[4]*(V[37]*(56*V[37]-112*V[38])+56*S[0]);
C[16]=+S[6]*(V[37]*(112*V[37]-224*V[38])+112*S[0]);
C[15]=+S[4]*(V[37]*(32*V[37]-64*V[38])+32*S[0]);
C[14]=+S[6]*(V[37]*(64*V[37]-128*V[38])+64*S[0]);
C[13]=+S[4]*(V[9]*(4*(S[1]*(V[11]+V[9])+S[0]*(V[9]-V[11]))-8*V[38]*V[37]*
 V[9])+S[2]*(8*(V[37]*(V[37]-V[38])+S[0])));
C[12]=+S[4]*(V[37]*(6*V[37]-12*V[38])+6*S[0]);
C[11]=+S[6]*(V[9]*(8*(S[1]*(V[11]+V[9])+S[0]*(V[9]-V[11]))-16*V[38]*V[37]*
 V[9])+S[2]*(16*(V[37]*(V[37]-V[38])+S[0])));
C[10]=+S[6]*(V[37]*(12*V[37]-24*V[38])+12*S[0]);
C[9]=+S[4]*(V[37]*(20*V[37]-40*V[38])+20*S[0]);
C[8]=+S[6]*(V[37]*(40*V[37]-80*V[38])+40*S[0]);
C[7]=+S[4]*(V[37]*(48*V[37]-96*V[38])+48*S[0]);
C[6]=+S[6]*(V[37]*(96*V[37]-192*V[38])+96*S[0]);
C[5]=+S[4]*(V[37]*(4*V[37]-8*V[38])+4*S[0]);
C[4]=+S[6]*(V[37]*(8*V[37]-16*V[38])+8*S[0]);
C[3]=+S[4]*(V[37]*(16*V[37]-32*V[38])+16*S[0]);
C[2]=+S[6]*(V[37]*(32*V[37]-64*V[38])+32*S[0]);
S[7]=V[14]*V[14];
S[8]=V[2]*V[2]*V[2]*V[2];
C[1]=+16*S[7]*S[8];
S[9]=V[52]*V[52];
S[10]=V[16]*V[16];
S[11]=V[1]*V[1]*V[1]*V[1];
C[0]=+3*S[9]*S[10]*S[11];
}
REAL F775_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                                     !  C                 G          
                                    /!==<==============@---1-        
                                    |!  P5             |  P1         
                                    |!                 |             
      G                       n2    |!  n2             |             
    -1---\                 /==>=====+!==>==\          t|-PA          
      P1 |                 |  P3    |!  P3 |           |             
         |                 |        |!     |           |             
      G  |  G     t     W+ |  E2    |!  E2 |  W+    t  |  G          
    -2---@-3---@==>==@-4>--@==<=====+!==<==@-->5-@==>==@---2-        
      P2    P7 |  P8 |  P9    P4    |!  P4   -PC | -PB    P2         
               |     |              |!           |                   
               |     |        b     |!  b        |                   
               |     \========>=====+!==>========/                   
               |              P6    |!  P6                           
               |                    |!                               
               |              C     |!                               
               \==============<=====/!                               
                              P5     !                               
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[108];REAL S[4];REAL tmp[5];                                   
     
if(CalcConst) C775(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[1];
S[2]=V[53]*V[53];
tmp[0]=+DP[7]*(DP[0]*(C[18]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+
 DP[10]*(S[2]-DP[5]))+C[10]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+
 DP[14]*(S[2]-DP[5]))-C[20]*DP[10]-C[12]*DP[14])+DP[7]*(C[10]*(DP[1]*(-
 DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[4]*(DP[8]*(-
 DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[12]*DP[10]+
 C[5]*DP[14])+DP[12]*(C[32]*(-DP[1]-DP[3])+C[31]*(-DP[2]-DP[4])+C[11]*(
 DP[8]+DP[9]))+DP[13]*(C[32]*(-DP[1]-DP[3])+C[31]*(-DP[2]-DP[4])+C[11]*(
 DP[8]+DP[9]))+S[2]*(C[11]*DP[14]-C[32]*DP[10]-C[31]*DP[11])+DP[5]*(C[32]*
 DP[10]+C[31]*DP[11]-C[11]*DP[14])+C[103]*DP[10]+C[94]*DP[11]-C[13]*DP[14])+
 DP[0]*(DP[12]*(DP[0]*(C[18]*(-DP[8]-DP[9]))+C[39]*(-DP[1]-DP[3])+C[37]*(
 DP[2]+DP[4])+C[22]*(DP[8]+DP[9]))+DP[13]*(DP[0]*(C[18]*(-DP[8]-DP[9]))+
 C[39]*(-DP[1]-DP[3])+C[37]*(DP[2]+DP[4])+C[22]*(DP[8]+DP[9]))+DP[14]*(
 DP[0]*(C[18]*(DP[5]-S[2])+C[20])+C[22]*(S[2]-DP[5])-C[23])+DP[10]*(C[39]*(
 DP[5]-S[2])+C[106])+DP[11]*(C[37]*(S[2]-DP[5])-C[98]))+C[40]*(DP[1]*(
 DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[2]-DP[5]))+C[38]*(DP[2]*(-
 DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[99]*DP[11]-
 C[107]*DP[10];
tmp[1]=+DP[12]*(DP[6]*(S[2]*(DP[3]*(C[80]-C[42]*DP[0]-C[41]*DP[6]-C[66]*
 DP[7])+DP[4]*(C[64]*(DP[7]-DP[0])+C[79]+C[49]*DP[6])+DP[9]*(C[48]*DP[6]-
 C[50]-C[49]*DP[0]+C[44]*DP[7]))+DP[0]*(C[4]*(DP[3]+DP[8])+C[26]*DP[1]+
 C[68]*DP[2]+C[27]*DP[4]+C[18]*DP[9])+DP[6]*(C[14]*DP[1]-C[4]*DP[2]+C[2]*
 DP[3]-C[18]*DP[4]-C[56]*DP[8]-C[16]*DP[9])+DP[7]*(C[8]*(DP[1]-DP[9])+C[29]*
 DP[3]-C[68]*DP[2]-C[27]*DP[4]-C[53]*DP[8])+C[57]*DP[8]-C[82]*DP[1]-C[81]*
 DP[2]-C[36]*DP[3]-C[35]*DP[4]+C[19]*DP[9])+DP[7]*(S[2]*(DP[3]*(C[49]*DP[0]-
 C[72]-C[45]*DP[7])+DP[9]*(C[46]+C[45]*DP[0]-C[42]*DP[7])-C[71]*DP[4])+
 DP[0]*(-C[4]*DP[1]-C[18]*DP[3]-C[24]*DP[8]-C[10]*DP[9])+DP[7]*(C[24]*DP[1]+
 C[10]*DP[3]+C[26]*DP[8]+C[4]*DP[9])+C[74]*DP[1]+C[73]*DP[2]+C[32]*DP[3]+
 C[31]*DP[4]-C[54]*DP[8]-C[11]*DP[9])+DP[0]*(S[2]*(DP[9]*(C[51]-C[49]*
 DP[0])+C[83]*DP[4]-C[85]*DP[3])+DP[0]*(C[4]*DP[8]+C[18]*DP[9])+C[89]*DP[1]-
 C[87]*DP[2]+C[39]*DP[3]-C[37]*DP[4]-C[58]*DP[8]-C[22]*DP[9])+S[2]*(C[86]*
 DP[3]-C[84]*DP[4])+C[88]*DP[2]-C[90]*DP[1]-C[40]*DP[3]+C[38]*DP[4]);
tmp[2]=+DP[5]*(DP[6]*(DP[12]*(DP[0]*(C[4]*(-DP[1]-DP[3])+C[27]*(-DP[2]-
 DP[4])+C[18]*(-DP[8]-DP[9]))+DP[6]*(C[2]*(-DP[1]-DP[3])+C[18]*(DP[2]+
 DP[4])+C[16]*(DP[8]+DP[9]))+DP[7]*(C[29]*(-DP[1]-DP[3])+C[27]*(DP[2]+
 DP[4])+C[8]*(DP[8]+DP[9]))+C[36]*(DP[1]+DP[3])+C[35]*(DP[2]+DP[4])+C[19]*(-
 DP[8]-DP[9]))+DP[13]*(DP[0]*(C[4]*(-DP[1]-DP[3])+C[27]*(-DP[2]-DP[4])+
 C[18]*(-DP[8]-DP[9]))+DP[6]*(C[2]*(-DP[1]-DP[3])+C[18]*(DP[2]+DP[4])+C[16]*
 (DP[8]+DP[9]))+DP[7]*(C[29]*(-DP[1]-DP[3])+C[27]*(DP[2]+DP[4])+C[8]*(DP[8]+
 DP[9]))+C[36]*(DP[1]+DP[3])+C[35]*(DP[2]+DP[4])+C[19]*(-DP[8]-DP[9]))+S[2]*
 (DP[10]*(C[36]-C[4]*DP[0]-C[2]*DP[6]-C[29]*DP[7])+DP[11]*(C[27]*(DP[7]-
 DP[0])+C[35]+C[18]*DP[6])+DP[14]*(C[16]*DP[6]-C[19]-C[18]*DP[0]+C[8]*
 DP[7]))+DP[5]*(DP[10]*(C[4]*DP[0]-C[36]+C[2]*DP[6]+C[29]*DP[7])+DP[11]*(
 C[27]*(DP[0]-DP[7])-C[35]-C[18]*DP[6])+DP[14]*(C[19]+C[18]*DP[0]-C[16]*
 DP[6]-C[8]*DP[7]))+DP[10]*(C[5]*DP[0]-C[105]+C[3]*DP[6]+C[101]*DP[7])+
 DP[11]*(C[92]*(DP[0]-DP[7])-C[97]-C[20]*DP[6])+DP[14]*(C[21]+C[20]*DP[0]-
 C[17]*DP[6]-C[9]*DP[7]))+tmp[0]);
tmp[3]=+DP[7]*(DP[5]*(DP[6]*(DP[12]*(C[26]*(DP[1]+DP[3])+C[24]*(-DP[2]-
 DP[4])+C[6]*(-DP[8]-DP[9]))+DP[13]*(C[26]*(DP[1]+DP[3])+C[24]*(-DP[2]-
 DP[4])+C[6]*(-DP[8]-DP[9]))+S[2]*(C[26]*DP[10]-C[24]*DP[11]-C[6]*DP[14])+
 DP[5]*(C[24]*DP[11]-C[26]*DP[10]+C[6]*DP[14])+C[91]*DP[11]-C[95]*DP[10]+
 C[7]*DP[14])+DP[7]*(DP[12]*(C[24]*(DP[1]+DP[3])+C[4]*(-DP[2]-DP[4])+C[2]*(-
 DP[8]-DP[9]))+DP[13]*(C[24]*(DP[1]+DP[3])+C[4]*(-DP[2]-DP[4])+C[2]*(-DP[8]-
 DP[9]))+S[2]*(C[24]*DP[10]-C[4]*DP[11]-C[2]*DP[14])+DP[5]*(C[4]*DP[11]-
 C[24]*DP[10]+C[2]*DP[14])+C[5]*DP[11]-C[91]*DP[10]+C[3]*DP[14])+C[30]*(
 DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[28]*(
 DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[102]*
 DP[10]+C[93]*DP[11])+S[2]*(DP[12]*(DP[6]*(S[2]*(C[63]*DP[3]-C[59]*DP[4]-
 C[43]*DP[9])+C[60]*DP[2]-C[2]*DP[1]-C[26]*DP[3]+C[24]*DP[4]+C[52]*DP[8]+
 C[6]*DP[9])+DP[7]*(S[2]*(C[59]*DP[3]-C[42]*DP[4]-C[41]*DP[9])+C[26]*DP[2]-
 C[60]*DP[1]-C[24]*DP[3]+C[4]*DP[4]+C[14]*DP[8]+C[2]*DP[9])+S[2]*(-C[67]*
 DP[3]-C[65]*DP[4])+C[70]*DP[1]+C[69]*DP[2]+C[30]*DP[3]+C[28]*DP[4])+DP[13]*
 (DP[1]*(C[30]-C[26]*DP[6]-C[24]*DP[7])+DP[2]*(C[28]+C[24]*DP[6]+C[4]*
 DP[7])+DP[8]*(C[6]*DP[6]+C[2]*DP[7]))));
S[3]=DP[7]*DP[7];
tmp[4]=+DP[6]*(DP[6]*(DP[5]*(DP[6]*(C[26]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-
 DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[14]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-
 DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[95]*DP[11]+C[15]*DP[14])+C[34]*(
 DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[33]*(
 DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[104]*
 DP[10]+C[96]*DP[11])+S[2]*(DP[12]*(DP[6]*(S[2]*(-C[63]*DP[4]-C[47]*DP[9])+
 C[2]*DP[2]+C[26]*DP[4]+C[55]*DP[8]+C[14]*DP[9])+S[2]*(-C[76]*DP[3]-C[75]*
 DP[4])+C[78]*DP[1]+C[77]*DP[2]+C[34]*DP[3]+C[33]*DP[4])+DP[13]*(DP[2]*(
 C[33]+C[26]*DP[6])+C[34]*DP[1]+C[14]*DP[8]*DP[6])))+tmp[3])+S[3]*(DP[5]*(
 DP[7]*(C[4]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[2]-
 DP[5]))-C[5]*DP[10])+C[25]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+
 DP[10]*(S[2]-DP[5]))-C[100]*DP[10])+S[2]*(DP[12]*(DP[3]*(S[2]*(C[61]+C[42]*
 DP[7])-C[25]-C[4]*DP[7])+DP[1]*(-C[62]-C[26]*DP[7]))+DP[1]*(DP[13]*(-C[25]-
 C[4]*DP[7]))));
R=+DP[0]*(S[2]*(DP[13]*(DP[6]*(DP[1]*(C[4]*DP[0]-C[36]+C[2]*DP[6]+C[29]*
 DP[7])+DP[2]*(C[27]*(DP[0]-DP[7])-C[35]-C[18]*DP[6])+DP[8]*(C[19]+C[18]*
 DP[0]-C[16]*DP[6]-C[8]*DP[7]))+DP[7]*(DP[1]*(C[32]-C[18]*DP[0]+C[10]*
 DP[7])+DP[8]*(C[4]*DP[7]-C[11]-C[10]*DP[0])+C[31]*DP[2])+DP[0]*(DP[8]*(
 C[18]*DP[0]-C[22])+C[39]*DP[1]-C[37]*DP[2])+C[38]*DP[2]-C[40]*DP[1])+
 tmp[1])+tmp[2])+tmp[4];
R*=(N/D)*Q1[3]*Q2[1]*Q2[2]*Q1[5];
 if(cb_coeff_out)
 {
  cb_coeff_out[2] += (R*9)/(8);
 }
 return R;
}
