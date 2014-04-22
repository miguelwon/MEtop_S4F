/*******************************
*    CalcHEP  3.2*
*******************************/
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include"num_out.h"
#include"num_in.h"
static int calcall[9];
static int particles[7]={0,0,0,0,0,0,0};
extern DNN S1_out,S2_out,S3_out,S4_out,S5_out,S6_out,S7_out,S8_out;
static  DNN * darr[8]={&S1_out,&S2_out,&S3_out,&S4_out,&S5_out,&S6_out,
 &S7_out,&S8_out};
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
     { static int cc[18]=
       {
        1,2, 2,3, 3,6,
        1,3, 2,6, 3,2,
        1,6, 2,3, 3,2
       };
       *nC=3; *power=3; *chains=cc;
     }
     break;
   case 2 : 
     { static int cc[18]=
       {
        2,1, 3,2, 6,3,
        2,3, 3,1, 6,2,
        2,3, 3,2, 6,1
       };
       *nC=3; *power=3; *chains=cc;
     }
     break;
   case 3 : 
     { static int cc[18]=
       {
        1,2, 2,3, 3,6,
        1,3, 2,6, 3,2,
        1,6, 2,3, 3,2
       };
       *nC=3; *power=3; *chains=cc;
     }
     break;
   case 4 : 
     { static int cc[18]=
       {
        2,1, 3,2, 6,3,
        2,3, 3,1, 6,2,
        2,3, 3,2, 6,1
       };
       *nC=3; *power=3; *chains=cc;
     }
     break;
   case 5 : 
     { static int cc[18]=
       {
        1,3, 2,1, 3,6,
        1,3, 2,6, 3,1,
        1,6, 2,3, 3,1
       };
       *nC=3; *power=3; *chains=cc;
     }
     break;
   case 6 : 
     { static int cc[18]=
       {
        1,2, 3,1, 6,3,
        1,3, 3,1, 6,2,
        1,3, 3,2, 6,1
       };
       *nC=3; *power=3; *chains=cc;
     }
     break;
   case 7 : 
     { static int cc[18]=
       {
        1,3, 2,1, 3,6,
        1,3, 2,6, 3,1,
        1,6, 2,3, 3,1
       };
       *nC=3; *power=3; *chains=cc;
     }
     break;
   case 8 : 
     { static int cc[18]=
       {
        1,2, 3,1, 6,3,
        1,3, 3,1, 6,2,
        1,3, 3,2, 6,1
       };
       *nC=3; *power=3; *chains=cc;
     }
     break;
   default: *nC=0; *power=0; *chains=NULL;
   }
}

#include"sqme.inc"
