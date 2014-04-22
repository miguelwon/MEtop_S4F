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
/*
extern struct
{
/* double va[15],cb_coeff[4],msq;
 int nin,nout,nprc,nvar,nfunc,cb_pow,cb_nc,cb_chains[32];

} msqvalues_;
*/
extern struct
{
 double Mu,Md,Mc,Ms,Mb,Mtop,MZ,MH,SW,CW,EE,co1,co2,co3,co4,co5,co6,co7,co8,co9,fu,hu,fc,hc,L,Q,miuR,MW,wW,wtop,Me,Mm,Mt,wH,wZ;

} data_;

void msqdtopc_(double *GG,double pvec[20],double *f2,int *cb_nc,int *cb_pow,int cb_chain[4],int subpro[5])
{
 int i,j,k,err,size,Npr,count;
 double rnd,sum;
 int MCcode1,MCcode2,MCcode3,MCcode4,MCcode5,MCcode6;
err=0;

assignVal("EE",data_.EE);
assignVal("SW",data_.SW);
assignVal("MZ",data_.MZ);
assignVal("wW",data_.wW);
assignVal("Mm",data_.Mm);
assignVal("Mt",data_.Mt);
assignVal("Mc",data_.Mc);
assignVal("Ms",data_.Ms);
assignVal("Mtop",data_.Mtop);
assignVal("wtop",data_.wtop);
assignVal("Mb",data_.Mb);
assignVal("fu",data_.fu);
assignVal("hu",data_.hu);
assignVal("fc",data_.fc);
assignVal("hc",data_.hc);
assignVal("L",data_.L);
assignVal("co1",data_.co1);
assignVal("co2",data_.co2);
assignVal("CW",data_.CW);
assignVal("MW",data_.MW);


Npr=0;
for (i=0;i<5;i++)
{
        if (subpro[i]==0) subpro[i]=21;
}

/*
printf("entrou subpro 1  %d\n",subpro[0]);
printf("entrou subpro 2  %d\n",subpro[1]);
printf("entrou subpro 3  %d\n",subpro[2]);
printf("entrou subpro 4  %d\n",subpro[3]);
printf("entrou subpro 5  %d\n",subpro[4]);
*/

for (i=1;i<=nprc_out;i++)
{
	Npr=0;
	count=0;
	pinf_out(i,1,NULL,&MCcode1);
	pinf_out(i,2,NULL,&MCcode2);
	pinf_out(i,3,NULL,&MCcode3);
	pinf_out(i,4,NULL,&MCcode4);
	pinf_out(i,5,NULL,&MCcode5);


	if ((subpro[0]==MCcode1) && (subpro[1]==MCcode2) && (subpro[2]==MCcode3) && (subpro[3]==MCcode4) && (subpro[4]==MCcode5))
	{
		count=1;
		Npr=i;
		break;
	}
	else continue;
}


if (Npr == 0) 
{
printf("Erro Dtop C interface   \n");
return;
}


calcFunc_out();

build_cb_out(Npr);

/*
 printf("teste %f\n",va_out[0]);
 printf("teste %f\n",va_out[1]);
 printf("teste %f\n",va_out[2]);
 printf("teste %f\n",va_out[3]);
 printf("teste %f\n",va_out[4]);
 printf("teste %f\n",va_out[5]);
 printf("teste %f\n",va_out[6]);
 printf("teste %f\n",va_out[7]);
 printf("teste %f\n",va_out[8]);
 printf("teste %f\n",va_out[9]);
 printf("teste %f\n",va_out[10]);
 printf("teste %f\n",va_out[11]);
 printf("teste %f\n",va_out[12]);
 printf("teste %f\n",va_out[13]);
 printf("teste %f\n",va_out[14]);
 printf("teste %f\n",va_out[15]);
 printf("teste %f\n",va_out[16]);
 printf("teste %f\n",va_out[17]);
 printf("teste %f\n",va_out[18]);


 printf("teste pvec  %f\n",pvec[0]);
 printf("teste pvec  %f\n",pvec[1]);
 printf("teste pvec  %f\n",pvec[2]);
 printf("teste pvec  %f\n",pvec[3]);
 printf("teste pvec  %f\n",pvec[4]);
 printf("teste pvec  %f\n",pvec[5]);
 printf("teste pvec  %f\n",pvec[6]);
 printf("teste pvec  %f\n",pvec[7]);
 printf("teste pvec  %f\n",pvec[8]);
 printf("teste pvec  %f\n",pvec[9]);
 printf("teste pvec  %f\n",pvec[10]);
 printf("teste pvec  %f\n",pvec[11]);
 printf("teste pvec  %f\n",pvec[12]);
 printf("teste pvec  %f\n",pvec[13]);
 printf("teste pvec  %f\n",pvec[14]);
 printf("teste pvec  %f\n",pvec[15]);
 printf("teste pvec  %f\n",pvec[16]);
 printf("teste pvec  %f\n",pvec[17]);
 printf("teste pvec  %f\n",pvec[18]);
 printf("teste pvec  %f\n",pvec[19]);
*/

*f2=sqme_out(Npr,*GG,pvec,&err);

*cb_nc=cb_nc_out;
*cb_pow=cb_pow_out;

sum=0.0;
for (i=0;i<cb_pow_out;i++)
{
	sum=sum+cb_coeff_out[i];
/*	printf("cpeff  %f\n",cb_coeff_out[i]);*/
}


/* printf("C  %d  %d  %d  %f\n",cb_pow_out,cb_nc_out,err,sum);*/


if(sum==0)
{
rnd=cb_pow_out*rand()/(RAND_MAX+1.0);
sum=0.0;
for (i=0;i<cb_pow_out;i+=1) 
{
	sum++;
	if(sum<rnd)
	{
		continue;
	}
	else
	{
		k=0;
		for (j=i*2*cb_nc_out;j<(i+1)*2*cb_nc_out;j++)
		{
/*                printf("j:  %d\n",j);*/
			cb_chain[k]=cb_chains_out[j];
/*		printf("%d  ",cb_chains_out[j]);*/
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
	if(sum<rnd)
	{
		continue;
	}
	else
	{
		k=0;
		for (j=i*2*cb_nc_out;j<(i+1)*2*cb_nc_out;j++)
		{
/*                printf("j:  %d\n",j);*/
			cb_chain[k]=cb_chains_out[j];
/*		printf("%d  ",cb_chains_out[j]);*/
			k++;
		}
		break;
	}
	}
}

destroy_cb_out();


}
