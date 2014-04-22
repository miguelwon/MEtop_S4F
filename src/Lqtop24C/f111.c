/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F111_out;
static void C111(REAL * C)
{
REAL* V=va_out;
REAL S[11];                                                                 
     
S[0]=V[38]*V[38];
S[1]=V[37]*V[37];
S[2]=V[8]*V[8];
C[13]=+S[2]*(V[9]*(V[11]*(8*(S[0]-S[1]))));
S[3]=V[11]*V[11];
S[4]=V[9]*V[9];
C[12]=+S[2]*(V[37]*(S[4]*(8*V[38]-4*V[37])+S[3]*(8*V[38]+4*V[37]))+S[0]*(4*(
 S[3]-S[4])));
C[11]=+S[2]*(V[37]*(8*V[37]-16*V[38])+8*S[0]);
C[10]=+V[9]*(V[11]*(8*(S[0]-S[1])));
C[9]=+V[37]*(S[4]*(8*V[38]-4*V[37])+S[3]*(8*V[38]+4*V[37]))+S[0]*(4*(S[3]-
 S[4]));
C[8]=+V[37]*(8*V[37]-16*V[38])+8*S[0];
S[5]=V[8]*V[8]*V[8]*V[8];
C[7]=+S[5]*(V[9]*(V[11]*(2*(S[0]-S[1]))));
C[6]=+S[2]*(V[9]*(V[11]*(4*(S[0]-S[1]))));
C[5]=+S[5]*(V[37]*(S[4]*(2*V[38]-V[37])+S[3]*(2*V[38]+V[37]))+S[0]*(S[3]-
 S[4]));
C[4]=+S[5]*(V[37]*(2*V[37]-4*V[38])+2*S[0]);
C[3]=+S[2]*(V[37]*(S[4]*(4*V[38]-2*V[37])+S[3]*(4*V[38]+2*V[37]))+S[0]*(2*(
 S[3]-S[4])));
C[2]=+S[2]*(V[37]*(4*V[37]-8*V[38])+4*S[0]);
S[6]=V[14]*V[14];
S[7]=V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[6]*S[7];
S[8]=V[52]*V[52];
S[9]=V[16]*V[16];
S[10]=V[1]*V[1]*V[1]*V[1];
C[0]=+32*S[8]*S[9]*S[10];
}
REAL F111_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         u                 u      !  u                 u             
       ==>==@==============>======!==>==============@==>==           
         P1 |              P5     !  P5             |  P1            
            |                     !                 |                
            |              n2     !  n2             |                
           G|P7         /==>======!==>==\          G|-PA             
            1           |  P3     !  P3 |           3                
            |           |         !     |           |                
         c  |  t     W+ |  E2     !  E2 |  W+    t  |  c             
       ==>==@==>==@-2>--@==<======!==<==@-->4-@==>==@==>==           
         P2    P8 |  P9    P4     !  P4   -PC | -PB    P2            
                  |               !           |                      
                  |        b      !  b        |                      
                  \========>======!==>========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[14];REAL S[4];REAL tmp[1];                                    
     
if(CalcConst) C111(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[1];
S[2]=V[53]*V[53];
S[3]=DP[7]*DP[7];
tmp[0]=+DP[5]*(C[2]*(DP[0]*(DP[0]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(
 DP[2]+DP[4]-DP[8]-DP[9])+S[2]*(DP[11]-DP[14])+DP[5]*(DP[14]-DP[11]))+DP[6]*
 (DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+S[2]*(
 DP[14]-DP[11])+DP[5]*(DP[11]-DP[14]))+DP[7]*(DP[12]*(DP[1]+DP[3]-DP[8]-
 DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+S[2]*(DP[10]-DP[14])+DP[5]*(DP[14]-
 DP[10])))+DP[7]*(DP[6]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+
 DP[2]+DP[3]+DP[4])+S[2]*(DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))+DP[7]*(
 DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+S[2]*(
 DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))))+DP[6]*(C[6]*(DP[12]*(DP[8]-DP[1]-
 DP[2]-DP[3]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[1]-DP[2]-DP[3]-DP[4]+DP[9])+S[2]*
 (DP[14]-DP[10]-DP[11])+DP[5]*(DP[10]+DP[11]-DP[14]))+C[4]*(DP[0]*(DP[11]-
 DP[14])+DP[7]*(-DP[10]-DP[11]))+C[7]*(DP[10]+DP[11]-DP[14]))+C[3]*(DP[0]*(
 DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[2]-DP[5]))+DP[7]*(
 DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[2]-DP[5])))+C[4]*(
 DP[0]*(DP[0]*(DP[14]-DP[11])+DP[7]*(DP[14]-DP[10]))+S[3]*(-DP[10]-DP[11]))+
 C[5]*(-DP[10]*DP[0]-DP[14]*DP[7]));
R=+DP[6]*(S[2]*(DP[12]*(DP[0]*(S[2]*(C[8]*(DP[9]*(DP[6]-DP[0]-DP[7])+DP[4]*(
 DP[0]-DP[6])+DP[7]*DP[3])+C[9]*DP[3])+C[11]*(DP[8]*(DP[0]-DP[6]+DP[7])+
 DP[2]*(DP[6]-DP[0])-DP[7]*DP[1])+C[2]*(DP[9]*(DP[0]-DP[6]+DP[7])+DP[4]*(
 DP[6]-DP[0])-DP[7]*DP[3])-C[12]*DP[1]-C[3]*DP[3])+DP[6]*(DP[7]*(S[2]*(C[8]*
 (DP[3]+DP[4]))+C[11]*(-DP[1]-DP[2])+C[2]*(-DP[3]-DP[4]))+S[2]*(C[10]*(
 DP[9]-DP[3]-DP[4]))+C[13]*(DP[1]+DP[2]-DP[8])+C[6]*(DP[3]+DP[4]-DP[9]))+
 DP[7]*(DP[7]*(S[2]*(C[8]*(DP[3]+DP[4]))+C[11]*(-DP[1]-DP[2])+C[2]*(-DP[3]-
 DP[4]))+DP[9]*(C[9]*S[2]-C[3])-C[12]*DP[8]))+DP[13]*(C[2]*(DP[0]*(DP[8]*(
 DP[0]-DP[6]+DP[7])+DP[2]*(DP[6]-DP[0])-DP[7]*DP[1])+DP[7]*(DP[1]*(-DP[6]-
 DP[7])+DP[2]*(-DP[6]-DP[7])))+DP[6]*(C[6]*(DP[1]+DP[2]-DP[8]))+C[3]*(-
 DP[1]*DP[0]-DP[8]*DP[7])))+tmp[0]);
R*=(N/D)*Q2[3]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*9)/(8);
 }
 return R;
}
