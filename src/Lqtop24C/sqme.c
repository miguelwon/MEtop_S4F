/*******************************
*    CalcHEP  3.2*
*******************************/
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include"num_out.h"
#include"num_in.h"
static int calcall[257];
static int particles[7]={0,0,0,0,0,0,0};
extern DNN S1_out,S2_out,S3_out,S4_out,S5_out,S6_out,S7_out,S8_out,S9_out,
 S10_out,S11_out,S12_out,S13_out,S14_out,S15_out,S16_out,S17_out,S18_out,
 S19_out,S20_out,S21_out,S22_out,S23_out,S24_out,S25_out,S26_out,S27_out,
 S28_out,S29_out,S30_out,S31_out,S32_out,S33_out,S34_out,S35_out,S36_out,
 S37_out,S38_out,S39_out,S40_out,S41_out,S42_out,S43_out,S44_out,S45_out,
 S46_out,S47_out,S48_out,S49_out,S50_out,S51_out,S52_out,S53_out,S54_out,
 S55_out,S56_out,S57_out,S58_out,S59_out,S60_out,S61_out,S62_out,S63_out,
 S64_out,S65_out,S66_out,S67_out,S68_out,S69_out,S70_out,S71_out,S72_out,
 S73_out,S74_out,S75_out,S76_out,S77_out,S78_out,S79_out,S80_out,S81_out,
 S82_out,S83_out,S84_out,S85_out,S86_out,S87_out,S88_out,S89_out,S90_out,
 S91_out,S92_out,S93_out,S94_out,S95_out,S96_out,S97_out,S98_out,S99_out,
 S100_out,S101_out,S102_out,S103_out,S104_out,S105_out,S106_out,S107_out,
 S108_out,S109_out,S110_out,S111_out,S112_out,S113_out,S114_out,S115_out,
 S116_out,S117_out,S118_out,S119_out,S120_out,S121_out,S122_out,S123_out,
 S124_out,S125_out,S126_out,S127_out,S128_out,S129_out,S130_out,S131_out,
 S132_out,S133_out,S134_out,S135_out,S136_out,S137_out,S138_out,S139_out,
 S140_out,S141_out,S142_out,S143_out,S144_out,S145_out,S146_out,S147_out,
 S148_out,S149_out,S150_out,S151_out,S152_out,S153_out,S154_out,S155_out,
 S156_out,S157_out,S158_out,S159_out,S160_out,S161_out,S162_out,S163_out,
 S164_out,S165_out,S166_out,S167_out,S168_out,S169_out,S170_out,S171_out,
 S172_out,S173_out,S174_out,S175_out,S176_out,S177_out,S178_out,S179_out,
 S180_out,S181_out,S182_out,S183_out,S184_out,S185_out,S186_out,S187_out,
 S188_out,S189_out,S190_out,S191_out,S192_out,S193_out,S194_out,S195_out,
 S196_out,S197_out,S198_out,S199_out,S200_out,S201_out,S202_out,S203_out,
 S204_out,S205_out,S206_out,S207_out,S208_out,S209_out,S210_out,S211_out,
 S212_out,S213_out,S214_out,S215_out,S216_out,S217_out,S218_out,S219_out,
 S220_out,S221_out,S222_out,S223_out,S224_out,S225_out,S226_out,S227_out,
 S228_out,S229_out,S230_out,S231_out,S232_out,S233_out,S234_out,S235_out,
 S236_out,S237_out,S238_out,S239_out,S240_out,S241_out,S242_out,S243_out,
 S244_out,S245_out,S246_out,S247_out,S248_out,S249_out,S250_out,S251_out,
 S252_out,S253_out,S254_out,S255_out,S256_out;
static  DNN * darr[256]={&S1_out,&S2_out,&S3_out,&S4_out,&S5_out,&S6_out,
 &S7_out,&S8_out,&S9_out,&S10_out,&S11_out,&S12_out,&S13_out,&S14_out,
 &S15_out,&S16_out,&S17_out,&S18_out,&S19_out,&S20_out,&S21_out,&S22_out,
 &S23_out,&S24_out,&S25_out,&S26_out,&S27_out,&S28_out,&S29_out,&S30_out,
 &S31_out,&S32_out,&S33_out,&S34_out,&S35_out,&S36_out,&S37_out,&S38_out,
 &S39_out,&S40_out,&S41_out,&S42_out,&S43_out,&S44_out,&S45_out,&S46_out,
 &S47_out,&S48_out,&S49_out,&S50_out,&S51_out,&S52_out,&S53_out,&S54_out,
 &S55_out,&S56_out,&S57_out,&S58_out,&S59_out,&S60_out,&S61_out,&S62_out,
 &S63_out,&S64_out,&S65_out,&S66_out,&S67_out,&S68_out,&S69_out,&S70_out,
 &S71_out,&S72_out,&S73_out,&S74_out,&S75_out,&S76_out,&S77_out,&S78_out,
 &S79_out,&S80_out,&S81_out,&S82_out,&S83_out,&S84_out,&S85_out,&S86_out,
 &S87_out,&S88_out,&S89_out,&S90_out,&S91_out,&S92_out,&S93_out,&S94_out,
 &S95_out,&S96_out,&S97_out,&S98_out,&S99_out,&S100_out,&S101_out,&S102_out,
 &S103_out,&S104_out,&S105_out,&S106_out,&S107_out,&S108_out,&S109_out,
 &S110_out,&S111_out,&S112_out,&S113_out,&S114_out,&S115_out,&S116_out,
 &S117_out,&S118_out,&S119_out,&S120_out,&S121_out,&S122_out,&S123_out,
 &S124_out,&S125_out,&S126_out,&S127_out,&S128_out,&S129_out,&S130_out,
 &S131_out,&S132_out,&S133_out,&S134_out,&S135_out,&S136_out,&S137_out,
 &S138_out,&S139_out,&S140_out,&S141_out,&S142_out,&S143_out,&S144_out,
 &S145_out,&S146_out,&S147_out,&S148_out,&S149_out,&S150_out,&S151_out,
 &S152_out,&S153_out,&S154_out,&S155_out,&S156_out,&S157_out,&S158_out,
 &S159_out,&S160_out,&S161_out,&S162_out,&S163_out,&S164_out,&S165_out,
 &S166_out,&S167_out,&S168_out,&S169_out,&S170_out,&S171_out,&S172_out,
 &S173_out,&S174_out,&S175_out,&S176_out,&S177_out,&S178_out,&S179_out,
 &S180_out,&S181_out,&S182_out,&S183_out,&S184_out,&S185_out,&S186_out,
 &S187_out,&S188_out,&S189_out,&S190_out,&S191_out,&S192_out,&S193_out,
 &S194_out,&S195_out,&S196_out,&S197_out,&S198_out,&S199_out,&S200_out,
 &S201_out,&S202_out,&S203_out,&S204_out,&S205_out,&S206_out,&S207_out,
 &S208_out,&S209_out,&S210_out,&S211_out,&S212_out,&S213_out,&S214_out,
 &S215_out,&S216_out,&S217_out,&S218_out,&S219_out,&S220_out,&S221_out,
 &S222_out,&S223_out,&S224_out,&S225_out,&S226_out,&S227_out,&S228_out,
 &S229_out,&S230_out,&S231_out,&S232_out,&S233_out,&S234_out,&S235_out,
 &S236_out,&S237_out,&S238_out,&S239_out,&S240_out,&S241_out,&S242_out,
 &S243_out,&S244_out,&S245_out,&S246_out,&S247_out,&S248_out,&S249_out,
 &S250_out,&S251_out,&S252_out,&S253_out,&S254_out,&S255_out,&S256_out};
double (*aWidth_out)(char*)=NULL;
int FError;
static int calcFunc_stat(void)
{
 REAL * V=va_out;
 FError=0;
return 0;
}
static void cStrings(int nsub,int *nC, int * power, int **  chains)
{
   switch(nsub)
   {
   case 1 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 2 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 3 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 4 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 5 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 6 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 7 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 8 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 9 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 10 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 11 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 12 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 13 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 14 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 15 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 16 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 17 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 18 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 19 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 20 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 21 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 22 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 23 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 24 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 25 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 26 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 27 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 28 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 29 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 30 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 31 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 32 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 33 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 34 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 35 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 36 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 37 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 38 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 39 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 40 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 41 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 42 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 43 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 44 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 45 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 46 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 47 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 48 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 49 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 50 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 51 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 52 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 53 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 54 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 55 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 56 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 57 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 58 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 59 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 60 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 61 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 62 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 63 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 64 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 65 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 66 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 67 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 68 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 69 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 70 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 71 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 72 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 73 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 74 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 75 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 76 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 77 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 78 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 79 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 80 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 81 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 82 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 83 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 84 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 85 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 86 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 87 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 88 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 89 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 90 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 91 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 92 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 93 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 94 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 95 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 96 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 97 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 98 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 99 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 100 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 101 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 102 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 103 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 104 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 105 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 106 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 107 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 108 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 109 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 110 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 111 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 112 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 113 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 114 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 115 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 116 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 117 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 118 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 119 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 120 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 121 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 122 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 123 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 124 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 125 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 126 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 127 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 128 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 129 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 130 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 131 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 132 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 133 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 134 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 135 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 136 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 137 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 138 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 139 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 140 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 141 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 142 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 143 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 144 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 145 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 146 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 147 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 148 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 149 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 150 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 151 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 152 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 153 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 154 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 155 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 156 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 157 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 158 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 159 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 160 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 161 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 162 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 163 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 164 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 165 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 166 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 167 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 168 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 169 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 170 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 171 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 172 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 173 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 174 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 175 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 176 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 177 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 178 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 179 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 180 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 181 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 182 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 183 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 184 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 185 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 186 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 187 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 188 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 189 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 190 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 191 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 192 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 193 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 194 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 195 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 196 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 197 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 198 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 199 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 200 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 201 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 202 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 203 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 204 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 205 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 206 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 207 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 208 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 209 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 210 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 211 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 212 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 213 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 214 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 215 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 216 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 217 : 
     { static int cc[8]=
       {
        1,5, 2,6,
        1,6, 2,5
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 218 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 219 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 220 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 221 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 222 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 223 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 224 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 225 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 226 : 
     { static int cc[8]=
       {
        1,2, 5,6,
        1,6, 5,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 227 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 228 : 
     { static int cc[8]=
       {
        1,2, 6,5,
        1,5, 6,2
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 229 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 230 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 231 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 232 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 233 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 234 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 235 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 236 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 237 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 238 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 239 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 240 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 241 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 242 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 243 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 244 : 
     { static int cc[8]=
       {
        5,1, 6,2,
        5,2, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 245 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 246 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 247 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 248 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 249 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 250 : 
     { static int cc[8]=
       {
        2,1, 5,6,
        2,6, 5,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 251 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 252 : 
     { static int cc[8]=
       {
        2,1, 6,5,
        2,5, 6,1
       };
       *nC=2; *power=2; *chains=cc;
     }
     break;
   case 253 : 
     { static int cc[18]=
       {
        1,2, 2,1, 5,6,
        1,6, 2,1, 5,2,
        1,2, 2,6, 5,1
       };
       *nC=3; *power=3; *chains=cc;
     }
     break;
   case 254 : 
     { static int cc[18]=
       {
        1,2, 2,1, 5,6,
        1,6, 2,1, 5,2,
        1,2, 2,6, 5,1
       };
       *nC=3; *power=3; *chains=cc;
     }
     break;
   case 255 : 
     { static int cc[18]=
       {
        1,2, 2,1, 6,5,
        1,5, 2,1, 6,2,
        1,2, 2,5, 6,1
       };
       *nC=3; *power=3; *chains=cc;
     }
     break;
   case 256 : 
     { static int cc[18]=
       {
        1,2, 2,1, 6,5,
        1,5, 2,1, 6,2,
        1,2, 2,5, 6,1
       };
       *nC=3; *power=3; *chains=cc;
     }
     break;
   default: *nC=0; *power=0; *chains=NULL;
   }
}

#include"sqme.inc"
