/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F491_out;
static void C491(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[13]*V[13];
S[1]=V[9]*V[9]*V[9]*V[9];
S[2]=V[8]*V[8]*V[8]*V[8];
C[64]=+2*S[0]*S[1]*S[2];
S[3]=V[9]*V[9];
S[4]=V[8]*V[8];
C[63]=+S[4]*(S[3]*(S[0]*(4*(S[3]+S[4]))));
C[62]=+8*S[0]*S[1]*S[4];
C[61]=+S[3]*(S[0]*(8*(S[3]+S[4])));
C[60]=+4*S[0]*S[1]*S[4];
C[59]=+8*S[2];
C[58]=+S[2]*(S[3]*(2*(S[0]+S[3])));
C[57]=+S[4]*(4*(S[3]*(S[0]+S[3]+S[4])+S[0]*S[4]));
C[56]=+S[4]*(S[3]*(4*(S[0]+S[4])));
C[55]=+S[4]*(S[3]*(8*(S[0]+S[3])));
C[54]=+S[4]*(16*(S[0]+S[3]));
C[53]=+8*(S[3]*(S[0]+S[3]+S[4])+S[0]*S[4]);
C[52]=+16*(S[0]+S[3]);
C[51]=+S[3]*(8*(S[0]+S[4]));
C[50]=+S[4]*(S[3]*(4*(S[0]+S[3])));
C[49]=+S[4]*(8*(S[0]+S[3]));
C[48]=+S[2]*(S[3]*(2*(S[0]-S[3])));
C[47]=+S[4]*(S[3]*(4*(S[0]-S[4])));
C[46]=+4*S[0]*S[3]*S[2];
C[45]=+2*S[0]*S[3]*S[2];
C[44]=+16*S[0]*S[3]*S[4];
C[43]=+S[3]*(8*(S[0]-S[4]));
C[42]=+16*S[0]*S[3];
C[41]=+8*S[0]*S[3];
C[40]=+8*S[0]*S[3]*S[4];
C[39]=+4*S[0]*S[3]*S[4];
C[38]=+S[1]*(S[4]*(4*(S[0]-S[3])));
C[37]=+S[4]*(S[3]*(8*(S[0]-S[3])));
C[36]=+S[4]*(S[3]*(8*S[0]-16*S[3]));
C[35]=+16*S[1]*S[4];
C[34]=+48*S[3]*S[4];
C[33]=+32*S[4];
C[32]=+32*S[3]*S[4];
C[31]=+S[3]*(4*(S[3]*(S[0]-S[3]-S[4])+S[0]*S[4]));
C[30]=+S[3]*(8*(S[0]-S[3]));
C[29]=+S[3]*(8*(S[0]-S[4])-16*S[3]);
C[28]=+S[3]*(16*S[3]+8*S[4]);
C[27]=+16*(S[3]+S[4]);
C[26]=+16*S[1];
C[25]=+S[3]*(16*S[3]+24*S[4]);
C[24]=+48*S[3];
C[23]=+32*S[3]+16*S[4];
C[22]=+32*S[3];
C[21]=+16*S[3];
C[20]=+S[2]*(S[1]*(S[0]-S[3]));
C[19]=+S[4]*(S[3]*(2*(S[3]*(S[0]-S[3]-S[4])+S[0]*S[4])));
C[18]=+S[2]*(S[3]*(2*S[0]-4*S[3]));
C[17]=+S[4]*(S[3]*(4*(S[0]-S[4])-8*S[3]));
C[16]=+S[1]*(S[4]*(2*(S[0]-S[3])));
C[15]=+S[4]*(S[3]*(4*(S[0]-S[3])));
C[14]=+S[4]*(S[3]*(4*S[0]-8*S[3]));
C[13]=+S[4]*(S[3]*(8*S[3]+4*S[4]));
C[12]=+S[4]*(8*(S[3]+S[4]));
C[11]=+4*S[1]*S[2];
C[10]=+S[4]*(S[3]*(8*S[3]+12*S[4]));
C[9]=+8*S[1]*S[4];
C[8]=+24*S[3]*S[4];
C[7]=+S[4]*(16*S[3]+8*S[4]);
C[6]=+16*S[4];
C[5]=+8*S[3]*S[2];
C[4]=+4*S[3]*S[2];
C[3]=+16*S[3]*S[4];
C[2]=+8*S[3]*S[4];
S[5]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[5];
S[6]=V[52]*V[52]*V[52]*V[52];
S[7]=V[47]*V[47];
S[8]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[6]*S[7]*S[8];
}
REAL F491_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   c                       n2     !  n2                      c       
 ==>==\                 /==>======!==>==\                 /==>==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   D  |  W+    t     W+ |  E2     !  E2 |  W+    t     W+ |  D       
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
static REAL C[65];REAL S[2];REAL tmp[4];                                    
     
if(CalcConst) C491(C);
N=-C[0];
S[0]=V[53]*V[53]*V[53]*V[53]*V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
tmp[0]=+DP[8]*(S[1]*(DP[10]*(S[1]*(S[1]*(32*(DP[13]-DP[3]))+C[33]*(DP[1]-
 DP[12])+C[6]*DP[3]-C[21]*DP[4]-C[27]*DP[13])+DP[13]*(C[22]*(DP[0]-DP[11])+
 C[28]+C[6]*DP[5]-C[21]*DP[10])+DP[5]*(C[6]*(DP[12]-DP[1]-DP[3]))+C[3]*(
 DP[2]+DP[12])+C[41]*DP[3]+C[51]*DP[4])+DP[11]*(DP[13]*(C[25]-C[24]*S[1]+
 C[22]*DP[0]-C[21]*DP[11])+DP[3]*(C[43]+C[21]*S[1])+C[41]*DP[4]-C[3]*DP[1]+
 C[34]*DP[12])+DP[0]*(DP[13]*(C[21]*(S[1]-DP[0])+C[29])+C[42]*(-DP[3]-
 DP[4])-C[3]*DP[12])+S[1]*(C[42]*(DP[3]+DP[4])-C[30]*DP[13])+C[44]*(-DP[1]-
 DP[2])+C[61]*(-DP[3]-DP[4])+C[37]*DP[12]+C[31]*DP[13])+DP[5]*(C[2]*(DP[10]*
 (-DP[2]-DP[4]-DP[12]-DP[13])+DP[0]*(DP[12]+DP[13])+DP[11]*(DP[1]+DP[3]))+
 C[40]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[11]*(C[8]*(-DP[12]-DP[13]))+C[15]*(-
 DP[12]-DP[13]))+DP[0]*(DP[12]*(C[32]*(-DP[10]-DP[11])+C[3]*DP[0]-C[36])+
 DP[13]*(C[3]*(-DP[10]-DP[11])+C[2]*DP[0]-C[14])+C[44]*(DP[1]+DP[2])+C[40]*(
 DP[3]+DP[4]))+DP[10]*(DP[12]*(C[3]*DP[10]-C[35]+C[32]*DP[11])+DP[13]*(C[2]*
 DP[10]-C[9]+C[3]*DP[11])+C[40]*(-DP[1]-DP[2])+C[39]*(-DP[3]-DP[4]))+DP[11]*
 (DP[11]*(C[3]*DP[12]+C[2]*DP[13])+C[40]*(-DP[1]-DP[2])+C[39]*(-DP[3]-
 DP[4])-C[35]*DP[12]-C[9]*DP[13])+C[62]*(DP[1]+DP[2])+C[60]*(DP[3]+DP[4])-
 C[38]*DP[12]-C[16]*DP[13]);
tmp[1]=+DP[5]*(DP[10]*(S[1]*(C[6]*(DP[8]*(DP[1]+DP[3]-DP[12]-DP[13])+DP[9]*(
 DP[1]+DP[3]-DP[12]-DP[13])+S[1]*(DP[6]-DP[14])+DP[5]*(DP[14]-DP[6]))+C[2]*
 DP[7]-C[12]*DP[6]+C[7]*DP[14])+C[2]*(DP[8]*(DP[2]-DP[1]-DP[3]+DP[4])+DP[9]*
 (DP[2]-DP[1]-DP[3]+DP[4])+DP[5]*(DP[6]-DP[7]))+C[3]*(DP[8]*(DP[12]+DP[13])+
 DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+C[4]*(DP[6]-DP[7])-C[5]*DP[14])+DP[11]*
 (C[2]*(DP[1]*(-DP[8]-DP[9])+DP[3]*(-DP[8]-DP[9])+DP[6]*(DP[5]-S[1]))+C[3]*(
 DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[1]-DP[5]))+C[4]*
 DP[6]-C[5]*DP[14])+DP[8]*(C[15]*(-DP[1]-DP[3])+C[40]*(-DP[2]-DP[4])+C[9]*(-
 DP[12]-DP[13]))+DP[9]*(C[15]*(-DP[1]-DP[3])+C[40]*(-DP[2]-DP[4])+C[9]*(-
 DP[12]-DP[13]))+S[1]*(-C[15]*DP[6]-C[40]*DP[7]-C[9]*DP[14])+DP[5]*(C[15]*
 DP[6]+C[40]*DP[7]+C[9]*DP[14])+C[48]*DP[6]+C[46]*DP[7]+C[11]*DP[14]);
tmp[2]=+DP[11]*(S[1]*(DP[8]*(DP[10]*(S[1]*(S[1]*(32*(DP[3]-DP[13]))+C[33]*(
 DP[12]-DP[1])+C[21]*DP[4]-C[27]*DP[3]+C[23]*DP[13])+C[3]*(DP[1]-DP[2]-
 DP[13])+C[2]*(DP[3]-DP[4])-C[32]*DP[12])+DP[11]*(S[1]*(C[22]*DP[13]-C[21]*
 DP[3])+C[3]*(DP[1]-DP[13])+C[2]*DP[3]-C[32]*DP[12])+S[1]*(-C[30]*DP[3]-
 C[42]*DP[4]-C[26]*DP[13])+C[37]*DP[1]+C[44]*DP[2]+C[15]*DP[3]+C[40]*DP[4]+
 C[35]*DP[12]+C[9]*DP[13])+DP[9]*(DP[10]*(S[1]*(C[6]*(DP[12]-DP[1]))+C[2]*(
 DP[1]-DP[2])-C[3]*DP[12])+DP[1]*(C[15]+C[2]*DP[11])+DP[12]*(C[9]-C[3]*
 DP[11])+C[40]*DP[2]))+tmp[1])+DP[10]*(S[1]*(DP[5]*(DP[10]*(C[6]*(DP[2]*(-
 DP[8]-DP[9])+DP[4]*(-DP[8]-DP[9])+DP[7]*(DP[5]-S[1]))+C[12]*DP[7])+C[49]*(
 DP[2]*(DP[8]+DP[9])+DP[4]*(DP[8]+DP[9])+DP[7]*(S[1]-DP[5]))-C[57]*DP[7])+
 DP[8]*(S[1]*(DP[4]*(S[1]*(C[52]-32*DP[10])+C[27]*DP[10]-C[53])+DP[2]*(
 C[33]*DP[10]-C[54]))+DP[2]*(C[55]-C[3]*DP[10])+DP[4]*(C[50]-C[2]*DP[10]))+
 DP[2]*(DP[9]*(S[1]*(C[6]*DP[10]-C[49])+C[50]-C[2]*DP[10])))+DP[5]*(DP[10]*(
 C[2]*(DP[2]*(DP[8]+DP[9])+DP[4]*(DP[8]+DP[9])-DP[7]*DP[5])-C[4]*DP[7])+
 C[50]*(DP[2]*(-DP[8]-DP[9])+DP[4]*(-DP[8]-DP[9])+DP[7]*DP[5])+C[58]*
 DP[7]));
tmp[3]=+DP[0]*(DP[5]*(DP[0]*(DP[8]*(DP[12]*(C[3]*(DP[10]+DP[11])+C[14]-C[2]*
 DP[0])+DP[13]*(C[3]*(DP[10]+DP[11])+C[14]-C[2]*DP[0])+C[40]*(-DP[1]-DP[2]-
 DP[3]-DP[4]))+DP[9]*(DP[12]*(C[3]*(DP[10]+DP[11])+C[14]-C[2]*DP[0])+DP[13]*
 (C[3]*(DP[10]+DP[11])+C[14]-C[2]*DP[0])+C[40]*(-DP[1]-DP[2]-DP[3]-DP[4]))+
 DP[14]*(DP[5]*(C[3]*(-DP[10]-DP[11])+C[2]*DP[0]-C[14])+C[5]*(-DP[10]-
 DP[11])+C[4]*DP[0]-C[18])+DP[5]*(C[40]*(DP[6]+DP[7]))+C[46]*(DP[6]+DP[7]))+
 DP[10]*(DP[8]*(C[39]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[12]*(C[9]-C[2]*DP[10]-
 C[3]*DP[11])+DP[13]*(C[9]-C[2]*DP[10]-C[3]*DP[11]))+DP[9]*(C[39]*(DP[1]+
 DP[2]+DP[3]+DP[4])+DP[12]*(C[9]-C[2]*DP[10]-C[3]*DP[11])+DP[13]*(C[9]-C[2]*
 DP[10]-C[3]*DP[11]))+DP[14]*(DP[5]*(C[2]*DP[10]-C[9]+C[3]*DP[11])+C[4]*
 DP[10]-C[11]+C[5]*DP[11])+DP[5]*(C[39]*(-DP[6]-DP[7]))+C[45]*(-DP[6]-
 DP[7]))+DP[11]*(C[39]*(DP[8]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[9]*(DP[1]+DP[2]+
 DP[3]+DP[4])+DP[5]*(-DP[6]-DP[7]))+DP[11]*(C[2]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[4]*DP[14])+C[9]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+C[45]*(-DP[6]-DP[7])-C[11]*
 DP[14])+C[60]*(DP[8]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[9]*(-DP[1]-DP[2]-DP[3]-
 DP[4])+DP[5]*(DP[6]+DP[7]))+C[16]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+
 DP[13])-DP[14]*DP[5])+C[64]*(DP[6]+DP[7])-C[20]*DP[14]));
R=+S[1]*(DP[0]*(DP[5]*(DP[10]*(S[1]*(C[6]*(DP[9]*(DP[12]-DP[1]-DP[3]+
 DP[13])+S[1]*(DP[14]-DP[6])+DP[5]*(DP[6]-DP[14]))+C[59]*DP[6]-C[2]*DP[7]-
 C[12]*DP[14])+C[2]*(DP[9]*(-DP[2]-DP[4]-DP[12]-DP[13])+DP[5]*(DP[7]+
 DP[14])-DP[14]*DP[10])+DP[14]*(C[3]*(DP[0]-DP[11])+C[13])+C[39]*DP[6]+
 C[56]*DP[7])+DP[11]*(DP[14]*(C[8]*(DP[5]-S[1])+C[10]+C[3]*DP[0]-C[2]*
 DP[11])+DP[9]*(C[2]*(DP[1]+DP[3])+C[8]*(-DP[12]-DP[13]))+DP[6]*(C[2]*(S[1]-
 DP[5])+C[47])+C[39]*DP[7])+C[40]*(DP[9]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[6]*(
 S[1]-DP[0]-DP[5])+DP[7]*(S[1]-DP[0]-DP[5]))+DP[14]*(DP[0]*(C[2]*(S[1]-
 DP[0]-DP[5])+C[17])+C[15]*(DP[5]-S[1])+C[19])+DP[9]*(DP[0]*(C[2]*(DP[12]+
 DP[13]))+C[15]*(-DP[12]-DP[13]))+C[63]*(-DP[6]-DP[7]))+DP[9]*(DP[12]*(
 DP[10]*(S[1]*(C[2]-C[6]*S[1])+C[3]*(DP[11]-DP[0])+C[2]*DP[10]-C[9])+DP[0]*(
 C[2]*(DP[0]-S[1])-C[14]-C[3]*DP[11])+DP[11]*(C[8]*S[1]-C[9]+C[2]*DP[11])+
 C[15]*S[1]-C[16])+DP[1]*(S[1]*(C[6]*DP[10]*S[1]-C[40]-C[2]*DP[11])+C[39]*(-
 DP[10]-DP[11])+C[60]+C[40]*DP[0])+DP[2]*(S[1]*(C[2]*DP[10]-C[40])+C[39]*(-
 DP[10]-DP[11])+C[60]+C[40]*DP[0]))+tmp[0])+tmp[2])+tmp[3];
R*=(N/D)*Q2[1]*Q2[2]*Q2[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
