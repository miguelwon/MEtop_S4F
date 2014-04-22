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

void msqgtopc_(double *GG,double pvec[24],double *f2,int *cb_nc,int *cb_pow,int cb_chain[6],int subpro[3])
{
 int i,j,k,err,size,Npr;
 double rnd,sum;
 int MCcode1,MCcode2,MCcode3;
/* int result[10];*/

 err=0;

/* for (j=0;j<=1;j++)
{

 ASCIItoInt(varName_out[j],result);
 for (i=0;i<10;i++)
{
  msqvalues_.ASCIIvarName[j][i]=result[i];
}

}
*/
/*
 printf("character %c\n",subpro[0]);
 printf("character %c\n",subpro[1]);
 printf("character %c\n",subpro[2]);
 printf("character %c\n",subpro[3]);
*/
 assignVal("EE",data_.EE);
 assignVal("SW",data_.SW);
 assignVal("MZ",data_.MZ);
 assignVal("wW",data_.wW);
 assignVal("Mm",data_.Mm);
 assignVal("Mc",data_.Mc);
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


for (i=0;i<3;i++)
{
        if (subpro[i]==0) subpro[i]=21;
}


 Npr=0;
 for (i=1;i<=nprc_out;i++){

        pinf_out(i,1,NULL,&MCcode1);
        pinf_out(i,2,NULL,&MCcode2);
        pinf_out(i,3,NULL,&MCcode3);


        if ((subpro[0]==MCcode1) && (subpro[1]==MCcode2) && (subpro[2]==MCcode3) )
        {
		Npr=i;
		break;
	}
 }

 if (Npr == 0)
 {
 printf("Erro Gtop C interface\n");
 return;
 }

 calcFunc_out();

 build_cb_out(Npr);


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

/* printf("msq %f\n",sqme_out(*Npr,*GG,pvec,&err));
 printf(" Npr, GG, err :  %d  %f  %d\n",*Npr,*GG,err);
*/
/*
 for (i=0;i<nvar_out+1;i+=1)
    {
      printf("teste  %d  %f\n",i,va_out[i]);
    }

 for (i=0;i<24;i+=1)
    {
      printf("pvec %d   %f\n",i,pvec[i]);
    }

 printf("dentro do C antes  %d %f %f %f %d\n",*Npr,*GG,pvec[3],msqvalues_.msq,err);



 msqvalues_.msq=sqme_out(8,1.116,pvec,&err);

 printf("dentro do C depois %d %f %f %f %d\n",*Npr,*GG,pvec[3],msqvalues_.msq,err);

 for (i=0;i<nvar_out;i+=1) 
    {
	msqvalues_.va[i]=va_out[i];
    }
 msqvalues_.nin=nin_out;
 msqvalues_.nout=nout_out;
 msqvalues_.nprc=nprc_out;
 msqvalues_.nvar=nvar_out;
 msqvalues_.nfunc=nfunc_out;
 msqvalues_.cb_pow=cb_pow_out;
 msqvalues_.cb_nc=cb_nc_out;

 printf("cb_pow   %d\n",cb_pow_out);
 printf("cb_nc   %d\n",cb_nc_out);

 for (i=0;i<2*cb_pow_out*cb_nc_out;i+=1)
    {
	msqvalues_.cb_chains[i]=cb_chains_out[i];
    }
 for (i=0;i<cb_nc_out;i+=1) 
    {
	msqvalues_.cb_coeff[i]=cb_coeff_out[i];
    }

*/
}
