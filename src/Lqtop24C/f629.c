/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F629_out;
static void C629(REAL * C)
{
REAL* V=va_out;
REAL S[12];                                                                 
     
S[0]=V[9]*V[9];
S[1]=V[10]*V[10];
S[2]=V[13]*V[13];
S[3]=V[8]*V[8]*V[8]*V[8];
C[136]=+S[3]*(S[0]*(S[2]*(2*(S[0]*(S[0]-S[1])+S[2]*(S[2]-S[1]))+4*S[2]*
 S[0])));
S[4]=V[8]*V[8];
C[135]=+S[4]*(S[0]*(S[2]*(4*(S[4]*(S[2]-S[1]+S[0])+S[0]*(S[0]-S[1])+S[2]*(
 S[2]-S[1]))+8*S[2]*S[0])));
C[134]=+S[4]*(S[2]*(S[0]*(16*(S[2]+S[0])+12*S[4])+4*S[2]*S[4]));
C[133]=+S[4]*(S[2]*(8*(S[2]+S[4])+24*S[0]));
C[132]=+S[4]*(S[2]*(16*S[0]+8*S[4]));
C[131]=+S[3]*(S[0]*(S[2]*(8*(S[2]+S[0]))));
C[130]=+S[4]*(S[0]*(S[2]*(16*(S[2]+S[0])+12*S[4])+4*S[0]*S[4]));
C[129]=+16*S[2]*S[0]*S[3];
C[128]=+S[4]*(S[4]*(8*(S[2]+S[0]))+32*S[2]*S[0]);
C[127]=+S[4]*(16*(S[2]+S[0])+8*S[4]);
C[126]=+8*S[2]*S[0]*S[3];
C[125]=+S[4]*(S[0]*(16*S[2]+8*S[4]));
S[5]=V[13]*V[13]*V[13]*V[13];
C[124]=+S[3]*(S[0]*(S[0]*(11*S[2]-S[1]+S[0])+S[2]*(11*S[2]-6*S[1]))+S[5]*(
 S[2]-S[1]));
C[123]=+S[4]*(S[0]*(S[0]*(2*(S[0]-S[1]+S[4])+22*S[2])+S[2]*(12*(S[4]-S[1])+
 22*S[2])-2*S[1]*S[4])+S[2]*(2*(S[2]*(S[2]-S[1]+S[4])-S[1]*S[4])));
C[122]=+S[4]*(S[0]*(48*S[2]+8*S[0]+4*S[4])+S[2]*(8*S[2]+12*S[4]));
C[121]=+S[4]*(8*(S[0]+S[4])+24*S[2]);
C[120]=+S[3]*(S[0]*(24*S[2]+4*S[0])+4*S[5]);
C[119]=+S[4]*(S[0]*(48*S[2]+8*S[0]+12*S[4])+S[2]*(8*S[2]+4*S[4]));
C[118]=+S[3]*(S[0]*(16*S[2]-2*S[1]+4*S[0])+S[2]*(4*S[2]-2*S[1]));
C[117]=+S[4]*(S[0]*(4*(S[4]-S[1])+32*S[2]+8*S[0])+S[2]*(4*(S[4]-S[1])+8*
 S[2]));
C[116]=+S[3]*(8*(S[2]+S[0]));
C[115]=+S[3]*(4*(S[2]+S[0]));
C[114]=+S[4]*(S[1]*(S[2]*(8*S[0]+4*S[4])));
C[113]=+S[4]*(S[2]*(8*(S[1]-S[4])));
C[112]=+S[4]*(S[4]*(2*(S[0]*(S[1]-S[0])+S[2]*(S[2]+S[1])))+8*S[2]*S[1]*
 S[0]);
C[111]=+8*S[3];
C[110]=+S[4]*(4*(S[4]*(S[2]-S[0])+S[1]*(S[2]+S[0])));
C[109]=+S[4]*(S[0]*(S[2]*(8*(S[0]*(S[0]-S[1])+S[2]*(S[2]-S[1]))+16*S[2]*
 S[0])));
C[108]=+S[4]*(S[0]*(S[2]*(16*(S[2]-S[1]+S[0]))));
C[107]=+S[4]*(S[2]*(16*S[2]+48*S[0]));
C[106]=+16*S[2]*S[1]*S[4];
C[105]=+32*S[2]*S[4];
C[104]=+S[0]*(S[2]*(8*(S[4]*(S[2]-S[1]+S[0])+S[0]*(S[0]-S[1])+S[2]*(S[2]-
 S[1]))+16*S[2]*S[0]));
C[103]=+S[0]*(S[2]*(16*(S[2]-S[1]+S[0])));
C[102]=+S[2]*(S[0]*(32*(S[2]+S[0])+24*S[4])+8*S[2]*S[4]);
C[101]=+S[2]*(16*(S[2]+S[4])+48*S[0]);
C[100]=+S[2]*(32*S[0]+16*S[4]);
C[99]=+S[1]*(S[2]*(16*S[0]+8*S[4]));
C[98]=+S[2]*(16*(S[1]-S[4]));
C[97]=+32*S[2];
C[96]=+S[4]*(S[0]*(S[2]*(32*(S[2]+S[0]))));
C[95]=+S[4]*(S[0]*(48*S[2]+16*S[0]));
C[94]=+64*S[2]*S[0]*S[4];
C[93]=+S[4]*(8*(S[0]*(S[1]-S[0])+S[2]*(S[2]+S[1])));
C[92]=+S[0]*(S[2]*(32*(S[2]+S[0])+24*S[4])+8*S[0]*S[4]);
C[91]=+S[0]*(48*S[2]+16*S[0]);
C[90]=+S[4]*(16*(S[2]+S[0]))+64*S[2]*S[0];
C[89]=+32*(S[2]+S[0])+16*S[4];
C[88]=+S[4]*(4*(S[0]*(S[1]-S[0])+S[2]*(S[2]+S[1])))+16*S[2]*S[1]*S[0];
C[87]=+8*(S[0]*(S[1]-S[0])+S[2]*(S[2]+S[1]));
C[86]=+32*S[0]*S[4];
C[85]=+S[0]*(32*S[2]+16*S[4]);
C[84]=+32*S[0];
C[83]=+S[4]*(S[0]*(S[0]*(4*(S[0]-S[1])+44*S[2])+S[2]*(44*S[2]-24*S[1]))+
 S[5]*(4*(S[2]-S[1])));
C[82]=+S[4]*(8*(S[0]*(S[0]-S[1])+S[2]*(S[2]-S[1]))+48*S[2]*S[0]);
C[81]=+S[4]*(48*S[2]+16*S[0]);
C[80]=+S[0]*(S[0]*(4*(S[0]-S[1]+S[4])+44*S[2])+S[2]*(24*(S[4]-S[1])+44*
 S[2])-4*S[1]*S[4])+S[2]*(4*(S[2]*(S[2]-S[1]+S[4])-S[1]*S[4]));
C[79]=+8*(S[0]*(S[0]-S[1])+S[2]*(S[2]-S[1]))+48*S[2]*S[0];
C[78]=+S[0]*(96*S[2]+16*S[0]+8*S[4])+S[2]*(16*S[2]+24*S[4]);
C[77]=+16*(S[0]+S[4])+48*S[2];
C[76]=+S[4]*(S[0]*(96*S[2]+16*S[0])+16*S[5]);
C[75]=+S[4]*(16*S[2]+48*S[0]);
C[74]=+S[0]*(96*S[2]+16*S[0]+24*S[4])+S[2]*(16*S[2]+8*S[4]);
C[73]=+16*S[2]+48*S[0];
C[72]=+8*(S[4]*(S[2]-S[0])+S[1]*(S[2]+S[0]));
C[71]=+S[4]*(S[0]*(64*S[2]-8*S[1]+16*S[0])+S[2]*(16*S[2]-8*S[1]));
C[70]=+S[0]*(8*(S[4]-S[1])+64*S[2]+16*S[0])+S[2]*(8*(S[4]-S[1])+16*S[2]);
C[69]=+S[4]*(32*(S[2]+S[0]));
C[68]=+32*(S[2]+S[0]);
C[67]=+16*(S[2]+S[0]);
C[66]=+S[4]*(S[0]*(S[1]*(S[2]*(16*(S[2]+S[0])))));
C[65]=+32*S[2]*S[1]*S[0]*S[4];
C[64]=+S[4]*(8*(S[0]*(-S[1]-S[0])+S[2]*(S[2]-S[1])));
C[63]=+S[4]*(16*(S[2]-S[1]-S[0]));
C[62]=+32*S[4];
C[61]=+16*S[1]*S[0]*S[4];
C[60]=+S[4]*(S[1]*(S[0]*(48*S[2]+8*S[0])+8*S[5]));
C[59]=+S[4]*(16*(S[2]-S[0]));
C[58]=+S[4]*(S[1]*(16*(S[2]+S[0])));
C[57]=+S[0]*(S[1]*(S[2]*(16*(S[2]+S[0]+S[4]))));
C[56]=+32*S[2]*S[1]*S[0];
C[55]=+S[4]*(4*(S[0]*(-S[1]-S[0])+S[2]*(S[2]-S[1])))-16*S[2]*S[1]*S[0];
C[54]=+8*(S[4]*(S[2]-S[1]-S[0])+S[0]*(-S[1]-S[0])+S[2]*(S[2]-S[1]));
C[53]=+16*(S[2]-S[1]-S[0]);
C[52]=+16*(S[2]-S[0]-S[4]);
C[51]=+S[0]*(S[1]*(16*S[2]+8*S[4]));
C[50]=+16*S[1]*S[0];
S[6]=V[9]*V[9]*V[9]*V[9];
C[49]=+S[1]*(8*(S[4]*(S[2]+S[0])+S[5]+S[6])+48*S[2]*S[0]);
C[48]=+8*(S[4]*(S[0]-S[2])+S[1]*(S[2]+S[0]));
C[47]=+16*(S[2]-S[0]);
C[46]=+S[1]*(8*(S[2]+S[0]));
C[45]=+S[1]*(16*(S[2]+S[0]));
C[44]=+S[4]*(S[0]*(S[2]*(4*(S[0]*(S[0]-S[1])+S[2]*(S[2]-S[1]))+8*S[2]*
 S[0])));
C[43]=+S[4]*(S[0]*(S[2]*(8*(S[2]-S[1]+S[0]))));
C[42]=+S[4]*(S[2]*(8*S[2]+24*S[0]));
C[41]=+8*S[2]*S[1]*S[4];
C[40]=+16*S[2]*S[4];
C[39]=+S[4]*(S[0]*(S[2]*(16*(S[2]+S[0]))));
C[38]=+S[4]*(S[0]*(24*S[2]+8*S[0]));
C[37]=+32*S[2]*S[0]*S[4];
C[36]=+S[4]*(4*(S[0]*(S[1]-S[0])+S[2]*(S[2]+S[1])));
C[35]=+16*S[2]*S[0]*S[4];
C[34]=+16*S[0]*S[4];
C[33]=+S[4]*(S[0]*(S[0]*(2*(S[0]-S[1])+22*S[2])+S[2]*(22*S[2]-12*S[1]))+
 S[5]*(2*(S[2]-S[1])));
C[32]=+S[4]*(4*(S[0]*(S[0]-S[1])+S[2]*(S[2]-S[1]))+24*S[2]*S[0]);
C[31]=+S[4]*(24*S[2]+8*S[0]);
C[30]=+S[4]*(S[0]*(48*S[2]+8*S[0])+8*S[5]);
C[29]=+S[4]*(8*S[2]+24*S[0]);
C[28]=+S[4]*(S[0]*(32*S[2]-4*S[1]+8*S[0])+S[2]*(8*S[2]-4*S[1]));
C[27]=+S[4]*(16*(S[2]+S[0]));
C[26]=+S[4]*(8*(S[2]+S[0]));
C[25]=+S[3]*(S[0]*(S[1]*(S[2]*(4*(S[2]+S[0])))));
C[24]=+S[4]*(S[0]*(S[1]*(S[2]*(8*(S[2]+S[0]+S[4])))));
C[23]=+S[4]*(S[4]*(2*(S[0]*(-S[1]-S[0])+S[2]*(S[2]-S[1])))-8*S[2]*S[1]*
 S[0]);
C[22]=+S[4]*(4*(S[4]*(S[2]-S[1]-S[0])+S[0]*(-S[1]-S[0])+S[2]*(S[2]-S[1])));
C[21]=+S[4]*(8*(S[2]-S[0]-S[4]));
C[20]=+S[4]*(S[0]*(S[1]*(S[2]*(8*(S[2]+S[0])))));
C[19]=+16*S[2]*S[1]*S[0]*S[4];
C[18]=+S[4]*(4*(S[0]*(-S[1]-S[0])+S[2]*(S[2]-S[1])));
C[17]=+S[4]*(8*(S[2]-S[1]-S[0]));
C[16]=+16*S[4];
C[15]=+4*S[2]*S[1]*S[0]*S[3];
C[14]=+S[4]*(S[0]*(S[1]*(8*S[2]+4*S[4])));
C[13]=+S[3]*(4*(S[2]-S[0]));
C[12]=+8*S[2]*S[1]*S[0]*S[4];
C[11]=+8*S[1]*S[0]*S[4];
C[10]=+S[3]*(S[1]*(S[0]*(12*S[2]+2*S[0])+2*S[5]));
C[9]=+S[4]*(S[1]*(4*(S[4]*(S[2]+S[0])+S[5]+S[6])+24*S[2]*S[0]));
C[8]=+S[4]*(4*(S[4]*(S[0]-S[2])+S[1]*(S[2]+S[0])));
C[7]=+S[4]*(S[1]*(S[0]*(24*S[2]+4*S[0])+4*S[5]));
C[6]=+S[4]*(8*(S[2]-S[0]));
C[5]=+S[3]*(S[1]*(2*(S[2]+S[0])));
C[4]=+S[4]*(S[1]*(4*(S[2]+S[0])));
C[3]=+S[3]*(S[1]*(4*(S[2]+S[0])));
C[2]=+S[4]*(S[1]*(8*(S[2]+S[0])));
S[7]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[7];
S[8]=V[52]*V[52];
S[9]=V[51]*V[51];
S[10]=V[49]*V[49];
S[11]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[8]*S[9]*S[10]*S[11];
}
REAL F629_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                           n2     !  n2                              
                        /==>======!==>==\                            
                        |  P3     !  P3 |                            
                        |         !     |                            
         s     t     W+ |  E2     !  E2 |  W+    t     s             
       ==>==@==>==@-2>--@==<======!==<==@-->4-@==>==@==>==           
         P1 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1            
            |     |               !           |     |                
            |     |        b      !  b        |     |                
          W+|P7   \========>======!==>========/   W+|-PA             
            1              P6     !  P6             3                
            |                     !                 |                
         c  |              b      !  b              |  c             
       ==>==@==============>======!==>==============@==>==           
         P2                P5     !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[137];REAL S[2];REAL tmp[7];                                   
     
if(CalcConst) C629(C);
N=+C[0];
S[0]=V[53]*V[53]*V[53]*V[53]*V[53]*V[53]*V[53]*V[53];
D=+C[1]*S[0];
S[1]=V[53]*V[53];
tmp[0]=+DP[12]*(C[6]*(DP[6]*(DP[2]+DP[4]+DP[8]+DP[9])+DP[0]*(-DP[8]-DP[9])+
 DP[7]*(DP[8]+DP[9]))+DP[1]*(C[42]+C[40]*DP[0]-C[27]*DP[6]-C[31]*DP[7])+
 DP[3]*(C[42]+C[40]*DP[0]-C[27]*DP[6]-C[31]*DP[7])+C[41]*(-DP[2]-DP[4])+
 C[18]*(-DP[8]-DP[9]))+DP[13]*(C[6]*(DP[6]*(DP[2]+DP[4]+DP[8]+DP[9])+DP[0]*
 (-DP[8]-DP[9])+DP[7]*(DP[8]+DP[9]))+DP[1]*(C[42]+C[40]*DP[0]-C[27]*DP[6]-
 C[31]*DP[7])+DP[3]*(C[42]+C[40]*DP[0]-C[27]*DP[6]-C[31]*DP[7])+C[41]*(-
 DP[2]-DP[4])+C[18]*(-DP[8]-DP[9]))+DP[10]*(DP[7]*(C[27]*(-DP[6]-DP[7])+
 C[122]+C[26]*DP[0]+C[31]*DP[5])+DP[5]*(C[27]*DP[6]-C[42]-C[40]*DP[0])+
 C[128]*DP[6]-C[134]-C[132]*DP[0])+DP[14]*(DP[5]*(C[6]*(DP[0]-DP[6]-DP[7])+
 C[18])+C[13]*(DP[0]-DP[6])+C[23]+C[8]*DP[7])+DP[11]*(DP[5]*(C[41]-C[6]*
 DP[6])+C[114]-C[13]*DP[6]-C[4]*DP[7]);
tmp[1]=+DP[6]*(DP[7]*(C[29]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+
 DP[10]*(S[1]-DP[5]))+C[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*(DP[5]-S[1]))+DP[10]*(C[26]*DP[6]-C[119]+C[27]*DP[7])+C[110]*DP[11]-
 C[4]*DP[14])+DP[6]*(C[34]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+
 DP[10]*(S[1]-DP[5]))+C[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*(DP[5]-S[1]))+C[13]*DP[11]-C[125]*DP[10])+DP[12]*(C[38]*(-DP[1]-
 DP[3])+C[36]*(DP[2]+DP[4])+C[11]*(-DP[8]-DP[9]))+DP[13]*(C[38]*(-DP[1]-
 DP[3])+C[36]*(DP[2]+DP[4])+C[11]*(-DP[8]-DP[9]))+S[1]*(C[36]*DP[11]-C[38]*
 DP[10]-C[11]*DP[14])+DP[5]*(C[38]*DP[10]-C[36]*DP[11]+C[11]*DP[14])+C[130]*
 DP[10]-C[112]*DP[11]+C[14]*DP[14])+DP[7]*(C[2]*(DP[12]*(DP[2]+DP[4]-DP[8]-
 DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[11]*(S[1]-DP[5]+DP[7])+DP[14]*(
 DP[5]-S[1]-DP[7]))+DP[7]*(C[26]*(DP[10]*(S[1]-DP[5]+DP[7])+DP[1]*(DP[12]+
 DP[13])+DP[3]*(DP[12]+DP[13]))-C[117]*DP[10])+C[32]*(DP[1]*(-DP[12]-
 DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[1]))+C[9]*(DP[14]-DP[11])+
 C[123]*DP[10])+C[19]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-
 DP[4]+DP[9])+S[1]*(DP[14]-DP[11])+DP[5]*(DP[11]-DP[14]))+C[43]*(DP[1]*(
 DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[1]-DP[5]))+C[24]*(DP[11]-
 DP[14])-C[135]*DP[10];
tmp[2]=+S[1]*(DP[0]*(S[1]*(S[1]*(32*(DP[3]*(DP[6]+DP[7])+DP[4]*(DP[6]+
 DP[7])-DP[9]*DP[0])+C[97]*(-DP[3]-DP[4])+C[53]*DP[9])+DP[6]*(C[62]*(-DP[1]-
 DP[2])+C[52]*DP[4]-C[89]*DP[3]+C[47]*DP[9])+DP[7]*(C[62]*(-DP[1]-DP[2])+
 C[47]*DP[9]-C[77]*DP[3]-C[16]*DP[4])+DP[0]*(C[97]*DP[3]+C[62]*DP[8]-C[52]*
 DP[9])+C[105]*(DP[1]+DP[2])+C[101]*DP[3]-C[98]*DP[4]-C[63]*DP[8]-C[54]*
 DP[9])+DP[7]*(DP[3]*(C[68]*(-DP[6]-DP[7])+C[78]+C[67]*DP[0])+C[81]*DP[1]-
 C[46]*DP[4]-C[59]*DP[8]+C[48]*DP[9])+DP[6]*(C[59]*(-DP[2]-DP[8])+C[6]*(-
 DP[4]-DP[9])+C[69]*DP[1]+C[90]*DP[3])+DP[0]*(C[59]*DP[8]-C[105]*DP[1]-
 C[100]*DP[3]+C[6]*DP[9])+C[106]*DP[2]-C[107]*DP[1]-C[102]*DP[3]+C[99]*
 DP[4]+C[64]*DP[8]+C[55]*DP[9])+DP[6]*(DP[7]*(DP[3]*(C[73]*S[1]-C[74]+C[67]*
 DP[6]+C[68]*DP[7])+DP[4]*(C[72]-C[47]*S[1])+C[59]*DP[2]-C[75]*DP[1]-C[46]*
 DP[9])+DP[6]*(S[1]*(C[84]*DP[3]-C[47]*DP[4])+C[59]*DP[2]-C[86]*DP[1]-C[85]*
 DP[3]+C[6]*DP[4])+S[1]*(C[87]*DP[4]-C[91]*DP[3]-C[50]*DP[9])+C[95]*DP[1]-
 C[93]*DP[2]+C[92]*DP[3]-C[88]*DP[4]+C[61]*DP[8]+C[51]*DP[9])+DP[7]*(DP[7]*(
 DP[3]*(C[67]*(S[1]+DP[7])-C[70])+C[45]*(DP[4]-DP[9])-C[27]*DP[1])+S[1]*(
 C[45]*(DP[4]-DP[9])-C[79]*DP[3])+C[58]*(DP[8]-DP[2])+C[49]*(DP[9]-DP[4])+
 C[82]*DP[1]+C[80]*DP[3])+S[1]*(C[56]*(DP[9]-DP[4])+C[103]*DP[3])+C[65]*(
 DP[2]-DP[8])+C[57]*(DP[4]-DP[9])-C[108]*DP[1]-C[104]*DP[3]);
tmp[3]=+DP[13]*(S[1]*(DP[0]*(S[1]*(C[16]*(DP[1]*(-DP[6]-DP[7])+DP[2]*(-
 DP[6]-DP[7])+DP[8]*DP[0])+C[40]*(DP[1]+DP[2])-C[17]*DP[8])+DP[1]*(C[27]*
 DP[6]-C[42]-C[40]*DP[0]+C[31]*DP[7])+DP[8]*(C[6]*(DP[0]-DP[6]-DP[7])+
 C[18])+DP[2]*(C[41]-C[6]*DP[6]))+DP[6]*(DP[1]*(C[38]-C[34]*DP[6]-C[29]*
 DP[7])+DP[2]*(C[6]*(DP[6]+DP[7])-C[36])+C[11]*DP[8])+DP[7]*(DP[1]*(C[32]-
 C[26]*DP[7])+C[2]*(DP[8]-DP[2]))+C[19]*(DP[2]-DP[8])-C[43]*DP[1])+DP[7]*(
 DP[1]*(DP[0]*(C[27]*(DP[6]+DP[7])-C[30]-C[26]*DP[0])+DP[6]*(C[30]-C[26]*
 DP[6]-C[27]*DP[7])+DP[7]*(C[28]-C[26]*DP[7])-C[33])+DP[2]*(C[4]*(DP[0]-
 DP[6])+C[7]-C[2]*DP[7])+DP[8]*(C[4]*(DP[6]-DP[0])+C[2]*DP[7]-C[7]))+DP[1]*(
 DP[0]*(C[39]+C[35]*DP[0]-C[37]*DP[6])+DP[6]*(C[35]*DP[6]-C[39])+C[44])+
 C[12]*(DP[0]*(DP[8]-DP[2])+DP[6]*(DP[2]-DP[8]))+C[20]*(DP[8]-DP[2]));
tmp[4]=+DP[12]*(DP[7]*(DP[0]*(DP[1]*(C[69]*(DP[6]+DP[7])-C[76]-C[27]*DP[0])+
 DP[3]*(C[27]*(DP[6]+DP[7])-C[30]-C[26]*DP[0])+C[2]*(DP[2]-DP[8])+C[4]*(
 DP[4]-DP[9]))+DP[6]*(DP[1]*(C[76]-C[27]*DP[6]-C[69]*DP[7])+DP[3]*(C[30]-
 C[26]*DP[6]-C[27]*DP[7])+C[2]*(DP[8]-DP[2])+C[4]*(DP[9]-DP[4]))+DP[7]*(
 DP[1]*(C[71]-C[27]*DP[7])+DP[3]*(C[28]-C[26]*DP[7])+C[58]*(DP[8]-DP[2])+
 C[2]*(DP[9]-DP[4]))+C[60]*(DP[2]-DP[8])+C[7]*(DP[4]-DP[9])-C[83]*DP[1]-
 C[33]*DP[3])+DP[0]*(DP[1]*(C[96]+C[37]*DP[0]-C[94]*DP[6])+DP[3]*(C[39]+
 C[35]*DP[0]-C[37]*DP[6])+C[19]*(DP[8]-DP[2])+C[12]*(DP[9]-DP[4]))+DP[6]*(
 DP[1]*(C[37]*DP[6]-C[96])+DP[3]*(C[35]*DP[6]-C[39])+C[19]*(DP[2]-DP[8])+
 C[12]*(DP[4]-DP[9]))+C[66]*(DP[8]-DP[2])+C[20]*(DP[9]-DP[4])+C[109]*DP[1]+
 C[44]*DP[3]+tmp[2])+tmp[3];
tmp[5]=+DP[7]*(DP[0]*(DP[12]*(DP[1]*(C[27]*(-DP[6]-DP[7])+C[30]+C[26]*
 DP[0])+DP[3]*(C[27]*(-DP[6]-DP[7])+C[30]+C[26]*DP[0])+C[4]*(DP[8]-DP[2]-
 DP[4]+DP[9]))+DP[13]*(DP[1]*(C[27]*(-DP[6]-DP[7])+C[30]+C[26]*DP[0])+DP[3]*
 (C[27]*(-DP[6]-DP[7])+C[30]+C[26]*DP[0])+C[4]*(DP[8]-DP[2]-DP[4]+DP[9]))+
 DP[10]*(DP[5]*(C[27]*(DP[6]+DP[7])-C[30]-C[26]*DP[0])+C[116]*(DP[6]+DP[7])-
 C[120]-C[115]*DP[0])+DP[5]*(C[4]*(DP[11]-DP[14]))+C[5]*(DP[11]-DP[14]))+
 DP[6]*(DP[12]*(C[4]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[1]*(C[26]*DP[6]-C[30]+
 C[27]*DP[7])+DP[3]*(C[26]*DP[6]-C[30]+C[27]*DP[7]))+DP[13]*(C[4]*(DP[2]+
 DP[4]-DP[8]-DP[9])+DP[1]*(C[26]*DP[6]-C[30]+C[27]*DP[7])+DP[3]*(C[26]*
 DP[6]-C[30]+C[27]*DP[7]))+DP[10]*(DP[5]*(C[30]-C[26]*DP[6]-C[27]*DP[7])+
 C[120]-C[115]*DP[6]-C[116]*DP[7])+DP[5]*(C[4]*(DP[14]-DP[11]))+C[5]*(
 DP[14]-DP[11]))+DP[7]*(C[2]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(
 DP[2]+DP[4]-DP[8]-DP[9])+DP[5]*(DP[14]-DP[11]))+DP[7]*(C[26]*(DP[1]*(
 DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])-C[115]*DP[10])+C[28]*(
 DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[3]*(DP[14]-
 DP[11])+C[118]*DP[10])+C[7]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(
 DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(DP[11]-DP[14]))+C[33]*(DP[1]*(DP[12]+
 DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[10]*(DP[11]-DP[14])-C[124]*
 DP[10]);
tmp[6]=+DP[5]*(DP[0]*(DP[12]*(C[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[1]*(C[37]*
 DP[6]-C[39]-C[35]*DP[0])+DP[3]*(C[37]*DP[6]-C[39]-C[35]*DP[0]))+DP[13]*(
 C[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[1]*(C[37]*DP[6]-C[39]-C[35]*DP[0])+
 DP[3]*(C[37]*DP[6]-C[39]-C[35]*DP[0]))+DP[10]*(DP[5]*(C[39]+C[35]*DP[0]-
 C[37]*DP[6])+C[131]+C[126]*DP[0]-C[129]*DP[6])+DP[5]*(C[12]*(DP[14]-
 DP[11]))+C[15]*(DP[14]-DP[11]))+DP[6]*(C[12]*(DP[12]*(DP[8]-DP[2]-DP[4]+
 DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(DP[11]-DP[14]))+DP[6]*(
 C[35]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[126]*
 DP[10])+C[39]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+
 C[15]*(DP[11]-DP[14])-C[131]*DP[10])+C[20]*(DP[12]*(DP[2]+DP[4]-DP[8]-
 DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[5]*(DP[14]-DP[11]))+C[44]*(
 DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[25]*(DP[14]-
 DP[11])+C[136]*DP[10]+tmp[5]);
R=+S[1]*(DP[5]*(DP[0]*(S[1]*(C[16]*(DP[6]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+
 DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+S[1]*(DP[10]+DP[11])+DP[5]*(-DP[10]-
 DP[11]))+DP[7]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+DP[2]+DP[3]+
 DP[4])+S[1]*(DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))+DP[0]*(DP[8]*(-DP[12]-
 DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[1])))+C[40]*(DP[12]*(-DP[1]-
 DP[2]-DP[3]-DP[4])+DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[10]*(DP[0]-S[1]+
 DP[5])+DP[11]*(DP[5]-S[1]))+DP[14]*(C[17]*(S[1]-DP[5])+C[6]*(DP[6]+DP[7])-
 C[22]-C[21]*DP[0])+C[17]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13]))+
 DP[10]*(C[133]-C[127]*DP[6]-C[121]*DP[7])+DP[11]*(C[21]*DP[6]-C[113]-
 C[111]*DP[7]))+tmp[0])+tmp[1])+tmp[4])+tmp[6];
R*=(N/D)*Q2[4]*Q2[1]*Q2[2];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*1)/(1);
 }
 return R;
}
