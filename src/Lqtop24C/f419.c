/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F419_out;
static void C419(REAL * C)
{
REAL* V=va_out;
REAL S[10];                                                                 
     
S[0]=V[9]*V[9];
S[1]=V[8]*V[8];
C[36]=+S[1]*(16*S[0]+8*S[1]);
S[2]=V[9]*V[9]*V[9]*V[9]*V[9]*V[9];
S[3]=V[8]*V[8]*V[8]*V[8];
C[35]=+S[2]*S[3];
S[4]=V[9]*V[9]*V[9]*V[9];
C[34]=+S[4]*(S[1]*(2*(S[0]+S[1])));
C[33]=+S[1]*(S[0]*(8*S[0]+12*S[1]));
C[32]=+4*S[4]*S[3];
C[31]=+S[1]*(S[0]*(8*S[0]+4*S[1]));
C[30]=+8*S[0]*S[3];
C[29]=+8*S[3];
C[28]=+16*S[4];
C[27]=+32*S[0]+16*S[1];
C[26]=+4*S[2]*S[1];
C[25]=+S[4]*(4*(S[0]+S[1]));
C[24]=+8*S[4];
C[23]=+48*S[0]*S[1];
C[22]=+S[0]*(16*S[0]+24*S[1]);
C[21]=+48*S[0];
C[20]=+16*S[4]*S[1];
C[19]=+S[0]*(16*S[0]+8*S[1]);
C[18]=+32*S[0]*S[1];
C[17]=+32*S[0];
C[16]=+32*S[1];
C[15]=+S[0]*(8*(S[0]+S[1]));
C[14]=+16*(S[0]+S[1]);
C[13]=+16*S[0];
C[12]=+2*S[2]*S[1];
C[11]=+24*S[0]*S[1];
C[10]=+8*S[4]*S[1];
C[9]=+16*S[0]*S[1];
C[8]=+2*S[4]*S[3];
C[7]=+S[1]*(S[0]*(4*(S[0]+S[1])));
C[6]=+S[1]*(8*(S[0]+S[1]));
C[5]=+4*S[4]*S[1];
C[4]=+16*S[1];
C[3]=+4*S[0]*S[3];
C[2]=+8*S[0]*S[1];
S[5]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[5];
S[6]=V[52]*V[52];
S[7]=V[50]*V[50];
S[8]=V[47]*V[47];
S[9]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[6]*S[7]*S[8]*S[9];
}
REAL F419_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                           N2     !  N2                              
                        /==<======!==<==\                            
                        |  P3     !  P3 |                            
                        |         !     |                            
         D     t     W+ |  e2     !  e2 |  W+    t     D             
       ==<==@==<==@-2<--@==>======!==>==@--<4-@==<==@==<==           
         P1 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1            
            |     |               !           |     |                
            |     |        B      !  B        |     |                
          W+|P7   \========<======!==<========/   W+|-PA             
            1              P6     !  P6             3                
            |                     !                 |                
         C  |              D      !  D              |  C             
       ==<==@==============<======!==<==============@==<==           
         P2                P5     !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[37];REAL S[2];REAL tmp[3];                                    
     
if(CalcConst) C419(C);
N=+C[0];
S[0]=V[53]*V[53]*V[53]*V[53]*V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
tmp[0]=+S[1]*(DP[12]*(S[1]*(DP[6]*(S[1]*(32*(DP[3]+DP[4]))+C[16]*(-DP[1]-
 DP[2])-C[27]*DP[3]-C[14]*DP[4]-C[13]*DP[9])+DP[7]*(S[1]*(32*(DP[3]+DP[4]))+
 C[16]*(-DP[1]-DP[2])-C[14]*DP[3]-C[4]*DP[4]-C[13]*DP[9])+DP[9]*(S[1]*(-
 C[13]-32*DP[0])+C[15]+C[14]*DP[0])+DP[8]*(C[9]+C[16]*DP[0]))+DP[5]*(C[4]*(
 DP[6]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[7]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[0]*(-
 DP[8]-DP[9]))+C[2]*(-DP[8]-DP[9]))+DP[6]*(C[9]*(DP[2]+DP[3]+DP[8])+C[2]*(
 DP[4]+DP[9])+C[18]*DP[1]-C[17]*DP[7]*DP[3])+DP[7]*(DP[3]*(C[19]+C[13]*
 DP[0]-C[17]*DP[7])+C[9]*(DP[1]+DP[8])+C[2]*DP[9])+DP[0]*(-C[9]*DP[8]-C[2]*
 DP[9])-C[10]*DP[8]-C[5]*DP[9])+DP[5]*(C[4]*(DP[13]*(DP[6]*(DP[1]+DP[2]+
 DP[3]+DP[4])+DP[7]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[0]*(-DP[8]-DP[9]))+S[1]*(
 DP[6]*(DP[10]+DP[11])+DP[7]*(DP[10]+DP[11])-DP[14]*DP[0])+DP[5]*(DP[6]*(-
 DP[10]-DP[11])+DP[7]*(-DP[10]-DP[11])+DP[14]*DP[0]))+DP[14]*(C[2]*(DP[5]-
 S[1]-DP[6]-DP[7])+C[7]+C[6]*DP[0])+DP[6]*(-C[36]*DP[10]-C[6]*DP[11])+DP[7]*
 (-C[6]*DP[10]-C[29]*DP[11])+DP[13]*(C[2]*(-DP[8]-DP[9])))+DP[13]*(S[1]*(
 C[4]*(DP[1]*(-DP[6]-DP[7])+DP[2]*(-DP[6]-DP[7])+DP[8]*DP[0])+C[2]*DP[8])+
 C[2]*(DP[8]*(DP[6]-DP[0]+DP[7])+DP[6]*DP[2]+DP[7]*DP[1])+C[9]*DP[6]*DP[1]-
 C[5]*DP[8]));
tmp[1]=+DP[6]*(DP[5]*(DP[7]*(C[2]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+
 DP[13])+DP[11]*(S[1]-DP[5])+DP[10]*DP[6])+C[11]*(DP[1]*(DP[12]+DP[13])+
 DP[3]*(DP[12]+DP[13])+DP[10]*(S[1]-DP[5]))+DP[10]*(C[9]*DP[7]-C[33])-C[3]*
 DP[11])+DP[6]*(C[9]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(
 S[1]-DP[5]))+C[2]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(
 S[1]-DP[5]))-C[30]*DP[10]-C[3]*DP[11])+C[10]*(DP[1]*(-DP[12]-DP[13])+DP[3]*
 (-DP[12]-DP[13])+DP[10]*(DP[5]-S[1]))+C[5]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-
 DP[12]-DP[13])+DP[11]*(DP[5]-S[1]))+C[32]*DP[10]+C[8]*DP[11])+S[1]*(DP[12]*
 (DP[3]*(DP[7]*(C[21]*S[1]-C[22]+C[13]*DP[6]+C[17]*DP[7])+S[1]*(C[17]*DP[6]-
 C[28])+C[10]-C[9]*DP[6])+DP[4]*(S[1]*(C[13]*(DP[6]+DP[7])-C[24])+C[2]*(-
 DP[6]-DP[7])+C[5])+DP[1]*(C[20]-C[18]*DP[6]-C[23]*DP[7])+DP[2]*(C[9]*(-
 DP[6]-DP[7])+C[10]))+DP[13]*(DP[1]*(C[10]-C[9]*DP[6]-C[11]*DP[7])+DP[2]*(
 C[2]*(-DP[6]-DP[7])+C[5])))+DP[7]*(DP[1]*(DP[12]*(C[20]-C[9]*DP[6]-C[18]*
 DP[7])+DP[13]*(C[10]-C[2]*DP[6]-C[9]*DP[7]))+DP[3]*(DP[12]*(C[10]-C[2]*
 DP[6]-C[9]*DP[7]))));
tmp[2]=+S[1]*(DP[0]*(DP[5]*(C[2]*(DP[7]*(DP[12]*(-DP[1]-DP[3]-DP[8]-DP[9])+
 DP[13]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[5]*(DP[10]+DP[14])+DP[10]*DP[0])+
 DP[6]*(DP[12]*(-DP[2]-DP[4]-DP[8]-DP[9])+DP[13]*(-DP[2]-DP[4]-DP[8]-DP[9])+
 DP[5]*(DP[11]+DP[14]))+DP[0]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-
 DP[14]*DP[5]))+DP[6]*(C[9]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*(DP[5]-DP[7]))+C[3]*(DP[11]+DP[14])+C[30]*DP[10])+C[5]*(DP[8]*(
 DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+DP[7]*(DP[10]*(C[31]-
 C[9]*DP[7])+C[3]*DP[14])+DP[14]*(-C[8]-C[3]*DP[0]))+DP[7]*(DP[1]*(DP[12]*(
 C[18]*(DP[6]+DP[7])-C[20]-C[9]*DP[0])+DP[13]*(C[9]*(DP[6]+DP[7])-C[10]-
 C[2]*DP[0]))+DP[3]*(DP[12]*(C[9]*(DP[6]+DP[7])-C[10]-C[2]*DP[0])))+tmp[0])+
 DP[7]*(DP[7]*(DP[12]*(DP[3]*(S[1]*(C[13]*(S[1]+DP[7])-C[19])+C[2]*(DP[5]-
 DP[7])+C[10])+DP[1]*(C[9]*(-S[1]-DP[7])+C[20]+C[2]*DP[5]))+C[2]*(DP[5]*(
 DP[10]*(S[1]-DP[5]+DP[7])+DP[13]*(DP[1]+DP[3]))+DP[1]*(DP[13]*(-S[1]-
 DP[7])))+C[10]*DP[13]*DP[1]-C[31]*DP[10]*DP[5])+DP[5]*(C[5]*(DP[1]*(-
 DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[1]))+C[34]*DP[10])+
 DP[12]*(S[1]*(DP[3]*(C[25]-C[24]*S[1])+C[10]*DP[1])-C[26]*DP[1]-C[12]*
 DP[3])+DP[1]*(DP[13]*(C[5]*S[1]-C[12])))+tmp[1]);
R=+DP[5]*(DP[7]*(DP[0]*(C[9]*(DP[6]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*DP[5])+DP[7]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*DP[5]))+DP[0]*(C[2]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-
 DP[10]*DP[5])-C[3]*DP[10])+C[10]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+
 DP[13])-DP[10]*DP[5])+DP[10]*(C[30]*(DP[6]+DP[7])-C[32]))+DP[6]*(DP[1]*(
 DP[12]*(C[2]*DP[6]-C[10]+C[9]*DP[7])+DP[13]*(C[2]*DP[6]-C[10]+C[9]*DP[7]))+
 DP[3]*(DP[12]*(C[2]*DP[6]-C[10]+C[9]*DP[7])+DP[13]*(C[2]*DP[6]-C[10]+C[9]*
 DP[7]))+DP[10]*(DP[5]*(C[10]-C[2]*DP[6]-C[9]*DP[7])+C[32]-C[3]*DP[6]-C[30]*
 DP[7]))+DP[7]*(DP[7]*(C[2]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-
 DP[10]*DP[5])-C[3]*DP[10])+C[10]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*DP[5])+C[32]*DP[10])+C[12]*(DP[1]*(DP[12]+DP[13])+DP[3]*(
 DP[12]+DP[13])-DP[10]*DP[5])-C[35]*DP[10]))+tmp[2];
R*=(N/D)*Q2[4]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*1)/(1);
 }
 return R;
}
