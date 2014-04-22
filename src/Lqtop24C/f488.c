/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F488_out;
static void C488(REAL * C)
{
REAL* V=va_out;
REAL S[10];                                                                 
     
S[0]=V[8]*V[8]*V[8]*V[8];
C[36]=+8*S[0];
S[1]=V[9]*V[9]*V[9]*V[9];
C[35]=+2*S[1]*S[0];
S[2]=V[9]*V[9];
S[3]=V[8]*V[8];
C[34]=+S[3]*(S[2]*(4*(S[2]+S[3])));
C[33]=+S[2]*(8*(S[2]+S[3]));
S[4]=V[9]*V[9]*V[9]*V[9]*V[9]*V[9];
C[32]=+4*S[4]*S[3];
C[31]=+16*S[1]*S[3];
C[30]=+48*S[2]*S[3];
C[29]=+32*S[3];
C[28]=+32*S[2]*S[3];
C[27]=+S[1]*(4*(S[2]+S[3]));
C[26]=+8*S[1];
C[25]=+S[2]*(16*S[2]+8*S[3]);
C[24]=+16*(S[2]+S[3]);
C[23]=+16*S[1];
C[22]=+S[2]*(16*S[2]+24*S[3]);
C[21]=+48*S[2];
C[20]=+32*S[2]+16*S[3];
C[19]=+32*S[2];
C[18]=+16*S[2];
C[17]=+S[4]*S[0];
C[16]=+S[1]*(S[3]*(2*(S[2]+S[3])));
C[15]=+2*S[4]*S[3];
C[14]=+4*S[1]*S[3];
C[13]=+S[3]*(S[2]*(8*S[2]+4*S[3]));
C[12]=+S[3]*(8*(S[2]+S[3]));
C[11]=+4*S[1]*S[0];
C[10]=+S[3]*(S[2]*(8*S[2]+12*S[3]));
C[9]=+8*S[1]*S[3];
C[8]=+24*S[2]*S[3];
C[7]=+S[3]*(16*S[2]+8*S[3]);
C[6]=+16*S[3];
C[5]=+8*S[2]*S[0];
C[4]=+4*S[2]*S[0];
C[3]=+16*S[2]*S[3];
C[2]=+8*S[2]*S[3];
S[5]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[5];
S[6]=V[52]*V[52];
S[7]=V[50]*V[50];
S[8]=V[47]*V[47];
S[9]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[6]*S[7]*S[8]*S[9];
}
REAL F488_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
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
            |              P6     !  P6             |                
            |                     !                 |                
            |              D      !  D              |                
            \==============<======!==<==============/                
                           P5     !  P5                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[37];REAL S[2];REAL tmp[3];                                    
     
if(CalcConst) C488(C);
N=-C[0];
S[0]=V[53]*V[53]*V[53]*V[53]*V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
tmp[0]=+S[1]*(DP[12]*(S[1]*(DP[0]*(S[1]*(32*(DP[9]-DP[3]))+C[29]*(DP[1]-
 DP[8])+C[6]*DP[3]-C[18]*DP[4]-C[24]*DP[9])+DP[7]*(S[1]*(32*(DP[3]-DP[9]))+
 C[29]*(DP[8]-DP[1])+C[18]*DP[4]-C[24]*DP[3]+C[20]*DP[9])+DP[4]*(S[1]*(
 C[18]-32*DP[6])+C[24]*DP[6]-C[33])+DP[2]*(C[29]*DP[6]-C[3]))+DP[5]*(C[6]*(
 DP[0]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[7]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[6]*(-
 DP[2]-DP[4]))+C[2]*(DP[2]+DP[4]))+DP[0]*(DP[9]*(C[19]*(DP[0]-DP[7])+C[25]-
 C[18]*DP[6])+C[3]*(DP[2]+DP[8])+C[2]*DP[4])+DP[7]*(C[3]*(DP[1]-DP[2]-
 DP[9])+C[2]*(DP[3]-DP[4])-C[28]*DP[8])+DP[2]*(C[9]-C[3]*DP[6])+DP[4]*(
 C[14]-C[2]*DP[6]))+DP[5]*(C[6]*(DP[13]*(DP[0]*(DP[8]-DP[1]-DP[3]+DP[9])+
 DP[7]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[6]*(-DP[2]-DP[4]))+S[1]*(DP[0]*(DP[14]-
 DP[10])+DP[7]*(DP[10]-DP[14])-DP[11]*DP[6])+DP[5]*(DP[0]*(DP[10]-DP[14])+
 DP[7]*(DP[14]-DP[10])+DP[11]*DP[6]))+DP[11]*(C[2]*(S[1]-DP[0]-DP[5]+DP[7])+
 C[12]*DP[6]-C[34])+DP[0]*(C[36]*DP[10]-C[12]*DP[14])+DP[7]*(C[7]*DP[14]-
 C[12]*DP[10])+DP[13]*(C[2]*(DP[2]+DP[4])))+DP[13]*(S[1]*(C[6]*(DP[0]*(
 DP[1]-DP[8])+DP[7]*(DP[8]-DP[1])+DP[6]*DP[2])-C[2]*DP[2])+C[2]*(DP[2]*(
 DP[0]-DP[6]-DP[7])+DP[7]*DP[1]+DP[8]*DP[0])+C[14]*DP[2]-C[3]*DP[8]*DP[7]));
tmp[1]=+DP[7]*(DP[5]*(DP[0]*(C[2]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+
 DP[13])+DP[10]*(S[1]-DP[5])-DP[14]*DP[7])+C[8]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[1]))+DP[14]*(C[10]+C[3]*DP[0])-C[4]*
 DP[10])+DP[7]*(C[2]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(
 DP[5]-S[1]))+C[3]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(
 S[1]-DP[5]))+C[4]*DP[10]-C[5]*DP[14])+C[14]*(DP[1]*(DP[12]+DP[13])+DP[3]*(
 DP[12]+DP[13])+DP[10]*(S[1]-DP[5]))+C[9]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-
 DP[12]-DP[13])+DP[14]*(DP[5]-S[1]))+C[11]*DP[14]-C[35]*DP[10])+S[1]*(
 DP[12]*(DP[0]*(DP[9]*(C[22]-C[21]*S[1]+C[19]*DP[0]-C[18]*DP[7])+DP[3]*(
 C[18]*S[1]-C[2])+C[30]*DP[8]-C[3]*DP[1])+DP[7]*(S[1]*(C[19]*DP[9]-C[18]*
 DP[3])+C[3]*(DP[1]-DP[9])+C[2]*DP[3]-C[28]*DP[8])+S[1]*(C[26]*DP[3]-C[23]*
 DP[9])+C[9]*(DP[9]-DP[1])+C[31]*DP[8]-C[14]*DP[3])+DP[13]*(DP[1]*(C[2]*(
 DP[7]-DP[0])-C[14])+DP[8]*(C[9]+C[8]*DP[0]-C[3]*DP[7])))+DP[0]*(DP[8]*(
 DP[12]*(C[3]*DP[7]-C[31]-C[28]*DP[0])+DP[13]*(C[2]*DP[7]-C[9]-C[3]*DP[0]))+
 DP[9]*(DP[12]*(C[2]*DP[7]-C[9]-C[3]*DP[0]))));
tmp[2]=+S[1]*(DP[6]*(DP[5]*(C[2]*(DP[0]*(DP[12]*(-DP[2]-DP[4]-DP[8]-DP[9])+
 DP[13]*(-DP[2]-DP[4]-DP[8]-DP[9])+DP[5]*(DP[11]+DP[14])-DP[14]*DP[6])+
 DP[7]*(DP[12]*(DP[2]-DP[1]-DP[3]+DP[4])+DP[13]*(DP[2]-DP[1]-DP[3]+DP[4])+
 DP[5]*(DP[10]-DP[11]))+DP[6]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-
 DP[11]*DP[5]))+DP[7]*(C[3]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+
 DP[14]*(-DP[0]-DP[5]))+C[4]*(DP[10]-DP[11])-C[5]*DP[14])+C[14]*(DP[2]*(-
 DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+DP[0]*(DP[14]*(C[13]+
 C[3]*DP[0])+C[4]*DP[11])+DP[11]*(C[35]-C[4]*DP[6]))+DP[0]*(DP[8]*(DP[12]*(
 C[28]*(DP[7]-DP[0])+C[3]*DP[6]-C[31])+DP[13]*(C[3]*(DP[7]-DP[0])+C[2]*
 DP[6]-C[9]))+DP[9]*(DP[12]*(C[3]*(DP[7]-DP[0])+C[2]*DP[6]-C[9])))+tmp[0])+
 DP[0]*(DP[0]*(DP[12]*(DP[9]*(S[1]*(C[18]*(S[1]-DP[0])-C[25])+C[2]*(DP[0]+
 DP[5])+C[9])+DP[8]*(C[3]*(DP[0]-S[1])+C[31]+C[2]*DP[5]))+C[2]*(DP[5]*(
 DP[14]*(S[1]-DP[0]-DP[5])+DP[13]*(DP[8]+DP[9]))+DP[8]*(DP[13]*(DP[0]-
 S[1])))+C[9]*DP[13]*DP[8]-C[13]*DP[14]*DP[5])+DP[5]*(C[14]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[1]-DP[5]))-C[16]*DP[14])+DP[12]*(
 S[1]*(DP[9]*(C[26]*S[1]-C[27])-C[9]*DP[8])+C[32]*DP[8]+C[15]*DP[9])+DP[8]*(
 DP[13]*(C[15]-C[14]*S[1])))+tmp[1]);
R=+DP[0]*(DP[5]*(DP[0]*(C[3]*(DP[6]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+
 DP[13])-DP[14]*DP[5])+DP[7]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-
 DP[14]*DP[5]))+DP[0]*(C[2]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*DP[5])+C[4]*DP[14])+C[9]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-
 DP[13])+DP[14]*DP[5])+DP[14]*(C[5]*(-DP[6]-DP[7])+C[11]))+DP[6]*(DP[6]*(
 C[2]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[4]*
 DP[14])+DP[7]*(C[3]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*
 DP[5])+C[5]*DP[14])+C[9]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-
 DP[14]*DP[5])-C[11]*DP[14])+DP[7]*(DP[7]*(C[2]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[4]*DP[14])+C[9]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])-C[11]*DP[14])+C[15]*(DP[8]*(-
 DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[17]*DP[14]))+tmp[2];
R*=(N/D)*Q2[1]*Q2[2]*Q2[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
