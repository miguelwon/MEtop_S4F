/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F828_out;
static void C828(REAL * C)
{
REAL* V=va_out;
REAL S[11];                                                                 
     
S[0]=V[38]*V[38];
S[1]=V[37]*V[37];
S[2]=V[8]*V[8]*V[8]*V[8];
C[32]=+S[2]*(V[9]*(V[11]*(V[37]*(12*V[38]+6*V[37])+6*S[0])+V[9]*(2*(S[1]-
 S[0]))));
S[3]=V[11]*V[11];
C[31]=+S[2]*(V[9]*(V[11]*(12*(V[37]*(V[37]-V[38])+S[0]))+V[9]*(6*(S[1]-
 S[0])))+S[3]*(18*(S[0]-S[1])));
C[30]=+S[2]*(16*(S[0]-S[1]));
S[4]=V[9]*V[9]*V[9];
C[29]=+S[2]*(V[9]*(V[11]*(V[9]*(V[9]*(V[37]*(-10*V[38]-3*V[37])-3*S[0])+
 V[11]*(S[1]-S[0]))+S[3]*(V[37]*(3*V[37]-6*V[38])+3*S[0]))+S[4]*(S[0]-
 S[1])));
C[28]=+S[2]*(V[9]*(V[11]*(V[37]*(4*V[38]+18*V[37])+18*S[0])+V[9]*(4*(S[1]-
 S[0])))+S[3]*(14*(S[0]-S[1])));
S[5]=V[8]*V[8];
C[27]=+S[5]*(V[9]*(V[11]*(V[37]*(48*V[38]+24*V[37])+24*S[0])+V[9]*(8*(S[1]-
 S[0]))));
C[26]=+S[5]*(V[9]*(V[11]*(V[9]*(V[9]*(V[37]*(-40*V[38]-12*V[37])-12*S[0])+
 V[11]*(4*(S[1]-S[0])))+S[3]*(V[37]*(12*V[37]-24*V[38])+12*S[0]))+S[4]*(4*(
 S[0]-S[1]))));
C[25]=+V[9]*(V[11]*(V[37]*(48*V[38]+24*V[37])+24*S[0])+V[9]*(8*(S[1]-
 S[0])));
C[24]=+V[9]*(V[11]*(V[9]*(V[9]*(V[37]*(-40*V[38]-12*V[37])-12*S[0])+V[11]*(
 4*(S[1]-S[0])))+S[3]*(V[37]*(12*V[37]-24*V[38])+12*S[0]))+S[4]*(4*(S[0]-
 S[1])));
C[23]=+S[5]*(V[9]*(V[11]*(48*(V[37]*(V[37]-V[38])+S[0]))+V[9]*(24*(S[1]-
 S[0])))+S[3]*(72*(S[0]-S[1])));
C[22]=+S[5]*(V[9]*(V[11]*(V[37]*(16*V[38]+72*V[37])+72*S[0])+V[9]*(16*(S[1]-
 S[0])))+S[3]*(56*(S[0]-S[1])));
C[21]=+V[9]*(V[11]*(48*(V[37]*(V[37]-V[38])+S[0]))+V[9]*(24*(S[1]-S[0])))+
 S[3]*(72*(S[0]-S[1]));
C[20]=+V[9]*(V[11]*(V[37]*(16*V[38]+72*V[37])+72*S[0])+V[9]*(16*(S[1]-
 S[0])))+S[3]*(56*(S[0]-S[1]));
C[19]=+S[5]*(64*(S[0]-S[1]));
C[18]=+64*(S[0]-S[1]);
C[17]=+S[5]*(V[9]*(V[11]*(V[37]*(64*V[38]+24*V[37])+24*S[0])+V[9]*(8*(S[1]-
 S[0]))));
C[16]=+S[5]*(V[9]*(V[11]*(V[37]*(48*V[37]-64*V[38])+48*S[0])+V[9]*(8*(S[1]-
 S[0])))+S[3]*(56*(S[0]-S[1])));
C[15]=+V[9]*(V[11]*(V[37]*(64*V[38]+24*V[37])+24*S[0])+V[9]*(8*(S[1]-
 S[0])));
C[14]=+V[9]*(V[11]*(V[37]*(48*V[37]-64*V[38])+48*S[0])+V[9]*(8*(S[1]-
 S[0])))+S[3]*(56*(S[0]-S[1]));
C[13]=+32*(S[0]-S[1]);
C[12]=+S[5]*(V[9]*(V[11]*(V[37]*(24*V[38]+12*V[37])+12*S[0])+V[9]*(4*(S[1]-
 S[0]))));
C[11]=+S[5]*(V[9]*(V[11]*(V[9]*(V[9]*(V[37]*(-20*V[38]-6*V[37])-6*S[0])+
 V[11]*(2*(S[1]-S[0])))+S[3]*(V[37]*(6*V[37]-12*V[38])+6*S[0]))+S[4]*(2*(
 S[0]-S[1]))));
C[10]=+S[5]*(V[9]*(V[11]*(24*(V[37]*(V[37]-V[38])+S[0]))+V[9]*(12*(S[1]-
 S[0])))+S[3]*(36*(S[0]-S[1])));
C[9]=+S[5]*(V[9]*(V[11]*(V[37]*(8*V[38]+36*V[37])+36*S[0])+V[9]*(8*(S[1]-
 S[0])))+S[3]*(28*(S[0]-S[1])));
C[8]=+S[5]*(32*(S[0]-S[1]));
C[7]=+S[2]*(V[9]*(V[11]*(V[37]*(16*V[38]+6*V[37])+6*S[0])+V[9]*(2*(S[1]-
 S[0]))));
C[6]=+S[5]*(V[9]*(V[11]*(V[37]*(32*V[38]+12*V[37])+12*S[0])+V[9]*(4*(S[1]-
 S[0]))));
C[5]=+S[2]*(V[9]*(V[11]*(V[37]*(12*V[37]-16*V[38])+12*S[0])+V[9]*(2*(S[1]-
 S[0])))+S[3]*(14*(S[0]-S[1])));
C[4]=+S[5]*(V[9]*(V[11]*(V[37]*(24*V[37]-32*V[38])+24*S[0])+V[9]*(4*(S[1]-
 S[0])))+S[3]*(28*(S[0]-S[1])));
C[3]=+S[2]*(8*(S[0]-S[1]));
C[2]=+S[5]*(16*(S[0]-S[1]));
S[6]=V[14]*V[14];
S[7]=V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[6]*S[7];
S[8]=V[52]*V[52];
S[9]=V[16]*V[16];
S[10]=V[1]*V[1]*V[1]*V[1];
C[0]=+3*S[8]*S[9]*S[10];
}
REAL F828_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                        N2     !  N2                      G          
                     /==<======!==<==\                 /---1-        
                     |  P3     !  P3 |                 |  P1         
                     |         !     |                 |             
      G     t     W+ |  e2     !  e2 |  W+    t    ~03 |  G          
    -1---@==<==@-3<--@==>======!==>==@--<5-@==<==@---4-@---2-        
      P1 |  P8 |  P9    P4     !  P4   -PC | -PB | -PA    P2         
         |     |               !           |     |                   
         |     |        B      !  B        |     |                   
        t|P7   \========<======!==<========/     |                   
         |              P6     !  P6             |                   
         |                     !                 |                   
      G  |              c      !  c              |                   
    -2---@==============>======!==>==============/                   
      P2                P5     !  P5                                 
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[33];REAL S[3];REAL tmp[1];                                    
     
if(CalcConst) C828(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[1];
S[2]=V[53]*V[53];
tmp[0]=+DP[7]*(DP[5]*(C[2]*(DP[7]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(
 DP[2]+DP[4]-DP[8]-DP[9])+S[2]*(DP[11]-DP[14])+DP[5]*(DP[14]-DP[11]))+DP[0]*
 (DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+DP[6]*(
 DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[2]-DP[5])))+DP[7]*(
 C[8]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[2]-DP[5]))+
 C[3]*(DP[14]-DP[11])-C[30]*DP[10])+DP[12]*(C[10]*(DP[1]+DP[3])+C[9]*(DP[2]+
 DP[4])+C[4]*(-DP[8]-DP[9]))+DP[13]*(C[10]*(DP[1]+DP[3])+C[9]*(DP[2]+DP[4])+
 C[4]*(-DP[8]-DP[9]))+DP[10]*(C[10]*(S[2]-DP[5])+C[3]*(DP[0]-DP[6])-C[31])+
 DP[11]*(C[9]*(S[2]-DP[5])-C[28])+DP[14]*(C[4]*(DP[5]-S[2])+C[5]))+S[2]*(
 DP[12]*(DP[7]*(S[2]*(C[13]*(DP[4]-DP[9])+C[18]*DP[3])+C[8]*(DP[8]-DP[2]-
 DP[3])+C[2]*(DP[9]-DP[4])-C[19]*DP[1])+DP[3]*(S[2]*(C[13]*(DP[6]-DP[0])+
 C[21])+C[2]*(DP[0]-DP[6])-C[10])+DP[1]*(C[8]*(DP[0]-DP[6])-C[23])+S[2]*(
 C[20]*DP[4]-C[14]*DP[9])+C[16]*DP[8]-C[22]*DP[2]-C[9]*DP[4]+C[4]*DP[9])+
 DP[13]*(DP[1]*(C[2]*(DP[0]-DP[6])-C[10]-C[8]*DP[7])+DP[2]*(-C[9]-C[2]*
 DP[7])+DP[8]*(C[4]+C[2]*DP[7]))));
R=+DP[0]*(DP[5]*(DP[0]*(C[12]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+
 DP[10]*(S[2]-DP[5]))+C[6]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*(DP[5]-S[2]))+C[7]*DP[14]-C[32]*DP[10])+DP[6]*(C[6]*(DP[2]*(DP[12]+
 DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))-C[7]*DP[11])+C[11]*(
 DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))-C[29]*
 DP[11])+S[2]*(DP[12]*(DP[0]*(S[2]*(C[25]*DP[3]-C[15]*DP[9])+C[17]*DP[8]-
 C[27]*DP[1]-C[12]*DP[3]+C[6]*DP[9])+DP[4]*(S[2]*(C[24]+C[15]*DP[6])-C[11]-
 C[6]*DP[6])+DP[2]*(-C[26]-C[17]*DP[6]))+DP[13]*(DP[0]*(C[6]*DP[8]-C[12]*
 DP[1])+DP[2]*(-C[11]-C[6]*DP[6])))+tmp[0]);
R*=(N/D)*Q1[5]*Q2[1]*Q2[2]*Q1[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[2] += (R*-9)/(-8);
 }
 return R;
}
