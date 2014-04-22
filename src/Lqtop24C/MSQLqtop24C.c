#include <stdio.h> 
#include "num_out.h" 
#include <math.h> 
#include <stdlib.h> 
#include <string.h>


static int assignVal(char * name, double val)
{
  int i;
  for(i=1;i<=nvar_out+nfunc_out;i++)
  {
    if(strcmp(name,varName_out[i])) continue;
    if(i<=nvar_out) {va_out[i]=val; return 0;} else return 1; 
  }
    return 2;
}

int ASCIItoInt(char *name,int result[])
{
  int i,size;
  size=strlen(name);
  char buff[size];
  for (i=0;i<10;i++)
  {
   if (i < size)
     {
        result[i]=(int) name[i];
     }
   else
     {
        result[i]=32;
     }
  }
  return 0;
}
int CheckIn(int number,int list[])
{
 int i,size;
 size=8;
 for (i=0;i<size;i++)
 {
  if(number==list[i])
  {
   return 1;
  }
 else continue;
 }
 return 0;
}
extern struct
{
 double Mu,Md,Mc,Ms,Mb,Mtop,MZ,MH,SW,CW,EE,co1,co2,co3,co4,co5,co6,co7,co8,co9,fu,hu,fc,hc,L,Q,miuR,MW,wW,wtop,Me,Mm,Mt,wH,wZ;

} data_;

void msqgtopc_(double *GG,double pvec[24],double *f2,int *cb_nc,int *cb_pow,int cb_chain[6],int subpro[6])
{
 int i,j,k,err,size,Npr,count,subprocp[6],SubProLs[12]={11,21,27,81,91,112,123,129,153,193,231,241};
 double rnd,sum,pveccp[24];
 int MCcode1,MCcode2,MCcode3,MCcode4,MCcode5,MCcode6;
/*
 SubProLs[0]=122;
 SubProLs[1]=144;
 SubProLs[2]=149;
 SubProLs[3]=19;
 SubProLs[4]=54;
 SubProLs[5]=82;
 SubProLs[6]=85;
 SubProLs[7]=9;
*/
 err=0;
/*

printf("Mu %f\n",data_.Mu);
printf("Md %f\n",data_.Md);
printf("Mc %f\n",data_.Mc);
printf("Ms %f\n",data_.Ms);
printf("Mb %f\n",data_.Mb);
printf("Mtop %f\n",data_.Mtop);
printf("MZ %f\n",data_.MZ);
printf("MH %f\n",data_.MH);
printf("SW %f\n",data_.SW);
printf("CW %f\n",data_.CW);
printf("EE %f\n",data_.EE);
printf("co1 %f\n",data_.co1);
printf("co2 %f\n",data_.co2);
printf("co3 %f\n",data_.co3);
printf("co4 %f\n",data_.co4);
printf("co5 %f\n",data_.co5);
printf("co6 %f\n",data_.co6);
printf("co7 %f\n",data_.co7);
printf("co8 %f\n",data_.co8);
printf("co9 %f\n",data_.co9);
printf("fu %f\n",data_.fu);
printf("hu %f\n",data_.hu);
printf("fc %f\n",data_.fc);
printf("hc %f\n",data_.hc);
printf("L %f\n",data_.L);
printf("Q %f\n",data_.Q);
printf("miuR %f\n",data_.miuR);
printf("MW %f\n",data_.MW);
printf("wW %f\n",data_.wW);
printf("wtop %f\n",data_.wtop);
printf("Me %f\n",data_.Me);
printf("Mm %f\n",data_.Mm);
printf("Mt %f\n",data_.Mt);
printf("wH %f\n",data_.wH);
printf("wZ %f\n",data_.wZ);
*/
assignVal("Mu",data_.Mu);
assignVal("Md",data_.Md);
assignVal("Mc",data_.Mc);
assignVal("Ms",data_.Ms);
assignVal("Mb",data_.Mb);
assignVal("Mtop",data_.Mtop);
assignVal("MZ",data_.MZ);
assignVal("MH",data_.MH);
assignVal("SW",data_.SW);
assignVal("CW",data_.CW);
assignVal("EE",data_.EE);
assignVal("co1",data_.co1);
assignVal("co2",data_.co2);
assignVal("co3",data_.co3);
assignVal("co4",data_.co4);
assignVal("co5",data_.co5);
assignVal("co6",data_.co6);
assignVal("co7",data_.co7);
assignVal("co8",data_.co8);
assignVal("co9",data_.co9);
assignVal("fu",data_.fu);
assignVal("hu",data_.hu);
assignVal("fc",data_.fc);
assignVal("hc",data_.hc);
assignVal("L",data_.L);
assignVal("Q",data_.Q);
assignVal("miuR",data_.miuR);
assignVal("MW",data_.MW);
assignVal("wW",data_.wW);
assignVal("wtop",data_.wtop);
assignVal("Me",data_.Me);
assignVal("Mm",data_.Mm);
assignVal("Mt",data_.Mt);
assignVal("wH",data_.wH);
assignVal("wZ",data_.wZ);
assignVal("Maux",1);
assignVal("Sqrt2",1.414213562);

/*
printf("passou 2 \n");

for (i=1;i<=32;i++)
{
printf("va %d  %f\n",i,va_out[i-1]);
}
*/

for (i=0;i<6;i++)
{
	if (subpro[i]==0) subpro[i]=21;
}




for (i=1;i<=nprc_out;i++)
{
	Npr=0;
	count=0;
/*	printf(" %d \n",i);*/

	pinf_out(i,1,NULL,&MCcode1);
	pinf_out(i,2,NULL,&MCcode2);
	pinf_out(i,3,NULL,&MCcode3);
	pinf_out(i,4,NULL,&MCcode4);
	pinf_out(i,5,NULL,&MCcode5);
	pinf_out(i,6,NULL,&MCcode6);

/*
	printf("passou %d %d %d %d %d %d\n",subpro[0],subpro[1],subpro[2],subpro[3],subpro[4],subpro[5]);
	printf("passou %d %d %d %d %d %d\n",MCcode1,MCcode2,MCcode3,MCcode4,MCcode5,MCcode6);
	printf("  \n");
*/
/*
	printf("subpro  %d %d %d %d %d %d\n",subpro[0],subpro[1],subpro[2],subpro[3],subpro[4],subpro[5]);
	printf("%d %d %d %d %d %d\n",MCcode1,MCcode2,MCcode3,MCcode4,MCcode5,MCcode6);
*/
	if (CheckIn(i,SubProLs)==0)
	{
		if ((subpro[0]==MCcode1) && (subpro[1]==MCcode2) && (subpro[3]==MCcode3) && (subpro[4]==MCcode4) && (subpro[2]==MCcode5) && (subpro[5]==MCcode6))
		{
			count=1;
			Npr=i;
			break;
		}
		else continue;
	}
	else if (CheckIn(i,SubProLs)==1)
	{
		if ((subpro[0]==MCcode1) && (subpro[1]==MCcode2) && (subpro[3]==MCcode3) && (subpro[4]==MCcode4) && (subpro[5]==MCcode5) && (subpro[2]==MCcode6))
		{
			count=2;
			Npr=i;
			break;
		}
		else continue;
	}
	else
	{
	printf("Erro Lqtop C interface   \n");
	}
}

if (count==1)
{
	for (k=0;k<24;k++)
	{
		pveccp[k]=pvec[k];
	}
}
else if (count==2)
{
	for (k=0;k<16;k++)
	{
		pveccp[k]=pvec[k];
	}
	for (k=16;k<20;k++)
	{
		pveccp[k]=pvec[k+4];
	}
	for (k=20;k<24;k++)
	{
		pveccp[k]=pvec[k-4];
	}
}
else
{
	printf("Erro Lqtop C interface   \n");
}

/*
	printf("pveccp  %f\n",pveccp[0]);
	printf("pveccp  %f\n",pveccp[1]);
	printf("pveccp  %f\n",pveccp[2]);
	printf("pveccp  %f\n",pveccp[3]);
	printf("pveccp  %f\n",pveccp[4]);
	printf("pveccp  %f\n",pveccp[5]);
	printf("pveccp  %f\n",pveccp[6]);
	printf("pveccp  %f\n",pveccp[7]);
	printf("pveccp  %f\n",pveccp[8]);
	printf("pveccp  %f\n",pveccp[9]);
	printf("pveccp  %f\n",pveccp[10]);
	printf("pveccp  %f\n",pveccp[11]);
	printf("pveccp  %f\n",pveccp[12]);
	printf("pveccp  %f\n",pveccp[13]);
	printf("pveccp  %f\n",pveccp[14]);
	printf("pveccp  %f\n",pveccp[15]);
	printf("pveccp  %f\n",pveccp[16]);
	printf("pveccp  %f\n",pveccp[17]);
	printf("pveccp  %f\n",pveccp[18]);
	printf("pveccp  %f\n",pveccp[19]);
	printf("pveccp  %f\n",pveccp[20]);
	printf("pveccp  %f\n",pveccp[21]);
	printf("pveccp  %f\n",pveccp[22]);
	printf("pveccp  %f\n",pveccp[23]);

	printf("Npr  GG   err  f2 %d  %f  %d  %f\n",Npr,*GG,err,sqme_out(Npr,*GG,pveccp,&err));

*/


calcFunc_out();
build_cb_out(Npr);


*f2=sqme_out(Npr,*GG,pveccp,&err);
*cb_nc=cb_nc_out;
*cb_pow=cb_pow_out;

sum=0.0;
for (i=0;i<cb_pow_out;i++) 
{
	sum=sum+cb_coeff_out[i];
}
if (sum==0)
{
	rnd=cb_pow_out*rand()/(RAND_MAX+1.0);
	sum=0.0;
	for (i=0;i<cb_pow_out;i+=1) 
	{
		sum++;
		if (sum<rnd)
		{
			continue;
       		}
		else
		{
			k=0;
			for (j=i*2*cb_nc_out;j<(i+1)*2*cb_nc_out;j++)
			{
				cb_chain[k]=cb_chains_out[j];
				k++;
			}
		break;
		}
	}
}
else
{
	rnd=sum*rand()/(RAND_MAX+1.0);
	sum=0.0;
	for (i=0;i<cb_pow_out;i+=1) 
	{
		sum=sum+cb_coeff_out[i];
		if (sum<rnd)
		{
			continue;
		}
		else
		{
			k=0;
			for (j=i*2*cb_nc_out;j<(i+1)*2*cb_nc_out;j++)
			{

				cb_chain[k]=cb_chains_out[j];
				k++;
			}
			break;
		}
	}
}



if (count==1)
{
	for (i=0;i<6;i++)
	{
		if (cb_chain[i]==3)
		{
			cb_chain[i]=400;
		}
		else if (cb_chain[i]==4)
		{
			cb_chain[i]=500;
		}
		else if (cb_chain[i]==5)
		{
			cb_chain[i]=300;
		}
		else continue;
	}

	for (i=0;i<6;i++)
	{
		if (cb_chain[i]==300) 
		{
			cb_chain[i]=3;
		}
		else if (cb_chain[i]==400)
		{
			cb_chain[i]=4;
		}
		else if (cb_chain[i]==500)
		{
			cb_chain[i]=5;
		}
		else continue;
	}

}

if (count==2)
{



	for (i=0;i<6;i++)
	{
		if (cb_chain[i]==3)
		{
			cb_chain[i]=400;
		}
		else if (cb_chain[i]==4)
		{
			cb_chain[i]=500;
		}
		else if (cb_chain[i]==5)
		{
			cb_chain[i]=600;
		}
		else if (cb_chain[i]==6)
		{
			cb_chain[i]=300;
		}
		else continue;
	}

	for (i=0;i<6;i++)
	{
		if (cb_chain[i]==300) 
		{
			cb_chain[i]=3;
		}
		else if (cb_chain[i]==400)
		{
			cb_chain[i]=4;
		}
		else if (cb_chain[i]==500)
		{
			cb_chain[i]=5;
		}
		else if (cb_chain[i]==600)
		{
			cb_chain[i]=6;
		}
		else continue;
	}


}



destroy_cb_out();

}
