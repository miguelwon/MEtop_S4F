/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F171_out;
static void C171(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[13]*V[13];
S[1]=V[10]*V[10]*V[10]*V[10];
S[2]=V[8]*V[8]*V[8]*V[8];
C[69]=+2*S[0]*S[1]*S[2];
S[3]=V[10]*V[10];
S[4]=V[8]*V[8];
C[68]=+S[4]*(S[3]*(S[0]*(4*(S[3]+S[4]))));
C[67]=+8*S[0]*S[1]*S[4];
C[66]=+S[3]*(S[0]*(8*(S[3]+S[4])));
C[65]=+16*S[0]*S[3];
C[64]=+4*S[0]*S[1]*S[4];
C[63]=+4*S[0]*S[3]*S[2];
C[62]=+S[4]*(S[3]*(8*(S[0]-S[4])));
C[61]=+8*S[2];
C[60]=+S[2]*(S[3]*(2*(S[0]-S[3])));
C[59]=+S[4]*(4*(S[3]*(S[0]-S[3]-S[4])+S[0]*S[4]));
C[58]=+S[4]*(S[3]*(4*(S[0]-S[4])));
C[57]=+16*S[0]*S[3]*S[4];
C[56]=+S[4]*(16*(S[0]-S[3]));
C[55]=+S[3]*(16*(S[0]-S[4]));
C[54]=+8*(S[3]*(S[0]-S[3]-S[4])+S[0]*S[4]);
C[53]=+16*(S[0]-S[3]);
C[52]=+S[3]*(8*(S[0]-S[4]));
C[51]=+S[4]*(8*(S[0]-S[3]));
C[50]=+S[2]*(S[3]*(2*(S[0]+S[3])));
C[49]=+S[4]*(S[3]*(4*(S[0]+S[4])));
C[48]=+2*S[0]*S[3]*S[2];
C[47]=+S[4]*(S[3]*(8*(S[0]+S[3])));
C[46]=+8*S[0]*S[3]*S[4];
C[45]=+S[3]*(8*(S[0]+S[3]));
C[44]=+S[3]*(8*(S[0]+S[4]));
C[43]=+8*S[0]*S[3];
C[42]=+S[4]*(S[3]*(4*(S[0]+S[3])));
C[41]=+4*S[0]*S[3]*S[4];
C[40]=+S[4]*(8*(S[3]-S[4]));
C[39]=+16*(S[3]-S[4]);
C[38]=+S[1]*(S[4]*(4*(S[0]-S[3])));
C[37]=+S[4]*(S[3]*(8*(S[0]-S[3])));
C[36]=+S[4]*(S[3]*(8*S[0]-16*S[3]));
C[35]=+48*S[3]*S[4];
C[34]=+16*S[1]*S[4];
C[33]=+32*S[4];
C[32]=+32*S[3]*S[4];
C[31]=+S[3]*(4*(S[3]*(S[0]-S[3]-S[4])+S[0]*S[4]));
C[30]=+S[3]*(8*(S[0]-S[3]));
C[29]=+S[3]*(8*(S[0]-S[4])-16*S[3]);
C[28]=+S[3]*(16*(S[3]+S[4]));
C[27]=+S[3]*(16*S[3]+24*S[4]);
C[26]=+48*S[3]+16*S[4];
C[25]=+S[3]*(16*S[3]+8*S[4]);
C[24]=+32*S[3]+16*S[4];
C[23]=+32*S[3];
C[22]=+16*S[3];
C[21]=+S[2]*(S[1]*(S[0]-S[3]));
C[20]=+S[4]*(S[3]*(2*(S[3]*(S[0]-S[3]-S[4])+S[0]*S[4])));
C[19]=+S[2]*(S[3]*(2*S[0]-4*S[3]));
C[18]=+S[4]*(S[3]*(4*(S[0]-S[4])-8*S[3]));
C[17]=+S[1]*(S[4]*(2*(S[0]-S[3])));
C[16]=+S[4]*(S[3]*(4*(S[0]-S[3])));
C[15]=+S[4]*(S[3]*(4*S[0]-8*S[3]));
C[14]=+S[4]*(S[3]*(8*(S[3]+S[4])));
C[13]=+S[4]*(S[3]*(8*S[3]+12*S[4]));
C[12]=+S[4]*(24*S[3]+8*S[4]);
C[11]=+24*S[3]*S[4];
C[10]=+4*S[1]*S[2];
C[9]=+S[4]*(S[3]*(8*S[3]+4*S[4]));
C[8]=+8*S[1]*S[4];
C[7]=+S[4]*(16*S[3]+8*S[4]);
C[6]=+8*S[3]*S[2];
C[5]=+16*S[4];
C[4]=+16*S[3]*S[4];
C[3]=+4*S[3]*S[2];
C[2]=+8*S[3]*S[4];
S[5]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[5];
S[6]=V[52]*V[52]*V[52]*V[52];
S[7]=V[45]*V[45];
S[8]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[6]*S[7]*S[8];
}
REAL F171_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   u                       n2     !  n2                      u       
 ==>==\                 /==>======!==>==\                 /==>==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   S  |  W+    t     W+ |  E2     !  E2 |  W+    t     W+ |  S       
 ==<==@-1>--@==>==@-2>--@==<======!==<==@-->4-@==>==@-->3-@==<==     
   P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB | -PA    P2      
            |     |               !           |     |                
            |     |        b      !  b        |     |                
            |     \========>======!==>========/     |                
            |              P5     !  P5             |                
            |                     !                 |                
            |              B      !  B              |                
            \==============<======!==<==============/                
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[70];REAL S[2];REAL tmp[5];                                    
     
if(CalcConst) C171(C);
N=-C[0];
S[0]=V[53]*V[53]*V[53]*V[53]*V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
tmp[0]=+DP[8]*(S[1]*(S[1]*(32*(DP[0]*(DP[13]-DP[3])+DP[11]*(DP[3]-DP[13])-
 DP[10]*DP[4])+C[23]*(DP[13]-DP[3])+C[53]*DP[4])+DP[0]*(C[33]*(DP[1]-
 DP[12])+C[5]*DP[3]+C[22]*DP[4]-C[26]*DP[13])+DP[11]*(C[33]*(DP[12]-DP[1])+
 C[39]*DP[3]-C[22]*DP[4]+C[24]*DP[13])+DP[10]*(C[33]*DP[2]-C[39]*DP[4]+
 C[23]*DP[13])+C[32]*(DP[1]-DP[12])-C[56]*DP[2]-C[55]*DP[3]-C[54]*DP[4]-
 C[28]*DP[13])+DP[5]*(C[5]*(DP[0]*(DP[12]-DP[1]-DP[3]+DP[13])+DP[11]*(DP[1]+
 DP[3]-DP[12]-DP[13])+DP[10]*(-DP[2]-DP[4]))+C[4]*(DP[12]-DP[1]-DP[3]+
 DP[13])+C[51]*(DP[2]+DP[4]))+DP[0]*(DP[13]*(C[23]*(DP[0]-DP[11])+C[27]-
 C[22]*DP[10])+C[43]*DP[3]-C[4]*DP[2]+C[52]*DP[4]+C[35]*DP[12])+DP[11]*(
 C[4]*(DP[2]-DP[1]-DP[13])+C[2]*(DP[4]-DP[3])-C[32]*DP[12])+DP[10]*(C[4]*(
 DP[2]-DP[13])+C[2]*DP[4]-C[32]*DP[12])+C[57]*DP[1]+C[37]*DP[2]+C[46]*DP[3]+
 C[16]*DP[4]+C[34]*DP[12]+C[8]*DP[13]);
tmp[1]=+DP[5]*(C[2]*(DP[11]*(DP[8]*(DP[1]-DP[2]+DP[3]-DP[4])+DP[9]*(DP[1]-
 DP[2]+DP[3]-DP[4])+DP[5]*(DP[7]-DP[6]))+DP[0]*(DP[2]*(DP[8]+DP[9])+DP[4]*(
 DP[8]+DP[9])-DP[7]*DP[5]-DP[14]*DP[10])+DP[10]*(DP[2]*(-DP[8]-DP[9])+DP[4]*
 (-DP[8]-DP[9])+DP[7]*DP[5]))+DP[8]*(DP[12]*(C[4]*(DP[10]+DP[11])-C[8]-
 C[11]*DP[0])+DP[13]*(C[4]*(DP[10]+DP[11])-C[8]-C[11]*DP[0])+C[46]*(-DP[1]-
 DP[3])+C[16]*(-DP[2]-DP[4]))+DP[9]*(DP[12]*(C[4]*(DP[10]+DP[11])-C[8]-
 C[11]*DP[0])+DP[13]*(C[4]*(DP[10]+DP[11])-C[8]-C[11]*DP[0])+C[46]*(-DP[1]-
 DP[3])+C[16]*(-DP[2]-DP[4]))+DP[14]*(DP[0]*(C[4]*(DP[0]-DP[11])+C[13]+
 C[11]*DP[5])+DP[5]*(C[4]*(-DP[10]-DP[11])+C[8])+C[6]*(-DP[10]-DP[11])+
 C[10])+DP[7]*(C[3]*(DP[10]+DP[11])+C[60]+C[58]*DP[0]+C[16]*DP[5])+DP[6]*(
 C[63]+C[41]*DP[0]+C[46]*DP[5]-C[3]*DP[11]))+DP[0]*(DP[8]*(DP[12]*(C[32]*(
 DP[11]-DP[0])+C[4]*DP[10]-C[34])+DP[13]*(C[4]*(DP[11]-DP[0])+C[2]*DP[10]-
 C[8])+C[46]*(-DP[1]-DP[2])+C[41]*(-DP[3]-DP[4]))+DP[9]*(DP[12]*(C[4]*(
 DP[11]-DP[0])+C[2]*DP[10]-C[8])+C[41]*(-DP[1]-DP[2])));
tmp[2]=+DP[8]*(S[1]*(DP[11]*(DP[13]*(C[22]*(-S[1]-DP[11])+C[25]+C[23]*
 DP[0])+DP[3]*(C[44]-C[22]*S[1])+C[4]*(DP[1]+DP[12])+C[43]*DP[4])+DP[0]*(
 DP[13]*(C[22]*(S[1]-DP[0])+C[29])+C[65]*(-DP[3]-DP[4])-C[4]*DP[12])+S[1]*(
 C[65]*(DP[3]+DP[4])-C[30]*DP[13])+C[57]*(-DP[1]-DP[2])+C[66]*(-DP[3]-
 DP[4])+C[37]*DP[12]+C[31]*DP[13])+DP[11]*(C[2]*(DP[5]*(-DP[1]-DP[3]-DP[12]-
 DP[13])+DP[13]*DP[11])+DP[12]*(C[4]*DP[11]-C[34]-C[32]*DP[0])+DP[13]*(-
 C[8]-C[4]*DP[0])+C[46]*(-DP[1]-DP[2])+C[41]*(-DP[3]-DP[4]))+DP[0]*(DP[12]*(
 C[4]*DP[0]-C[36]+C[2]*DP[5])+DP[13]*(C[2]*(DP[0]+DP[5])-C[15])+C[57]*(
 DP[1]+DP[2])+C[46]*(DP[3]+DP[4]))+DP[5]*(C[46]*(DP[1]+DP[2]+DP[3]+DP[4])+
 C[16]*(-DP[12]-DP[13]))+C[67]*(DP[1]+DP[2])+C[64]*(DP[3]+DP[4])-C[38]*
 DP[12]-C[17]*DP[13]);
tmp[3]=+DP[0]*(DP[5]*(C[2]*(DP[11]*(DP[9]*(-DP[1]-DP[3]-DP[12]-DP[13])+
 DP[14]*(DP[5]-S[1]-DP[11])+DP[6]*(DP[5]-S[1]))+DP[0]*(DP[14]*(S[1]-DP[0]-
 DP[5])+DP[9]*(DP[12]+DP[13])))+C[46]*(DP[9]*(DP[1]+DP[2]+DP[3]+DP[4])+
 DP[6]*(S[1]-DP[0]-DP[5])+DP[7]*(S[1]-DP[0]-DP[5]))+DP[14]*(DP[0]*(C[18]+
 C[4]*DP[11])+C[16]*(DP[5]-S[1])+C[20]+C[9]*DP[11])+DP[6]*(C[49]*DP[11]-
 C[68])+DP[7]*(C[41]*DP[11]-C[68])+DP[9]*(C[16]*(-DP[12]-DP[13])))+DP[9]*(
 DP[12]*(DP[0]*(C[2]*(DP[0]-S[1])-C[15]-C[4]*DP[11])+DP[11]*(C[2]*(S[1]+
 DP[11])-C[8])+C[16]*S[1]-C[17])+DP[1]*(S[1]*(C[2]*DP[11]-C[46])+C[64]+
 C[46]*DP[0]-C[41]*DP[11])+DP[2]*(C[46]*(DP[0]-S[1])+C[64]-C[41]*DP[11]))+
 tmp[2])+DP[11]*(DP[5]*(DP[11]*(C[2]*(DP[1]*(DP[8]+DP[9])+DP[3]*(DP[8]+
 DP[9])+DP[6]*(S[1]-DP[5]))-C[3]*DP[6])+C[42]*(DP[1]*(-DP[8]-DP[9])+DP[3]*(-
 DP[8]-DP[9])+DP[6]*(DP[5]-S[1]))+C[50]*DP[6])+S[1]*(DP[8]*(DP[3]*(S[1]*(
 C[22]*DP[11]-C[45])+C[42]-C[2]*DP[11])+DP[1]*(C[47]-C[4]*DP[11]))+DP[1]*(
 DP[9]*(C[42]-C[2]*DP[11]))));
tmp[4]=+DP[0]*(DP[5]*(DP[0]*(DP[8]*(DP[12]*(C[4]*(DP[10]+DP[11])+C[15]-C[2]*
 DP[0])+DP[13]*(C[4]*(DP[10]+DP[11])+C[15]-C[2]*DP[0])+C[46]*(-DP[1]-DP[2]-
 DP[3]-DP[4]))+DP[9]*(DP[12]*(C[4]*(DP[10]+DP[11])+C[15]-C[2]*DP[0])+DP[13]*
 (C[4]*(DP[10]+DP[11])+C[15]-C[2]*DP[0])+C[46]*(-DP[1]-DP[2]-DP[3]-DP[4]))+
 DP[14]*(DP[5]*(C[4]*(-DP[10]-DP[11])+C[2]*DP[0]-C[15])+C[6]*(-DP[10]-
 DP[11])+C[3]*DP[0]-C[19])+DP[5]*(C[46]*(DP[6]+DP[7]))+C[63]*(DP[6]+DP[7]))+
 DP[10]*(DP[8]*(C[41]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[12]*(C[8]-C[2]*DP[10]-
 C[4]*DP[11])+DP[13]*(C[8]-C[2]*DP[10]-C[4]*DP[11]))+DP[9]*(C[41]*(DP[1]+
 DP[2]+DP[3]+DP[4])+DP[12]*(C[8]-C[2]*DP[10]-C[4]*DP[11])+DP[13]*(C[8]-C[2]*
 DP[10]-C[4]*DP[11]))+DP[14]*(DP[5]*(C[2]*DP[10]-C[8]+C[4]*DP[11])+C[3]*
 DP[10]-C[10]+C[6]*DP[11])+DP[5]*(C[41]*(-DP[6]-DP[7]))+C[48]*(-DP[6]-
 DP[7]))+DP[11]*(C[41]*(DP[8]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[9]*(DP[1]+DP[2]+
 DP[3]+DP[4])+DP[5]*(-DP[6]-DP[7]))+DP[11]*(C[2]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[3]*DP[14])+C[8]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+C[48]*(-DP[6]-DP[7])-C[10]*
 DP[14])+C[64]*(DP[8]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[9]*(-DP[1]-DP[2]-DP[3]-
 DP[4])+DP[5]*(DP[6]+DP[7]))+C[17]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+
 DP[13])-DP[14]*DP[5])+C[69]*(DP[6]+DP[7])-C[21]*DP[14]));
R=+S[1]*(DP[10]*(S[1]*(DP[5]*(C[5]*(DP[9]*(DP[0]*(DP[12]-DP[1]-DP[3]+
 DP[13])+DP[11]*(DP[1]+DP[3]-DP[12]-DP[13])+DP[10]*(-DP[2]-DP[4]))+S[1]*(
 DP[0]*(DP[14]-DP[6])+DP[11]*(DP[6]-DP[14])-DP[10]*DP[7])+DP[5]*(DP[0]*(
 DP[6]-DP[14])+DP[11]*(DP[14]-DP[6])+DP[10]*DP[7]))+C[4]*(DP[9]*(DP[12]-
 DP[1]-DP[3]+DP[13])+DP[14]*(S[1]-DP[5]+DP[10])+DP[6]*(DP[5]-S[1]))+DP[7]*(
 C[51]*(S[1]-DP[5])+C[2]*(DP[0]-DP[11])-C[59]-C[40]*DP[10])+DP[6]*(C[61]*
 DP[0]-C[62]+C[40]*DP[11])+DP[14]*(C[7]*DP[11]-C[14]-C[12]*DP[0])+DP[9]*(
 C[51]*(DP[2]+DP[4])))+DP[9]*(S[1]*(C[5]*(DP[0]*(DP[1]-DP[12])+DP[11]*(
 DP[12]-DP[1])+DP[10]*DP[2])+C[4]*(DP[1]-DP[12])-C[51]*DP[2])+DP[2]*(C[2]*(
 DP[10]-DP[0]+DP[11])+C[16])+DP[12]*(C[4]*(-DP[10]-DP[11])+C[8]+C[11]*
 DP[0])+DP[1]*(C[46]-C[2]*DP[11]))+tmp[0])+tmp[1])+tmp[3])+tmp[4];
R*=(N/D)*Q2[1]*Q2[2]*Q2[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
