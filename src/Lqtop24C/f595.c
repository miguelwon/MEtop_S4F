/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F595_out;
static void C595(REAL * C)
{
REAL* V=va_out;
REAL S[12];                                                                 
     
S[0]=V[10]*V[10];
S[1]=V[8]*V[8]*V[8]*V[8];
C[90]=+8*S[0]*S[1];
C[89]=+8*S[1];
S[2]=V[10]*V[10]*V[10]*V[10];
S[3]=V[9]*V[9]*V[9]*V[9];
C[88]=+S[1]*(2*(S[2]-S[3]));
S[4]=V[9]*V[9];
S[5]=V[8]*V[8];
C[87]=+S[5]*(4*(S[5]*(S[0]-S[4])+S[2]-S[3]));
C[86]=+S[5]*(8*(S[0]-S[4]-S[5]));
C[85]=+S[1]*(4*(S[0]-S[4]));
C[84]=+8*(S[5]*(S[0]-S[4])+S[2]-S[3]);
C[83]=+S[5]*(8*(S[2]-S[3]));
C[82]=+8*(S[2]-S[3]);
C[81]=+16*(S[0]-S[4]-S[5]);
C[80]=+S[5]*(16*(S[0]-S[4]));
C[79]=+16*(S[0]-S[4]);
C[78]=+S[5]*(S[4]*(S[0]*(S[4]*(16*S[0]+8*S[4])+8*S[2])));
S[6]=V[10]*V[10]*V[10]*V[10]*V[10]*V[10];
C[77]=+S[5]*(S[4]*(S[4]*(44*S[0]+4*S[4])+44*S[2])+4*S[6]);
C[76]=+S[5]*(S[4]*(64*S[0]+16*S[4])+16*S[2]);
C[75]=+S[5]*(S[0]*(16*S[0]+48*S[4]));
C[74]=+S[5]*(48*S[0]+16*S[4]);
C[73]=+32*S[0]*S[5];
C[72]=+S[5]*(S[4]*(S[0]*(32*(S[0]+S[4]))));
C[71]=+S[5]*(S[4]*(48*S[0]+16*S[4]));
C[70]=+S[5]*(S[4]*(96*S[0]+16*S[4])+16*S[2]);
C[69]=+S[5]*(16*S[0]+48*S[4]);
C[68]=+64*S[0]*S[4]*S[5];
C[67]=+32*S[5];
C[66]=+S[5]*(32*(S[0]+S[4]));
C[65]=+32*S[4]*S[5];
C[64]=+S[4]*(S[0]*(8*(S[5]*(S[0]+S[4])+S[2]+S[3])+16*S[0]*S[4]));
C[63]=+S[4]*(S[0]*(16*(S[0]+S[4])));
C[62]=+S[4]*(S[4]*(4*(S[4]+S[5])+44*S[0])+S[0]*(44*S[0]+24*S[5]))+S[2]*(4*(
 S[0]+S[5]));
C[61]=+S[4]*(48*S[0]+8*S[4])+8*S[2];
C[60]=+S[4]*(64*S[0]+16*S[4]+8*S[5])+S[0]*(16*S[0]+8*S[5]);
C[59]=+S[0]*(S[4]*(32*(S[0]+S[4])+24*S[5])+8*S[0]*S[5]);
C[58]=+S[0]*(16*(S[0]+S[5])+48*S[4]);
C[57]=+S[4]*(96*S[0]+16*S[4]+8*S[5])+S[0]*(16*S[0]+24*S[5]);
C[56]=+16*(S[4]+S[5])+48*S[0];
C[55]=+S[0]*(32*S[4]+16*S[5]);
C[54]=+32*S[0];
C[53]=+S[4]*(S[0]*(32*(S[0]+S[4])+24*S[5])+8*S[4]*S[5]);
C[52]=+S[4]*(48*S[0]+16*S[4]);
C[51]=+S[4]*(96*S[0]+16*S[4]+24*S[5])+S[0]*(16*S[0]+8*S[5]);
C[50]=+16*S[0]+48*S[4];
C[49]=+S[5]*(16*(S[0]+S[4]))+64*S[0]*S[4];
C[48]=+32*(S[0]+S[4])+16*S[5];
C[47]=+32*(S[0]+S[4]);
C[46]=+S[4]*(32*S[0]+16*S[5]);
C[45]=+32*S[4];
C[44]=+16*(S[0]+S[4]);
C[43]=+S[5]*(4*(S[2]-S[3]));
C[42]=+S[5]*(8*(S[0]-S[4]));
C[41]=+S[1]*(S[4]*(S[0]*(S[4]*(4*S[0]+2*S[4])+2*S[2])));
C[40]=+S[5]*(S[4]*(S[0]*(4*(S[5]*(S[0]+S[4])+S[2]+S[3])+8*S[0]*S[4])));
C[39]=+S[1]*(S[4]*(S[4]*(11*S[0]+S[4])+11*S[2])+S[6]);
C[38]=+S[5]*(S[4]*(S[4]*(2*(S[4]+S[5])+22*S[0])+S[0]*(22*S[0]+12*S[5]))+
 S[2]*(2*(S[0]+S[5])));
C[37]=+S[1]*(S[4]*(16*S[0]+4*S[4])+4*S[2]);
C[36]=+S[5]*(S[4]*(32*S[0]+8*S[4]+4*S[5])+S[0]*(8*S[0]+4*S[5]));
C[35]=+S[5]*(S[4]*(S[0]*(S[4]*(8*S[0]+4*S[4])+4*S[2])));
C[34]=+S[5]*(S[4]*(S[0]*(8*(S[0]+S[4]))));
C[33]=+S[5]*(S[4]*(S[4]*(22*S[0]+2*S[4])+22*S[2])+2*S[6]);
C[32]=+S[5]*(S[4]*(24*S[0]+4*S[4])+4*S[2]);
C[31]=+S[5]*(S[4]*(32*S[0]+8*S[4])+8*S[2]);
C[30]=+S[5]*(S[0]*(S[4]*(16*(S[0]+S[4])+12*S[5])+4*S[0]*S[5]));
C[29]=+S[5]*(S[0]*(8*(S[0]+S[5])+24*S[4]));
C[28]=+S[5]*(S[4]*(48*S[0]+8*S[4]+4*S[5])+S[0]*(8*S[0]+12*S[5]));
C[27]=+S[5]*(8*(S[4]+S[5])+24*S[0]);
C[26]=+S[5]*(S[0]*(8*S[0]+24*S[4]));
C[25]=+S[5]*(24*S[0]+8*S[4]);
C[24]=+S[5]*(S[0]*(16*S[4]+8*S[5]));
C[23]=+16*S[0]*S[5];
C[22]=+S[1]*(S[4]*(S[0]*(8*(S[0]+S[4]))));
C[21]=+S[5]*(S[4]*(S[0]*(16*(S[0]+S[4])+12*S[5])+4*S[4]*S[5]));
C[20]=+S[1]*(S[4]*(24*S[0]+4*S[4])+4*S[2]);
C[19]=+S[5]*(S[4]*(48*S[0]+8*S[4]+12*S[5])+S[0]*(8*S[0]+4*S[5]));
C[18]=+S[5]*(S[4]*(S[0]*(16*(S[0]+S[4]))));
C[17]=+S[5]*(S[4]*(24*S[0]+8*S[4]));
C[16]=+S[5]*(S[4]*(48*S[0]+8*S[4])+8*S[2]);
C[15]=+S[5]*(8*S[0]+24*S[4]);
C[14]=+16*S[0]*S[4]*S[1];
C[13]=+S[5]*(S[5]*(8*(S[0]+S[4]))+32*S[0]*S[4]);
C[12]=+S[5]*(16*(S[0]+S[4])+8*S[5]);
C[11]=+S[1]*(8*(S[0]+S[4]));
C[10]=+32*S[0]*S[4]*S[5];
C[9]=+16*S[5];
C[8]=+S[5]*(16*(S[0]+S[4]));
C[7]=+8*S[0]*S[4]*S[1];
C[6]=+S[5]*(S[4]*(16*S[0]+8*S[5]));
C[5]=+S[1]*(4*(S[0]+S[4]));
C[4]=+16*S[0]*S[4]*S[5];
C[3]=+16*S[4]*S[5];
C[2]=+S[5]*(8*(S[0]+S[4]));
S[7]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[7];
S[8]=V[52]*V[52];
S[9]=V[50]*V[50];
S[10]=V[48]*V[48];
S[11]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[8]*S[9]*S[10]*S[11];
}
REAL F595_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   C                       N2     !  N2                      C       
 ==<==\                 /==<======!==<==\                 /==<==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   s  |  W+    t     W+ |  e2     !  e2 |  W+    t     W+ |  s       
 ==>==@-1<--@==<==@-2<--@==>======!==>==@--<4-@==<==@--<3-@==>==     
   P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB | -PA    P2      
            |     |               !           |     |                
            |     |        B      !  B        |     |                
            |     \========<======!==<========/     |                
            |              P6     !  P6             |                
            |                     !                 |                
            |              d      !  d              |                
            \==============>======!==>==============/                
                           P5     !  P5                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[91];REAL S[2];REAL tmp[5];                                    
     
if(CalcConst) C595(C);
N=-C[0];
S[0]=V[53]*V[53]*V[53]*V[53]*V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
tmp[0]=+DP[12]*(S[1]*(S[1]*(32*(DP[0]*(DP[9]-DP[3])+DP[7]*(DP[3]-DP[9])-
 DP[6]*DP[4])+C[54]*(DP[9]-DP[3])-C[79]*DP[4])+DP[0]*(C[67]*(DP[1]-DP[8])+
 C[9]*DP[3]+C[79]*DP[4]-C[56]*DP[9])+DP[7]*(C[67]*(DP[8]-DP[1])+C[81]*DP[3]-
 C[79]*DP[4]+C[48]*DP[9])+DP[6]*(C[67]*DP[2]-C[81]*DP[4]+C[54]*DP[9])+C[73]*
 (DP[1]-DP[8])+C[80]*DP[2]+C[23]*DP[3]+C[84]*DP[4]-C[58]*DP[9])+DP[5]*(C[9]*
 (DP[0]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[7]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[6]*(-
 DP[2]-DP[4]))+C[23]*(DP[8]-DP[1]-DP[3]+DP[9])+C[42]*(-DP[2]-DP[4]))+DP[0]*(
 DP[9]*(C[47]*(DP[0]-DP[7])+C[57]-C[44]*DP[6])+C[74]*DP[8]-C[80]*DP[2]-
 C[42]*DP[4])+DP[7]*(C[80]*(DP[2]-DP[1])+C[42]*(DP[4]-DP[3])-C[66]*DP[8]-
 C[49]*DP[9])+DP[6]*(C[80]*DP[2]+C[42]*DP[4]-C[73]*DP[8]-C[55]*DP[9])+C[75]*
 DP[8]-C[83]*DP[2]-C[43]*DP[4]+C[59]*DP[9]);
tmp[1]=+DP[5]*(C[42]*(DP[7]*(DP[12]*(DP[1]-DP[2]+DP[3]-DP[4])+DP[13]*(DP[1]-
 DP[2]+DP[3]-DP[4])+DP[5]*(DP[11]-DP[10]))+DP[0]*(DP[2]*(DP[12]+DP[13])+
 DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])+DP[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-
 DP[12]-DP[13])+DP[11]*DP[5]))+DP[14]*(DP[0]*(C[8]*(DP[0]-DP[7])+C[28]+
 C[25]*DP[5]-C[2]*DP[6])+DP[5]*(C[26]-C[23]*DP[6]-C[8]*DP[7])+C[30]-C[24]*
 DP[6]-C[13]*DP[7])+DP[12]*(DP[8]*(C[23]*DP[6]-C[26]-C[25]*DP[0]+C[8]*
 DP[7])+DP[9]*(C[23]*DP[6]-C[26]-C[25]*DP[0]+C[8]*DP[7])+C[43]*(DP[2]+
 DP[4]))+DP[13]*(DP[8]*(C[23]*DP[6]-C[26]-C[25]*DP[0]+C[8]*DP[7])+DP[9]*(
 C[23]*DP[6]-C[26]-C[25]*DP[0]+C[8]*DP[7])+C[43]*(DP[2]+DP[4]))+DP[11]*(
 C[85]*(DP[6]-DP[0]+DP[7])-C[88]-C[43]*DP[5])-C[85]*DP[10]*DP[7])+DP[8]*(
 DP[0]*(DP[12]*(C[66]*(DP[7]-DP[0])+C[8]*DP[6]-C[70])+DP[13]*(C[8]*(DP[7]-
 DP[0])+C[2]*DP[6]-C[16]))+DP[12]*(C[10]*DP[6]-C[72]+C[68]*DP[7])+DP[13]*(
 C[4]*DP[6]-C[18]+C[10]*DP[7]))+DP[9]*(DP[12]*(DP[0]*(C[8]*(DP[7]-DP[0])+
 C[2]*DP[6]-C[16])+C[4]*DP[6]-C[18]+C[10]*DP[7]));
tmp[2]=+DP[7]*(DP[5]*(DP[0]*(C[42]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*(DP[5]-S[1]))+C[15]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-
 DP[13])+DP[14]*(DP[5]-S[1]))+DP[14]*(C[19]+C[8]*DP[0]-C[2]*DP[7])+C[85]*
 DP[10])+DP[7]*(C[42]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(
 S[1]-DP[5]))+C[3]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(
 S[1]-DP[5]))-C[85]*DP[10]-C[6]*DP[14])+C[43]*(DP[1]*(-DP[12]-DP[13])+DP[3]*
 (-DP[12]-DP[13])+DP[10]*(DP[5]-S[1]))+C[17]*(DP[8]*(-DP[12]-DP[13])+DP[9]*
 (-DP[12]-DP[13])+DP[14]*(DP[5]-S[1]))+C[88]*DP[10]+C[21]*DP[14])+DP[12]*(
 S[1]*(DP[0]*(DP[9]*(C[51]-C[50]*S[1]+C[47]*DP[0]-C[44]*DP[7])+DP[3]*(C[42]-
 C[79]*S[1])+C[80]*DP[1]+C[69]*DP[8])+DP[7]*(S[1]*(C[79]*DP[3]+C[45]*DP[9])-
 C[80]*DP[1]-C[42]*DP[3]-C[65]*DP[8]-C[46]*DP[9])+S[1]*(-C[82]*DP[3]-C[52]*
 DP[9])+C[83]*DP[1]+C[43]*DP[3]+C[71]*DP[8]+C[53]*DP[9])+DP[0]*(DP[8]*(C[8]*
 DP[7]-C[70]-C[66]*DP[0])+DP[9]*(C[2]*DP[7]-C[16]-C[8]*DP[0]))+DP[7]*(C[10]*
 DP[8]+C[4]*DP[9])-C[72]*DP[8]-C[18]*DP[9])+DP[13]*(DP[8]*(DP[0]*(C[15]*
 S[1]-C[16]-C[8]*DP[0]+C[2]*DP[7])+S[1]*(C[17]-C[3]*DP[7])+C[4]*DP[7]-
 C[18])+S[1]*(DP[1]*(C[42]*(DP[0]-DP[7])+C[43]))));
tmp[3]=+DP[6]*(S[1]*(DP[5]*(C[9]*(DP[13]*(DP[0]*(DP[8]-DP[1]-DP[3]+DP[9])+
 DP[7]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[6]*(-DP[2]-DP[4]))+S[1]*(DP[0]*(DP[14]-
 DP[10])+DP[7]*(DP[10]-DP[14])-DP[11]*DP[6])+DP[5]*(DP[0]*(DP[10]-DP[14])+
 DP[7]*(DP[14]-DP[10])+DP[11]*DP[6]))+C[23]*(DP[13]*(DP[8]-DP[1]-DP[3]+
 DP[9])+DP[14]*(S[1]-DP[5]+DP[6])+DP[10]*(DP[5]-S[1]))+DP[11]*(C[42]*(DP[0]-
 S[1]+DP[5]-DP[7])+C[87]-C[86]*DP[6])+DP[10]*(C[90]+C[89]*DP[0]+C[86]*
 DP[7])+DP[14]*(C[12]*DP[7]-C[29]-C[27]*DP[0])+DP[13]*(C[42]*(-DP[2]-
 DP[4])))+DP[13]*(S[1]*(C[9]*(DP[0]*(DP[1]-DP[8])+DP[7]*(DP[8]-DP[1])+DP[6]*
 DP[2])+C[23]*(DP[1]-DP[8])+C[42]*DP[2])+DP[2]*(C[42]*(DP[6]-DP[0]+DP[7])-
 C[43])+DP[8]*(C[26]+C[25]*DP[0]-C[23]*DP[6]-C[8]*DP[7])-C[42]*DP[7]*DP[1])+
 tmp[0])+tmp[1]);
tmp[4]=+DP[0]*(DP[0]*(C[8]*(DP[6]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+
 DP[13])-DP[14]*DP[5])+DP[7]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-
 DP[14]*DP[5]))+DP[0]*(C[2]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*DP[5])+C[5]*DP[14])+C[31]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-
 DP[13])+DP[14]*DP[5])+DP[14]*(C[11]*(-DP[6]-DP[7])+C[37]))+DP[6]*(DP[6]*(
 C[2]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[5]*
 DP[14])+DP[7]*(C[8]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*
 DP[5])+C[11]*DP[14])+C[16]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-
 DP[14]*DP[5])-C[20]*DP[14])+DP[7]*(DP[7]*(C[2]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[5]*DP[14])+C[16]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])-C[20]*DP[14])+C[33]*(DP[8]*(-
 DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[39]*DP[14]);
R=+S[1]*(DP[0]*(DP[0]*(DP[12]*(DP[9]*(S[1]*(C[44]*(S[1]-DP[0])-C[60])+C[2]*(
 DP[0]+DP[5])+C[31])+DP[8]*(C[8]*(DP[0]-S[1])+C[76]+C[2]*DP[5]))+C[2]*(
 DP[5]*(DP[14]*(S[1]-DP[0]-DP[5])+DP[13]*(DP[8]+DP[9]))+DP[8]*(DP[13]*(
 DP[0]-S[1])))+C[31]*DP[13]*DP[8]-C[36]*DP[14]*DP[5])+DP[5]*(C[32]*(DP[8]*(
 DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[1]-DP[5]))-C[38]*DP[14])+
 DP[12]*(S[1]*(DP[9]*(C[61]*S[1]-C[62])-C[16]*DP[8])+C[77]*DP[8]+C[33]*
 DP[9])+DP[8]*(DP[13]*(C[33]-C[32]*S[1])))+DP[5]*(C[34]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[1]-DP[5]))-C[40]*DP[14])+DP[12]*(
 S[1]*(DP[9]*(C[63]*S[1]-C[64])-C[18]*DP[8])+C[78]*DP[8]+C[35]*DP[9])+DP[8]*
 (DP[13]*(C[35]-C[34]*S[1]))+tmp[2]+tmp[3])+DP[5]*(DP[6]*(DP[6]*(C[4]*(
 DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[7]*DP[14])+
 DP[7]*(C[10]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+
 C[14]*DP[14])+C[18]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*
 DP[5])-C[22]*DP[14])+DP[7]*(DP[7]*(C[4]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-
 DP[12]-DP[13])+DP[14]*DP[5])+C[7]*DP[14])+C[18]*(DP[8]*(DP[12]+DP[13])+
 DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])-C[22]*DP[14])+C[35]*(DP[8]*(-DP[12]-
 DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[41]*DP[14]+tmp[4]);
R*=(N/D)*Q2[1]*Q2[2]*Q2[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
