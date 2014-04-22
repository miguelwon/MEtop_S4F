/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F149_out;
static void C149(REAL * C)
{
REAL* V=va_out;
REAL S[11];                                                                 
     
S[0]=V[18]*V[18];
S[1]=V[17]*V[17];
S[2]=V[9]*V[9];
S[3]=V[7]*V[7]*V[7]*V[7];
C[23]=+S[3]*(V[8]*(S[1]*(-6*V[9]-V[8])+S[0]*(V[8]-6*V[9]))+S[2]*(S[0]-
 S[1]));
C[22]=+S[3]*(8*(S[0]-S[1]));
C[21]=+S[3]*(4*(S[0]-S[1]));
C[20]=+S[3]*(V[8]*(S[1]*(6*V[9]+2*V[8])+S[0]*(6*V[9]-2*V[8])));
S[4]=V[8]*V[8];
C[19]=+S[3]*(2*(S[4]*(S[1]-S[0])+S[2]*(S[0]-S[1])));
C[18]=+S[3]*(2*(S[0]-S[1]));
S[5]=V[7]*V[7];
C[17]=+S[5]*(V[8]*(S[1]*(-24*V[9]-4*V[8])+S[0]*(4*V[8]-24*V[9]))+S[2]*(4*(
 S[0]-S[1])));
C[16]=+S[5]*(32*(S[0]-S[1]));
C[15]=+S[5]*(V[8]*(S[1]*(24*V[9]+8*V[8])+S[0]*(24*V[9]-8*V[8])));
C[14]=+S[5]*(8*(S[4]*(S[1]-S[0])+S[2]*(S[0]-S[1])));
C[13]=+V[8]*(S[1]*(-24*V[9]-4*V[8])+S[0]*(4*V[8]-24*V[9]))+S[2]*(4*(S[0]-
 S[1]));
C[12]=+32*(S[0]-S[1]);
C[11]=+16*(S[0]-S[1]);
C[10]=+V[8]*(S[1]*(24*V[9]+8*V[8])+S[0]*(24*V[9]-8*V[8]));
C[9]=+8*(S[4]*(S[1]-S[0])+S[2]*(S[0]-S[1]));
C[8]=+8*(S[0]-S[1]);
C[7]=+S[5]*(V[8]*(S[1]*(-12*V[9]-2*V[8])+S[0]*(2*V[8]-12*V[9]))+S[2]*(2*(
 S[0]-S[1])));
C[6]=+S[5]*(16*(S[0]-S[1]));
C[5]=+S[5]*(8*(S[0]-S[1]));
C[4]=+S[5]*(V[8]*(S[1]*(12*V[9]+4*V[8])+S[0]*(12*V[9]-4*V[8])));
C[3]=+S[5]*(4*(S[4]*(S[1]-S[0])+S[2]*(S[0]-S[1])));
C[2]=+S[5]*(4*(S[0]-S[1]));
S[6]=V[12]*V[12];
S[7]=V[2]*V[2]*V[2]*V[2];
C[1]=+S[6]*S[7];
S[8]=V[22]*V[22];
S[9]=V[14]*V[14];
S[10]=V[1]*V[1]*V[1]*V[1];
C[0]=+12*S[8]*S[9]*S[10];
}
REAL F149_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         G                 G      !  G                 G             
       -1---@-------------3-------!---3-------------@---1-           
         P1 |              P3     !  P3             |  P1            
            |                     !                 |                
            |              N2     !  N2             |                
           G|P7         /==<======!==<==\        ~03|-PA             
            2           |  P4     !  P4 |           5                
            |           |         !     |           |                
         C  |  t     W+ |  e2     !  e2 |  W+    t  |  C             
       ==<==@==<==@-4<--@==>======!==>==@--<6-@==<==@==<==           
         P2    P8 |  P9    P5     !  P5   -PC | -PB    P2            
                  |               !           |                      
                  |        B      !  B        |                      
                  \========<======!==<========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[24];REAL S[3];REAL tmp[2];                                    
     
if(CalcConst) C149(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[23]*V[23]*V[23]*V[23];
D=+C[1]*S[1];
S[2]=V[23]*V[23];
tmp[0]=+DP[1]*(C[2]*(DP[0]*(DP[13]*(DP[3]-DP[5]+DP[6]-DP[8])+DP[14]*(DP[3]-
 DP[5]+DP[6]-DP[8])+S[2]*(DP[10]-DP[12])+DP[9]*(DP[12]-DP[10]))+DP[2]*(
 DP[13]*(DP[5]-DP[3]-DP[6]+DP[8])+DP[14]*(DP[5]-DP[3]-DP[6]+DP[8])+S[2]*(
 DP[12]-DP[10])+DP[9]*(DP[10]-DP[12]))+DP[1]*(DP[4]*(-DP[13]-DP[14])+DP[7]*
 (-DP[13]-DP[14])+DP[11]*(DP[9]-S[2])))+C[4]*(DP[13]*(DP[3]-DP[5]+DP[6]-
 DP[8])+DP[14]*(DP[3]-DP[5]+DP[6]-DP[8])+S[2]*(DP[10]-DP[12])+DP[9]*(DP[12]-
 DP[10]))+C[6]*(DP[0]*(DP[4]*(DP[13]+DP[14])+DP[7]*(DP[13]+DP[14])+DP[11]*(
 S[2]-DP[9]))+DP[2]*(DP[4]*(-DP[13]-DP[14])+DP[7]*(-DP[13]-DP[14])+DP[11]*(
 DP[9]-S[2])))+DP[11]*(C[7]*(DP[9]-S[2])+C[22]*(DP[2]-DP[0])+C[23]+C[18]*
 DP[1])+C[18]*(DP[0]*(DP[12]-DP[10])+DP[2]*(DP[10]-DP[12]))+C[7]*(DP[4]*(-
 DP[13]-DP[14])+DP[7]*(-DP[13]-DP[14]))+C[20]*(DP[12]-DP[10]));
tmp[1]=+S[2]*(DP[13]*(DP[1]*(S[2]*(C[8]*(DP[0]*(DP[6]-DP[8])+DP[2]*(DP[8]-
 DP[6])-DP[7]*DP[1])+DP[7]*(C[12]*(DP[0]-DP[2])-C[13])+C[10]*(DP[6]-DP[8]))+
 DP[0]*(C[5]*(DP[5]-DP[3])+C[2]*(DP[8]-DP[6])-C[16]*DP[4]-C[6]*DP[7])+DP[2]*
 (C[5]*(DP[3]-DP[5])+C[2]*(DP[6]-DP[8])+C[16]*DP[4]+C[6]*DP[7])+DP[1]*(C[5]*
 DP[4]+C[2]*DP[7])+C[15]*(DP[5]-DP[3])+C[4]*(DP[8]-DP[6])+C[17]*DP[4]+C[7]*
 DP[7])+DP[0]*(S[2]*(DP[7]*(C[12]*DP[2]-C[11]*DP[0])+C[9]*(DP[8]-DP[6]))+
 DP[0]*(C[6]*DP[4]+C[5]*DP[7])+DP[2]*(-C[16]*DP[4]-C[6]*DP[7])+C[14]*(DP[3]-
 DP[5])+C[3]*(DP[6]-DP[8]))+DP[2]*(S[2]*(C[9]*(DP[6]-DP[8])-C[11]*DP[7]*
 DP[2])+DP[2]*(C[6]*DP[4]+C[5]*DP[7])+C[14]*(DP[5]-DP[3])+C[3]*(DP[8]-
 DP[6])))+DP[14]*(DP[1]*(C[2]*(DP[0]*(DP[5]-DP[3])+DP[2]*(DP[3]-DP[5])+
 DP[4]*DP[1])+DP[4]*(C[6]*(DP[2]-DP[0])+C[7])+C[4]*(DP[5]-DP[3]))+DP[0]*(
 DP[4]*(C[5]*DP[0]-C[6]*DP[2])+C[3]*(DP[3]-DP[5]))+DP[2]*(C[3]*(DP[5]-
 DP[3])+C[5]*DP[4]*DP[2])));
R=+DP[1]*(DP[9]*(DP[0]*(C[3]*(DP[13]*(DP[5]-DP[3]-DP[6]+DP[8])+DP[14]*(
 DP[5]-DP[3]-DP[6]+DP[8])+S[2]*(DP[12]-DP[10])+DP[9]*(DP[10]-DP[12]))+DP[0]*
 (C[5]*(DP[4]*(-DP[13]-DP[14])+DP[7]*(-DP[13]-DP[14])+DP[11]*(DP[9]-S[2]))+
 C[21]*DP[11])+DP[2]*(C[6]*(DP[4]*(DP[13]+DP[14])+DP[7]*(DP[13]+DP[14])+
 DP[11]*(S[2]-DP[9]))-C[22]*DP[11])+C[19]*(DP[10]-DP[12]))+DP[2]*(C[3]*(
 DP[13]*(DP[3]-DP[5]+DP[6]-DP[8])+DP[14]*(DP[3]-DP[5]+DP[6]-DP[8])+S[2]*(
 DP[10]-DP[12])+DP[9]*(DP[12]-DP[10]))+DP[2]*(C[5]*(DP[4]*(-DP[13]-DP[14])+
 DP[7]*(-DP[13]-DP[14])+DP[11]*(DP[9]-S[2]))+C[21]*DP[11])+C[19]*(DP[12]-
 DP[10]))+tmp[0])+tmp[1]);
R*=(N/D)*Q2[4]*Q2[1]*Q2[2];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*-9)/(-16);
  cb_coeff_out[2] += (R*-9)/(-16);
 }
 return R;
}
