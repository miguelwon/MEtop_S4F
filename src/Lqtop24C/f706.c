/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F706_out;
static void C706(REAL * C)
{
REAL* V=va_out;
REAL S[11];                                                                 
     
S[0]=V[13]*V[13];
S[1]=V[9]*V[9];
S[2]=V[10]*V[10];
S[3]=V[8]*V[8]*V[8]*V[8];
C[136]=+S[3]*(S[1]*(S[2]*(2*(S[1]*(S[0]-S[1])+S[2]*(S[0]-S[2]))-4*S[2]*
 S[1])));
S[4]=V[8]*V[8];
C[135]=+S[4]*(S[1]*(S[2]*(4*(S[4]*(S[0]-S[2]-S[1])+S[1]*(S[0]-S[1])+S[2]*(
 S[0]-S[2]))-8*S[2]*S[1])));
C[134]=+S[4]*(S[1]*(S[2]*(16*(S[2]+S[1])+12*S[4])+4*S[1]*S[4]));
C[133]=+S[4]*(S[1]*(16*S[2]+8*S[4]));
C[132]=+S[3]*(S[1]*(S[2]*(8*(S[2]+S[1]))));
C[131]=+S[4]*(S[2]*(S[1]*(16*(S[2]+S[1])+12*S[4])+4*S[2]*S[4]));
C[130]=+S[4]*(S[2]*(8*(S[2]+S[4])+24*S[1]));
C[129]=+16*S[2]*S[1]*S[3];
C[128]=+S[4]*(S[4]*(8*(S[2]+S[1]))+32*S[2]*S[1]);
C[127]=+S[4]*(16*(S[2]+S[1])+8*S[4]);
C[126]=+8*S[2]*S[1]*S[3];
C[125]=+S[4]*(S[2]*(16*S[1]+8*S[4]));
S[5]=V[10]*V[10]*V[10]*V[10];
C[124]=+S[3]*(S[1]*(S[1]*(S[0]-11*S[2]-S[1])+S[2]*(6*S[0]-11*S[2]))+S[5]*(
 S[0]-S[2]));
C[123]=+S[4]*(S[1]*(S[1]*(2*(S[0]-S[1]-S[4])-22*S[2])+S[2]*(12*(S[0]-S[4])-
 22*S[2])+2*S[0]*S[4])+S[2]*(2*(S[2]*(S[0]-S[2]-S[4])+S[0]*S[4])));
C[122]=+S[4]*(S[1]*(48*S[2]+8*S[1]+12*S[4])+S[2]*(8*S[2]+4*S[4]));
C[121]=+S[3]*(S[1]*(24*S[2]+4*S[1])+4*S[5]);
C[120]=+S[4]*(S[1]*(48*S[2]+8*S[1]+4*S[4])+S[2]*(8*S[2]+12*S[4]));
C[119]=+S[4]*(8*(S[1]+S[4])+24*S[2]);
C[118]=+S[3]*(S[1]*(2*S[0]-16*S[2]-4*S[1])+S[2]*(2*S[0]-4*S[2]));
C[117]=+S[4]*(S[1]*(4*(S[0]-S[4])-32*S[2]-8*S[1])+S[2]*(4*(S[0]-S[4])-8*
 S[2]));
C[116]=+S[3]*(8*(S[2]+S[1]));
C[115]=+S[3]*(4*(S[2]+S[1]));
C[114]=+S[4]*(S[1]*(S[0]*(8*S[2]+4*S[4])));
C[113]=+S[4]*(S[4]*(2*(S[1]*(S[0]+S[1])+S[2]*(S[0]-S[2])))+8*S[0]*S[2]*
 S[1]);
C[112]=+S[4]*(4*(S[4]*(S[0]-S[2]+S[1])+S[1]*(S[0]+S[1])+S[2]*(S[0]-S[2])));
C[111]=+S[4]*(4*(S[4]*(S[1]-S[2])+S[0]*(S[2]+S[1])));
C[110]=+S[4]*(S[1]*(S[2]*(8*(S[1]*(S[0]-S[1])+S[2]*(S[0]-S[2]))-16*S[2]*
 S[1])));
C[109]=+S[4]*(S[1]*(S[2]*(16*(S[0]-S[2]-S[1]))));
C[108]=+S[4]*(S[1]*(48*S[2]+16*S[1]));
C[107]=+32*S[1]*S[4];
C[106]=+16*S[0]*S[1]*S[4];
C[105]=+S[1]*(S[2]*(8*(S[4]*(S[0]-S[2]-S[1])+S[1]*(S[0]-S[1])+S[2]*(S[0]-
 S[2]))-16*S[2]*S[1]));
C[104]=+S[1]*(S[2]*(16*(S[0]-S[2]-S[1])));
C[103]=+S[1]*(S[2]*(32*(S[2]+S[1])+24*S[4])+8*S[1]*S[4]);
C[102]=+S[1]*(48*S[2]+16*S[1]);
C[101]=+S[1]*(32*S[2]+16*S[4]);
C[100]=+32*S[1];
C[99]=+S[1]*(S[0]*(16*S[2]+8*S[4]));
C[98]=+16*S[0]*S[1];
C[97]=+S[4]*(S[1]*(S[2]*(32*(S[2]+S[1]))));
C[96]=+S[4]*(S[2]*(16*S[2]+48*S[1]));
C[95]=+64*S[2]*S[1]*S[4];
C[94]=+S[4]*(8*(S[1]*(S[0]+S[1])+S[2]*(S[0]-S[2])));
C[93]=+S[4]*(16*(S[0]-S[2]+S[1]));
C[92]=+S[2]*(S[1]*(32*(S[2]+S[1])+24*S[4])+8*S[2]*S[4]);
C[91]=+S[2]*(16*(S[2]+S[4])+48*S[1]);
C[90]=+S[4]*(16*(S[2]+S[1]))+64*S[2]*S[1];
C[89]=+32*(S[2]+S[1])+16*S[4];
C[88]=+S[4]*(4*(S[1]*(S[0]+S[1])+S[2]*(S[0]-S[2])))+16*S[0]*S[2]*S[1];
C[87]=+8*(S[4]*(S[0]-S[2]+S[1])+S[1]*(S[0]+S[1])+S[2]*(S[0]-S[2]));
C[86]=+16*(S[0]-S[2]+S[1]);
C[85]=+S[2]*(32*S[1]+16*S[4]);
C[84]=+S[4]*(S[1]*(S[1]*(4*(S[0]-S[1])-44*S[2])+S[2]*(24*S[0]-44*S[2]))+
 S[5]*(4*(S[0]-S[2])));
C[83]=+S[4]*(8*(S[1]*(S[0]-S[1])+S[2]*(S[0]-S[2]))-48*S[2]*S[1]);
C[82]=+S[4]*(16*S[2]+48*S[1]);
C[81]=+S[1]*(S[1]*(4*(S[0]-S[1]-S[4])-44*S[2])+S[2]*(24*(S[0]-S[4])-44*
 S[2])+4*S[0]*S[4])+S[2]*(4*(S[2]*(S[0]-S[2]-S[4])+S[0]*S[4]));
C[80]=+8*(S[1]*(S[0]-S[1])+S[2]*(S[0]-S[2]))-48*S[2]*S[1];
C[79]=+S[1]*(96*S[2]+16*S[1]+24*S[4])+S[2]*(16*S[2]+8*S[4]);
C[78]=+16*S[2]+48*S[1];
C[77]=+S[4]*(S[1]*(96*S[2]+16*S[1])+16*S[5]);
C[76]=+S[4]*(48*S[2]+16*S[1]);
C[75]=+S[1]*(96*S[2]+16*S[1]+8*S[4])+S[2]*(16*S[2]+24*S[4]);
C[74]=+16*(S[1]+S[4])+48*S[2];
C[73]=+8*(S[4]*(S[1]-S[2])+S[0]*(S[2]+S[1]));
C[72]=+S[4]*(S[1]*(8*S[0]-64*S[2]-16*S[1])+S[2]*(8*S[0]-16*S[2]));
C[71]=+S[1]*(8*(S[0]-S[4])-64*S[2]-16*S[1])+S[2]*(8*(S[0]-S[4])-16*S[2]);
C[70]=+S[4]*(32*(S[2]+S[1]));
C[69]=+32*(S[2]+S[1]);
C[68]=+16*(S[2]+S[1]);
C[67]=+S[4]*(S[1]*(S[2]*(S[0]*(16*(S[2]+S[1])))));
C[66]=+32*S[0]*S[2]*S[1]*S[4];
C[65]=+S[4]*(8*(S[1]*(S[0]-S[1])+S[2]*(S[0]+S[2])));
C[64]=+16*S[0]*S[2]*S[4];
C[63]=+32*S[2]*S[4];
C[62]=+S[4]*(S[0]*(S[1]*(48*S[2]+8*S[1])+8*S[5]));
C[61]=+S[4]*(16*(S[2]-S[1]));
C[60]=+32*S[4];
C[59]=+S[4]*(S[0]*(16*(S[2]+S[1])));
C[58]=+S[1]*(S[2]*(S[0]*(16*(S[2]+S[1]+S[4]))));
C[57]=+32*S[0]*S[2]*S[1];
C[56]=+S[4]*(4*(S[1]*(S[0]-S[1])+S[2]*(S[0]+S[2])))+16*S[0]*S[2]*S[1];
C[55]=+8*(S[1]*(S[0]-S[1])+S[2]*(S[0]+S[2]));
C[54]=+S[2]*(S[0]*(16*S[1]+8*S[4]));
C[53]=+S[2]*(16*(S[0]-S[4]));
C[52]=+32*S[2];
C[51]=+16*(S[2]-S[1]-S[4]);
S[6]=V[9]*V[9]*V[9]*V[9];
C[50]=+S[0]*(8*(S[4]*(S[2]+S[1])+S[5]+S[6])+48*S[2]*S[1]);
C[49]=+8*(S[4]*(S[2]-S[1])+S[0]*(S[2]+S[1]));
C[48]=+16*(S[2]-S[1]);
C[47]=+S[0]*(8*(S[2]+S[1]));
C[46]=+S[0]*(16*(S[2]+S[1]));
C[45]=+S[4]*(S[1]*(S[2]*(4*(S[1]*(S[0]-S[1])+S[2]*(S[0]-S[2]))-8*S[2]*
 S[1])));
C[44]=+S[4]*(S[1]*(S[2]*(8*(S[0]-S[2]-S[1]))));
C[43]=+S[4]*(S[1]*(24*S[2]+8*S[1]));
C[42]=+16*S[1]*S[4];
C[41]=+8*S[0]*S[1]*S[4];
C[40]=+S[4]*(S[1]*(S[2]*(16*(S[2]+S[1]))));
C[39]=+S[4]*(S[2]*(8*S[2]+24*S[1]));
C[38]=+32*S[2]*S[1]*S[4];
C[37]=+S[4]*(4*(S[1]*(S[0]+S[1])+S[2]*(S[0]-S[2])));
C[36]=+S[4]*(8*(S[0]-S[2]+S[1]));
C[35]=+16*S[2]*S[1]*S[4];
C[34]=+S[4]*(S[1]*(S[1]*(2*(S[0]-S[1])-22*S[2])+S[2]*(12*S[0]-22*S[2]))+
 S[5]*(2*(S[0]-S[2])));
C[33]=+S[4]*(4*(S[1]*(S[0]-S[1])+S[2]*(S[0]-S[2]))-24*S[2]*S[1]);
C[32]=+S[4]*(8*S[2]+24*S[1]);
C[31]=+S[4]*(S[1]*(48*S[2]+8*S[1])+8*S[5]);
C[30]=+S[4]*(24*S[2]+8*S[1]);
C[29]=+S[4]*(S[1]*(4*S[0]-32*S[2]-8*S[1])+S[2]*(4*S[0]-8*S[2]));
C[28]=+S[4]*(16*(S[2]+S[1]));
C[27]=+S[4]*(8*(S[2]+S[1]));
C[26]=+S[3]*(S[1]*(S[2]*(S[0]*(4*(S[2]+S[1])))));
C[25]=+S[4]*(S[1]*(S[2]*(S[0]*(8*(S[2]+S[1]+S[4])))));
C[24]=+S[4]*(S[4]*(2*(S[1]*(S[0]-S[1])+S[2]*(S[0]+S[2])))+8*S[0]*S[2]*S[1]);
C[23]=+S[4]*(S[1]*(S[2]*(S[0]*(8*(S[2]+S[1])))));
C[22]=+16*S[0]*S[2]*S[1]*S[4];
C[21]=+S[4]*(4*(S[1]*(S[0]-S[1])+S[2]*(S[0]+S[2])));
C[20]=+4*S[0]*S[2]*S[1]*S[3];
C[19]=+S[4]*(S[2]*(S[0]*(8*S[1]+4*S[4])));
C[18]=+S[4]*(S[2]*(8*(S[0]-S[4])));
C[17]=+S[3]*(4*(S[2]-S[1]));
C[16]=+S[4]*(8*(S[2]-S[1]-S[4]));
C[15]=+8*S[0]*S[2]*S[1]*S[4];
C[14]=+8*S[0]*S[2]*S[4];
C[13]=+16*S[2]*S[4];
C[12]=+S[3]*(S[0]*(S[1]*(12*S[2]+2*S[1])+2*S[5]));
C[11]=+S[4]*(S[0]*(4*(S[4]*(S[2]+S[1])+S[5]+S[6])+24*S[2]*S[1]));
C[10]=+S[4]*(4*(S[4]*(S[2]-S[1])+S[0]*(S[2]+S[1])));
C[9]=+S[4]*(S[0]*(S[1]*(24*S[2]+4*S[1])+4*S[5]));
C[8]=+S[4]*(8*(S[2]-S[1]));
C[7]=+S[3]*(S[0]*(2*(S[2]+S[1])));
C[6]=+8*S[3];
C[5]=+S[4]*(S[0]*(4*(S[2]+S[1])));
C[4]=+16*S[4];
C[3]=+S[3]*(S[0]*(4*(S[2]+S[1])));
C[2]=+S[4]*(S[0]*(8*(S[2]+S[1])));
S[7]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[7];
S[8]=V[52]*V[52]*V[52]*V[52];
S[9]=V[48]*V[48];
S[10]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[8]*S[9]*S[10];
}
REAL F706_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                           n2     !  n2                              
                        /==>======!==>==\                            
                        |  P3     !  P3 |                            
                        |         !     |                            
         b     t     W+ |  E2     !  E2 |  W+    t     b             
       ==>==@==>==@-2>--@==<======!==<==@-->4-@==>==@==>==           
         P1 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1            
            |     |               !           |     |                
            |     |        b      !  b        |     |                
          W+|P7   \========>======!==>========/   W+|-PA             
            1              P6     !  P6             3                
            |                     !                 |                
         S  |              C      !  C              |  S             
       ==<==@==============<======!==<==============@==<==           
         P2                P5     !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[137];REAL S[2];REAL tmp[7];                                   
     
if(CalcConst) C706(C);
N=+C[0];
S[0]=V[53]*V[53]*V[53]*V[53]*V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
tmp[0]=+DP[12]*(C[8]*(DP[0]*(-DP[2]-DP[4]-DP[8]-DP[9])+DP[2]*(DP[6]+DP[7])+
 DP[4]*(DP[6]+DP[7]))+DP[1]*(C[13]*DP[6]-C[39]-C[28]*DP[0]+C[30]*DP[7])+
 DP[3]*(C[13]*DP[6]-C[39]-C[28]*DP[0]+C[30]*DP[7])+C[37]*(DP[2]+DP[4])+
 C[14]*(-DP[8]-DP[9]))+DP[13]*(C[8]*(DP[0]*(-DP[2]-DP[4]-DP[8]-DP[9])+DP[2]*
 (DP[6]+DP[7])+DP[4]*(DP[6]+DP[7]))+DP[1]*(C[13]*DP[6]-C[39]-C[28]*DP[0]+
 C[30]*DP[7])+DP[3]*(C[13]*DP[6]-C[39]-C[28]*DP[0]+C[30]*DP[7])+C[37]*(
 DP[2]+DP[4])+C[14]*(-DP[8]-DP[9]))+DP[10]*(DP[7]*(C[28]*(DP[7]-DP[0])+
 C[27]*DP[6]-C[120]-C[30]*DP[5])+DP[5]*(C[39]+C[28]*DP[0]-C[13]*DP[6])+
 C[131]+C[128]*DP[0]-C[125]*DP[6])+DP[11]*(DP[5]*(C[8]*(DP[0]-DP[6]-DP[7])-
 C[37])+C[17]*(DP[0]-DP[6])+C[111]*DP[7]-C[113])+DP[14]*(DP[0]*(C[17]+C[8]*
 DP[5])+C[19]+C[14]*DP[5]-C[5]*DP[7]);
tmp[1]=+DP[0]*(DP[7]*(C[32]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*(DP[5]-S[1]))+C[8]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*(DP[5]-S[1]))+DP[10]*(C[122]+C[27]*DP[0]-C[28]*DP[7])+C[10]*DP[14]-
 C[5]*DP[11])+DP[0]*(C[42]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+
 DP[10]*(S[1]-DP[5]))+C[8]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+
 DP[14]*(S[1]-DP[5]))-C[133]*DP[10]-C[17]*DP[14])+DP[12]*(C[43]*(DP[1]+
 DP[3])+C[41]*(-DP[2]-DP[4])+C[21]*(DP[8]+DP[9]))+DP[13]*(C[43]*(DP[1]+
 DP[3])+C[41]*(-DP[2]-DP[4])+C[21]*(DP[8]+DP[9]))+S[1]*(C[43]*DP[10]-C[41]*
 DP[11]+C[21]*DP[14])+DP[5]*(C[41]*DP[11]-C[43]*DP[10]-C[21]*DP[14])+C[114]*
 DP[11]-C[134]*DP[10]-C[24]*DP[14])+DP[7]*(C[2]*(DP[12]*(DP[2]+DP[4]-DP[8]-
 DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[11]*(S[1]-DP[5]+DP[7])+DP[14]*(
 DP[5]-S[1]-DP[7]))+DP[7]*(C[27]*(DP[10]*(S[1]-DP[5]+DP[7])+DP[1]*(DP[12]+
 DP[13])+DP[3]*(DP[12]+DP[13]))+C[117]*DP[10])+C[33]*(DP[1]*(DP[12]+DP[13])+
 DP[3]*(DP[12]+DP[13])+DP[10]*(S[1]-DP[5]))+C[11]*(DP[14]-DP[11])-C[123]*
 DP[10])+C[22]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+
 DP[9])+S[1]*(DP[14]-DP[11])+DP[5]*(DP[11]-DP[14]))+C[44]*(DP[1]*(-DP[12]-
 DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[1]))+C[25]*(DP[11]-DP[14])+
 C[135]*DP[10];
tmp[2]=+S[1]*(DP[6]*(S[1]*(S[1]*(32*(DP[0]*(DP[3]-DP[9])+DP[7]*(DP[9]-
 DP[3])+DP[6]*DP[4])+C[52]*(DP[3]-DP[9])-C[86]*DP[4])+DP[0]*(C[60]*(DP[8]-
 DP[1])-C[89]*DP[3]-C[48]*DP[4]-C[51]*DP[9])+DP[7]*(C[60]*(DP[1]-DP[8])+
 C[74]*DP[3]+C[48]*DP[4]-C[4]*DP[9])+DP[6]*(C[52]*DP[3]-C[60]*DP[2]+C[51]*
 DP[4])+C[63]*(DP[8]-DP[1])+C[93]*DP[2]-C[91]*DP[3]+C[87]*DP[4]-C[53]*
 DP[9])+DP[7]*(DP[3]*(C[69]*(DP[7]-DP[0])+C[68]*DP[6]-C[75])+C[73]*DP[4]-
 C[76]*DP[1]-C[61]*DP[2]-C[47]*DP[9])+DP[0]*(C[61]*(DP[2]+DP[8])+C[8]*(
 DP[4]+DP[9])+C[70]*DP[1]+C[90]*DP[3])+DP[6]*(-C[63]*DP[1]-C[61]*DP[2]-
 C[85]*DP[3]-C[8]*DP[4])+C[96]*DP[1]-C[94]*DP[2]+C[92]*DP[3]-C[88]*DP[4]+
 C[64]*DP[8]+C[54]*DP[9])+DP[0]*(DP[7]*(DP[3]*(C[79]-C[78]*S[1]+C[68]*DP[0]-
 C[69]*DP[7])+DP[9]*(C[49]-C[48]*S[1])+C[82]*DP[1]-C[47]*DP[4]+C[61]*DP[8])+
 DP[0]*(S[1]*(C[100]*DP[3]+C[48]*DP[9])-C[107]*DP[1]-C[101]*DP[3]-C[61]*
 DP[8]-C[8]*DP[9])+S[1]*(C[102]*DP[3]-C[98]*DP[4]+C[55]*DP[9])+C[106]*DP[2]-
 C[108]*DP[1]-C[103]*DP[3]+C[99]*DP[4]-C[65]*DP[8]-C[56]*DP[9])+DP[7]*(
 DP[7]*(DP[3]*(C[68]*(S[1]+DP[7])+C[71])+C[46]*(DP[4]-DP[9])-C[28]*DP[1])+
 S[1]*(C[46]*(DP[4]-DP[9])+C[80]*DP[3])+C[59]*(DP[8]-DP[2])+C[50]*(DP[9]-
 DP[4])-C[83]*DP[1]-C[81]*DP[3])+S[1]*(C[57]*(DP[9]-DP[4])-C[104]*DP[3])+
 C[66]*(DP[2]-DP[8])+C[58]*(DP[4]-DP[9])+C[109]*DP[1]+C[105]*DP[3]);
tmp[3]=+DP[13]*(S[1]*(DP[6]*(S[1]*(C[4]*(DP[0]*(DP[8]-DP[1])+DP[7]*(DP[1]-
 DP[8])-DP[6]*DP[2])+C[13]*(DP[8]-DP[1])+C[36]*DP[2])+DP[1]*(C[39]+C[28]*
 DP[0]-C[13]*DP[6]-C[30]*DP[7])+DP[2]*(C[8]*(DP[0]-DP[6]-DP[7])-C[37])+
 DP[8]*(C[14]+C[8]*DP[0]))+DP[0]*(DP[1]*(C[32]*DP[7]-C[43]-C[42]*DP[0])+
 DP[8]*(C[8]*(DP[7]-DP[0])-C[21])+C[41]*DP[2])+DP[7]*(DP[1]*(-C[33]-C[27]*
 DP[7])+C[2]*(DP[8]-DP[2]))+C[22]*(DP[2]-DP[8])+C[44]*DP[1])+DP[7]*(DP[1]*(
 DP[0]*(C[28]*(DP[6]+DP[7])-C[31]-C[27]*DP[0])+DP[6]*(C[31]-C[27]*DP[6]-
 C[28]*DP[7])+DP[7]*(-C[29]-C[27]*DP[7])+C[34])+DP[2]*(C[5]*(DP[0]-DP[6])+
 C[9]-C[2]*DP[7])+DP[8]*(C[5]*(DP[6]-DP[0])+C[2]*DP[7]-C[9]))+DP[1]*(DP[0]*(
 C[40]+C[35]*DP[0]-C[38]*DP[6])+DP[6]*(C[35]*DP[6]-C[40])-C[45])+C[15]*(
 DP[0]*(DP[8]-DP[2])+DP[6]*(DP[2]-DP[8]))+C[23]*(DP[8]-DP[2]));
tmp[4]=+DP[12]*(DP[7]*(DP[0]*(DP[1]*(C[70]*(DP[6]+DP[7])-C[77]-C[28]*DP[0])+
 DP[3]*(C[28]*(DP[6]+DP[7])-C[31]-C[27]*DP[0])+C[2]*(DP[2]-DP[8])+C[5]*(
 DP[4]-DP[9]))+DP[6]*(DP[1]*(C[77]-C[28]*DP[6]-C[70]*DP[7])+DP[3]*(C[31]-
 C[27]*DP[6]-C[28]*DP[7])+C[2]*(DP[8]-DP[2])+C[5]*(DP[9]-DP[4]))+DP[7]*(
 DP[1]*(-C[72]-C[28]*DP[7])+DP[3]*(-C[29]-C[27]*DP[7])+C[59]*(DP[8]-DP[2])+
 C[2]*(DP[9]-DP[4]))+C[62]*(DP[2]-DP[8])+C[9]*(DP[4]-DP[9])+C[84]*DP[1]+
 C[34]*DP[3])+DP[0]*(DP[1]*(C[97]+C[38]*DP[0]-C[95]*DP[6])+DP[3]*(C[40]+
 C[35]*DP[0]-C[38]*DP[6])+C[22]*(DP[8]-DP[2])+C[15]*(DP[9]-DP[4]))+DP[6]*(
 DP[1]*(C[38]*DP[6]-C[97])+DP[3]*(C[35]*DP[6]-C[40])+C[22]*(DP[2]-DP[8])+
 C[15]*(DP[4]-DP[9]))+C[67]*(DP[8]-DP[2])+C[23]*(DP[9]-DP[4])-C[110]*DP[1]-
 C[45]*DP[3]+tmp[2])+tmp[3];
tmp[5]=+DP[7]*(DP[0]*(DP[12]*(DP[1]*(C[28]*(-DP[6]-DP[7])+C[31]+C[27]*
 DP[0])+DP[3]*(C[28]*(-DP[6]-DP[7])+C[31]+C[27]*DP[0])+C[5]*(DP[8]-DP[2]-
 DP[4]+DP[9]))+DP[13]*(DP[1]*(C[28]*(-DP[6]-DP[7])+C[31]+C[27]*DP[0])+DP[3]*
 (C[28]*(-DP[6]-DP[7])+C[31]+C[27]*DP[0])+C[5]*(DP[8]-DP[2]-DP[4]+DP[9]))+
 DP[10]*(DP[5]*(C[28]*(DP[6]+DP[7])-C[31]-C[27]*DP[0])+C[116]*(DP[6]+DP[7])-
 C[121]-C[115]*DP[0])+DP[5]*(C[5]*(DP[11]-DP[14]))+C[7]*(DP[11]-DP[14]))+
 DP[6]*(DP[12]*(C[5]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[1]*(C[27]*DP[6]-C[31]+
 C[28]*DP[7])+DP[3]*(C[27]*DP[6]-C[31]+C[28]*DP[7]))+DP[13]*(C[5]*(DP[2]+
 DP[4]-DP[8]-DP[9])+DP[1]*(C[27]*DP[6]-C[31]+C[28]*DP[7])+DP[3]*(C[27]*
 DP[6]-C[31]+C[28]*DP[7]))+DP[10]*(DP[5]*(C[31]-C[27]*DP[6]-C[28]*DP[7])+
 C[121]-C[115]*DP[6]-C[116]*DP[7])+DP[5]*(C[5]*(DP[14]-DP[11]))+C[7]*(
 DP[14]-DP[11]))+DP[7]*(C[2]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(
 DP[2]+DP[4]-DP[8]-DP[9])+DP[5]*(DP[14]-DP[11]))+DP[7]*(C[27]*(DP[1]*(
 DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])-C[115]*DP[10])+C[29]*(
 DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[3]*(DP[14]-
 DP[11])-C[118]*DP[10])+C[9]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(
 DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(DP[11]-DP[14]))+C[34]*(DP[1]*(-DP[12]-
 DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[12]*(DP[11]-DP[14])+C[124]*
 DP[10]);
tmp[6]=+DP[5]*(DP[0]*(DP[12]*(C[15]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[1]*(C[38]*
 DP[6]-C[40]-C[35]*DP[0])+DP[3]*(C[38]*DP[6]-C[40]-C[35]*DP[0]))+DP[13]*(
 C[15]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[1]*(C[38]*DP[6]-C[40]-C[35]*DP[0])+
 DP[3]*(C[38]*DP[6]-C[40]-C[35]*DP[0]))+DP[10]*(DP[5]*(C[40]+C[35]*DP[0]-
 C[38]*DP[6])+C[132]+C[126]*DP[0]-C[129]*DP[6])+DP[5]*(C[15]*(DP[14]-
 DP[11]))+C[20]*(DP[14]-DP[11]))+DP[6]*(C[15]*(DP[12]*(DP[8]-DP[2]-DP[4]+
 DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(DP[11]-DP[14]))+DP[6]*(
 C[35]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[126]*
 DP[10])+C[40]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+
 C[20]*(DP[11]-DP[14])-C[132]*DP[10])+C[23]*(DP[12]*(DP[2]+DP[4]-DP[8]-
 DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[5]*(DP[14]-DP[11]))+C[45]*(
 DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[26]*(DP[14]-
 DP[11])-C[136]*DP[10]+tmp[5]);
R=+S[1]*(DP[5]*(DP[6]*(S[1]*(C[4]*(DP[0]*(DP[12]*(DP[1]+DP[3]-DP[8]-DP[9])+
 DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+S[1]*(DP[10]-DP[14])+DP[5]*(DP[14]-
 DP[10]))+DP[7]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(DP[8]-DP[1]-DP[3]+
 DP[9])+S[1]*(DP[14]-DP[10])+DP[5]*(DP[10]-DP[14]))+DP[6]*(DP[2]*(DP[12]+
 DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[1]-DP[5])))+C[13]*(DP[12]*(DP[1]+
 DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[10]*(S[1]-DP[5]+
 DP[6])+DP[14]*(DP[5]-S[1]))+DP[11]*(C[36]*(DP[5]-S[1])+C[8]*(DP[7]-DP[0])+
 C[112]+C[16]*DP[6])+C[36]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13]))+
 DP[10]*(C[119]*DP[7]-C[130]-C[127]*DP[0])+DP[14]*(-C[18]-C[16]*DP[0]-C[6]*
 DP[7]))+tmp[0])+tmp[1])+tmp[4])+tmp[6];
R*=(N/D)*Q2[3]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*1)/(1);
 }
 return R;
}
