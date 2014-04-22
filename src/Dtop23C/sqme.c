/*******************************
*    CalcHEP  3.2*
*******************************/
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include"num_out.h"
#include"num_in.h"
static int calcall[41];
static int particles[6]={0,0,0,0,0,0};
extern DNN S1_out,S2_out,S3_out,S4_out,S5_out,S6_out,S7_out,S8_out,S9_out,
 S10_out,S11_out,S12_out,S13_out,S14_out,S15_out,S16_out,S17_out,S18_out,
 S19_out,S20_out,S21_out,S22_out,S23_out,S24_out,S25_out,S26_out,S27_out,
 S28_out,S29_out,S30_out,S31_out,S32_out,S33_out,S34_out,S35_out,S36_out,
 S37_out,S38_out,S39_out,S40_out;
static  DNN * darr[40]={&S1_out,&S2_out,&S3_out,&S4_out,&S5_out,&S6_out,
 &S7_out,&S8_out,&S9_out,&S10_out,&S11_out,&S12_out,&S13_out,&S14_out,
 &S15_out,&S16_out,&S17_out,&S18_out,&S19_out,&S20_out,&S21_out,&S22_out,
 &S23_out,&S24_out,&S25_out,&S26_out,&S27_out,&S28_out,&S29_out,&S30_out,
 &S31_out,&S32_out,&S33_out,&S34_out,&S35_out,&S36_out,&S37_out,&S38_out,
 &S39_out,&S40_out};
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
     { static int cc[4]=
       {
        1,2, 2,5
       };
       *nC=2; *power=1; *chains=cc;
     }
     break;
   case 2 : 
     { static int cc[4]=
       {
        1,2, 2,5
       };
       *nC=2; *power=1; *chains=cc;
     }
     break;
   case 3 : 
     { static int cc[4]=
       {
        1,2, 2,5
       };
       *nC=2; *power=1; *chains=cc;
     }
     break;
   case 4 : 
     { static int cc[24]=
       {
        1,2, 2,3, 4,5,
        1,2, 2,5, 4,3,
        1,3, 2,5, 4,2,
        1,5, 2,3, 4,2
       };
       *nC=3; *power=4; *chains=cc;
     }
     break;
   case 5 : 
     { static int cc[24]=
       {
        1,2, 2,3, 4,5,
        1,2, 2,5, 4,3,
        1,3, 2,5, 4,2,
        1,5, 2,3, 4,2
       };
       *nC=3; *power=4; *chains=cc;
     }
     break;
   case 6 : 
     { static int cc[4]=
       {
        2,1, 5,2
       };
       *nC=2; *power=1; *chains=cc;
     }
     break;
   case 7 : 
     { static int cc[4]=
       {
        2,1, 5,2
       };
       *nC=2; *power=1; *chains=cc;
     }
     break;
   case 8 : 
     { static int cc[4]=
       {
        2,1, 5,2
       };
       *nC=2; *power=1; *chains=cc;
     }
     break;
   case 9 : 
     { static int cc[24]=
       {
        2,1, 3,2, 5,4,
        2,1, 3,4, 5,2,
        2,4, 3,1, 5,2,
        2,4, 3,2, 5,1
       };
       *nC=3; *power=4; *chains=cc;
     }
     break;
   case 10 : 
     { static int cc[24]=
       {
        2,1, 3,2, 5,4,
        2,1, 3,4, 5,2,
        2,4, 3,1, 5,2,
        2,4, 3,2, 5,1
       };
       *nC=3; *power=4; *chains=cc;
     }
     break;
   case 11 : 
     { static int cc[4]=
       {
        1,2, 2,5
       };
       *nC=2; *power=1; *chains=cc;
     }
     break;
   case 12 : 
     { static int cc[4]=
       {
        1,2, 2,5
       };
       *nC=2; *power=1; *chains=cc;
     }
     break;
   case 13 : 
     { static int cc[4]=
       {
        1,2, 2,5
       };
       *nC=2; *power=1; *chains=cc;
     }
     break;
   case 14 : 
     { static int cc[24]=
       {
        1,2, 2,3, 4,5,
        1,2, 2,5, 4,3,
        1,3, 2,5, 4,2,
        1,5, 2,3, 4,2
       };
       *nC=3; *power=4; *chains=cc;
     }
     break;
   case 15 : 
     { static int cc[24]=
       {
        1,2, 2,3, 4,5,
        1,2, 2,5, 4,3,
        1,3, 2,5, 4,2,
        1,5, 2,3, 4,2
       };
       *nC=3; *power=4; *chains=cc;
     }
     break;
   case 16 : 
     { static int cc[4]=
       {
        2,1, 5,2
       };
       *nC=2; *power=1; *chains=cc;
     }
     break;
   case 17 : 
     { static int cc[4]=
       {
        2,1, 5,2
       };
       *nC=2; *power=1; *chains=cc;
     }
     break;
   case 18 : 
     { static int cc[4]=
       {
        2,1, 5,2
       };
       *nC=2; *power=1; *chains=cc;
     }
     break;
   case 19 : 
     { static int cc[24]=
       {
        2,1, 3,2, 5,4,
        2,1, 3,4, 5,2,
        2,4, 3,1, 5,2,
        2,4, 3,2, 5,1
       };
       *nC=3; *power=4; *chains=cc;
     }
     break;
   case 20 : 
     { static int cc[24]=
       {
        2,1, 3,2, 5,4,
        2,1, 3,4, 5,2,
        2,4, 3,1, 5,2,
        2,4, 3,2, 5,1
       };
       *nC=3; *power=4; *chains=cc;
     }
     break;
   case 21 : 
     { static int cc[4]=
       {
        1,5, 2,1
       };
       *nC=2; *power=1; *chains=cc;
     }
     break;
   case 22 : 
     { static int cc[4]=
       {
        1,5, 2,1
       };
       *nC=2; *power=1; *chains=cc;
     }
     break;
   case 23 : 
     { static int cc[4]=
       {
        1,5, 2,1
       };
       *nC=2; *power=1; *chains=cc;
     }
     break;
   case 24 : 
     { static int cc[24]=
       {
        1,3, 2,1, 4,5,
        1,5, 2,1, 4,3,
        1,3, 2,5, 4,1,
        1,5, 2,3, 4,1
       };
       *nC=3; *power=4; *chains=cc;
     }
     break;
   case 25 : 
     { static int cc[24]=
       {
        1,3, 2,1, 4,5,
        1,5, 2,1, 4,3,
        1,3, 2,5, 4,1,
        1,5, 2,3, 4,1
       };
       *nC=3; *power=4; *chains=cc;
     }
     break;
   case 26 : 
     { static int cc[4]=
       {
        1,2, 5,1
       };
       *nC=2; *power=1; *chains=cc;
     }
     break;
   case 27 : 
     { static int cc[4]=
       {
        1,2, 5,1
       };
       *nC=2; *power=1; *chains=cc;
     }
     break;
   case 28 : 
     { static int cc[4]=
       {
        1,2, 5,1
       };
       *nC=2; *power=1; *chains=cc;
     }
     break;
   case 29 : 
     { static int cc[24]=
       {
        1,2, 3,1, 5,4,
        1,4, 3,1, 5,2,
        1,2, 3,4, 5,1,
        1,4, 3,2, 5,1
       };
       *nC=3; *power=4; *chains=cc;
     }
     break;
   case 30 : 
     { static int cc[24]=
       {
        1,2, 3,1, 5,4,
        1,4, 3,1, 5,2,
        1,2, 3,4, 5,1,
        1,4, 3,2, 5,1
       };
       *nC=3; *power=4; *chains=cc;
     }
     break;
   case 31 : 
     { static int cc[4]=
       {
        1,5, 2,1
       };
       *nC=2; *power=1; *chains=cc;
     }
     break;
   case 32 : 
     { static int cc[4]=
       {
        1,5, 2,1
       };
       *nC=2; *power=1; *chains=cc;
     }
     break;
   case 33 : 
     { static int cc[4]=
       {
        1,5, 2,1
       };
       *nC=2; *power=1; *chains=cc;
     }
     break;
   case 34 : 
     { static int cc[24]=
       {
        1,3, 2,1, 4,5,
        1,5, 2,1, 4,3,
        1,3, 2,5, 4,1,
        1,5, 2,3, 4,1
       };
       *nC=3; *power=4; *chains=cc;
     }
     break;
   case 35 : 
     { static int cc[24]=
       {
        1,3, 2,1, 4,5,
        1,5, 2,1, 4,3,
        1,3, 2,5, 4,1,
        1,5, 2,3, 4,1
       };
       *nC=3; *power=4; *chains=cc;
     }
     break;
   case 36 : 
     { static int cc[4]=
       {
        1,2, 5,1
       };
       *nC=2; *power=1; *chains=cc;
     }
     break;
   case 37 : 
     { static int cc[4]=
       {
        1,2, 5,1
       };
       *nC=2; *power=1; *chains=cc;
     }
     break;
   case 38 : 
     { static int cc[4]=
       {
        1,2, 5,1
       };
       *nC=2; *power=1; *chains=cc;
     }
     break;
   case 39 : 
     { static int cc[24]=
       {
        1,2, 3,1, 5,4,
        1,4, 3,1, 5,2,
        1,2, 3,4, 5,1,
        1,4, 3,2, 5,1
       };
       *nC=3; *power=4; *chains=cc;
     }
     break;
   case 40 : 
     { static int cc[24]=
       {
        1,2, 3,1, 5,4,
        1,4, 3,1, 5,2,
        1,2, 3,4, 5,1,
        1,4, 3,2, 5,1
       };
       *nC=3; *power=4; *chains=cc;
     }
     break;
   default: *nC=0; *power=0; *chains=NULL;
   }
}

#include"sqme.inc"
