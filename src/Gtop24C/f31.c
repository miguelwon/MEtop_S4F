/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F31_out;
static void C31(REAL * C)
{
REAL* V=va_out;
REAL S[10];                                                                 
     
S[0]=V[16]*V[16];
S[1]=V[15]*V[15];
S[2]=V[9]*V[9];
S[3]=V[7]*V[7]*V[7]*V[7];
C[30]=+S[3]*(S[2]*(2*(S[0]-S[1])));
C[29]=+S[3]*(S[2]*(5*(S[0]-S[1])));
C[28]=+S[3]*(10*(S[0]-S[1]));
C[27]=+S[3]*(4*(S[0]-S[1]));
C[26]=+S[3]*(S[2]*(S[0]-S[1]));
C[25]=+S[3]*(6*(S[0]-S[1]));
C[24]=+S[3]*(2*(S[0]-S[1]));
C[23]=+S[3]*(8*(S[0]-S[1]));
S[4]=V[7]*V[7];
C[22]=+S[4]*(S[2]*(8*(S[0]-S[1])));
C[21]=+S[4]*(S[2]*(20*(S[0]-S[1])));
C[20]=+S[4]*(40*(S[0]-S[1]));
C[19]=+S[4]*(24*(S[0]-S[1]));
C[18]=+S[4]*(32*(S[0]-S[1]));
C[17]=+S[2]*(8*(S[0]-S[1]));
C[16]=+S[2]*(20*(S[0]-S[1]));
C[15]=+40*(S[0]-S[1]);
C[14]=+16*(S[0]-S[1]);
C[13]=+S[2]*(4*(S[0]-S[1]));
C[12]=+24*(S[0]-S[1]);
C[11]=+8*(S[0]-S[1]);
C[10]=+32*(S[0]-S[1]);
C[9]=+S[4]*(S[2]*(4*(S[0]-S[1])));
C[8]=+S[4]*(S[2]*(10*(S[0]-S[1])));
C[7]=+S[4]*(20*(S[0]-S[1]));
C[6]=+S[4]*(8*(S[0]-S[1]));
C[5]=+S[4]*(S[2]*(2*(S[0]-S[1])));
C[4]=+S[4]*(12*(S[0]-S[1]));
C[3]=+S[4]*(4*(S[0]-S[1]));
C[2]=+S[4]*(16*(S[0]-S[1]));
S[5]=V[12]*V[12];
S[6]=V[2]*V[2]*V[2]*V[2];
C[1]=+S[5]*S[6];
S[7]=V[22]*V[22];
S[8]=V[13]*V[13];
S[9]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[7]*S[8]*S[9];
}
REAL F31_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         U                 G      !                                  
       ==<==@-------------1---\   !                                  
         P1 |              P3 |   !                                  
            |                 |   !                                  
            |              N2 |   !  N2                              
           u|P7         /==<==+===!==<==\                            
            |           |  P4 |   !  P4 |                            
            |           |     |   !     |                            
         G  |  t     W+ |  e2 |   !  e2 |  W+    t     U             
       -2---@==<==@-3<--@==>==+===!==>==@--<5-@==<==@==<==           
         P2    P8 |  P9    P5 |   !  P5   -PC | -PB |  P1            
                  |           |   !           |     |                
                  |        B  |   !  B        |     |                
                  \========<==+===!==<========/  ~00|-PA             
                           P6 |   !  P6             4                
                              |   !                 |                
                              |   !  G              |  G             
                              \---!---1-------------@---2-           
                                  !  P3                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[31];REAL S[3];REAL tmp[2];                                    
     
if(CalcConst) C31(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[23]*V[23]*V[23]*V[23];
D=+C[1]*S[1];
S[2]=V[23]*V[23];
tmp[0]=+DP[0]*(DP[1]*(C[4]*(DP[13]*(-DP[4]-DP[5]-DP[7]-DP[8])+DP[14]*(-
 DP[4]-DP[5]-DP[7]-DP[8])+S[2]*(-DP[11]-DP[12])+DP[9]*(DP[11]+DP[12]))+C[2]*
 (DP[3]*(DP[13]+DP[14])+DP[6]*(DP[13]+DP[14])+DP[10]*(S[2]-DP[9]))+C[25]*(
 DP[11]+DP[12])-C[23]*DP[10])+DP[2]*(C[3]*(DP[13]*(DP[3]+DP[5]+DP[6]+DP[8])+
 DP[14]*(DP[3]+DP[5]+DP[6]+DP[8])+S[2]*(DP[10]+DP[12])+DP[9]*(-DP[10]-
 DP[12]))+C[6]*(DP[4]*(-DP[13]-DP[14])+DP[7]*(-DP[13]-DP[14])+DP[11]*(DP[9]-
 S[2]))+C[24]*(-DP[10]-DP[12])+C[27]*DP[11])+DP[0]*(C[6]*(DP[4]*(DP[13]+
 DP[14])+DP[7]*(DP[13]+DP[14])+DP[11]*(S[2]-DP[9]))+C[3]*(DP[5]*(-DP[13]-
 DP[14])+DP[8]*(-DP[13]-DP[14])+DP[12]*(DP[9]-S[2]))+C[24]*DP[12]-C[27]*
 DP[11])+C[9]*(DP[3]*(DP[13]+DP[14])+DP[6]*(DP[13]+DP[14])+DP[10]*(S[2]-
 DP[9]))+C[5]*(DP[5]*(-DP[13]-DP[14])+DP[8]*(-DP[13]-DP[14])+DP[12]*(DP[9]-
 S[2]))+C[26]*DP[12]-C[30]*DP[10]);
tmp[1]=+S[2]*(DP[13]*(DP[0]*(S[2]*(DP[8]*(C[11]*(DP[2]-DP[0])-C[13]-C[12]*
 DP[1])+DP[6]*(C[17]+C[10]*DP[1]+C[11]*DP[2])+DP[7]*(C[14]*(DP[0]-DP[2])-
 C[12]*DP[1]))+DP[1]*(C[19]*(DP[4]+DP[5])+C[4]*(DP[7]+DP[8])-C[18]*DP[3]-
 C[2]*DP[6])+DP[2]*(C[6]*(DP[7]-DP[3]-DP[5])+C[3]*(-DP[6]-DP[8])+C[2]*
 DP[4])+DP[0]*(C[6]*(DP[5]-DP[7])+C[3]*DP[8]-C[2]*DP[4])+C[9]*(DP[5]-DP[6])+
 C[5]*DP[8]-C[22]*DP[3])+DP[1]*(DP[2]*(S[2]*(C[11]*DP[7]-C[15]*DP[6]+C[10]*
 DP[8])+C[20]*DP[3]-C[6]*DP[4]-C[18]*DP[5]+C[7]*DP[6]-C[3]*DP[7]-C[2]*
 DP[8])+DP[7]*(S[2]*(C[16]+C[15]*DP[1])-C[8]-C[7]*DP[1])+DP[4]*(-C[21]-
 C[20]*DP[1]))+DP[2]*(DP[6]*(S[2]*(-C[13]-C[11]*DP[2])+C[5]+C[3]*DP[2])+
 DP[3]*(C[9]+C[6]*DP[2])))+DP[14]*(DP[0]*(DP[5]*(C[3]*(DP[0]-DP[2])+C[5]+
 C[4]*DP[1])+DP[3]*(-C[9]-C[2]*DP[1]-C[3]*DP[2])+DP[4]*(C[6]*(DP[2]-DP[0])+
 C[4]*DP[1]))+DP[1]*(DP[2]*(C[7]*DP[3]-C[3]*DP[4]-C[2]*DP[5])+DP[4]*(-C[8]-
 C[7]*DP[1]))+DP[2]*(DP[3]*(C[5]+C[3]*DP[2]))));
R=+DP[2]*(DP[9]*(DP[1]*(DP[2]*(DP[13]*(C[7]*(-DP[3]-DP[6])+C[3]*(DP[4]+
 DP[7])+C[2]*(DP[5]+DP[8]))+DP[14]*(C[7]*(-DP[3]-DP[6])+C[3]*(DP[4]+DP[7])+
 C[2]*(DP[5]+DP[8]))+S[2]*(C[3]*DP[11]-C[7]*DP[10]+C[2]*DP[12])+DP[9]*(C[7]*
 DP[10]-C[3]*DP[11]-C[2]*DP[12])+C[28]*DP[10]-C[24]*DP[11]-C[23]*DP[12])+
 DP[1]*(C[7]*(DP[4]*(DP[13]+DP[14])+DP[7]*(DP[13]+DP[14])+DP[11]*(S[2]-
 DP[9]))-C[28]*DP[11])+C[8]*(DP[4]*(DP[13]+DP[14])+DP[7]*(DP[13]+DP[14])+
 DP[11]*(S[2]-DP[9]))-C[29]*DP[11])+DP[2]*(DP[2]*(C[3]*(DP[3]*(-DP[13]-
 DP[14])+DP[6]*(-DP[13]-DP[14])+DP[10]*(DP[9]-S[2]))+C[24]*DP[10])+C[5]*(
 DP[3]*(-DP[13]-DP[14])+DP[6]*(-DP[13]-DP[14])+DP[10]*(DP[9]-S[2]))+C[26]*
 DP[10])+tmp[0])+tmp[1]);
R*=(N/D)*Q1[5]*Q2[1]*Q2[2]*Q1[7];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*-9)/(-8);
 }
 return R;
}
