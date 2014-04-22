
static REAL computer_eps=0.;

static void get_eps(void)
{  
   REAL z;
   for(computer_eps=1.E-8;;computer_eps/=1.5){z=1+computer_eps; if(z==1) return;}
}

int calcFunc_out(void)
{ int i,recalc;
  static double*va_mem=NULL;
  static int gg=0,err_mem;

  if(computer_eps==0.) get_eps();
  if(va_mem==NULL) recalc=1; else
  {  recalc=0;
     for(i=1;i<=nvar_out;i++)
     if(i!=gg && va_mem[i]!=va_out[i]) {recalc=1; break;}
  }

  if(recalc)
  { 
    if(va_mem==NULL)
    { va_mem=(double*)malloc(sizeof(double)*(nvar_out+1));
      for(gg=0,i=1;i<=nvar_out;i++)  if(strcmp("GG",varName_out[i])==0)
      { gg=i; break;}
    }

    for(i=1;i<=nvar_out;i++) va_mem[i]=va_out[i];
    for(i=1;i<=nprc_out;i++)  calcall[i]=1;

    err_mem=calcFunc_stat();
  } 

  return err_mem;
}


static int ** c_perm=NULL;
static REAL * cw_buff=NULL;
static int cb_nsub=0;

int cb_pow_out=0;
int cb_nc_out=0;
int * cb_chains_out=NULL;
REAL * cb_coeff_out=NULL;


void destroy_cb_out(void)
{ 
  int i;
  if(c_perm)
  {  int nperm=1+indx_(nout_out-2,nout_out-1);
     for(i=0;i<nperm;i++) if(c_perm[i]) free(c_perm[i]);
     free(c_perm); c_perm=NULL;
  }   
  if(cw_buff) { free(cw_buff); cw_buff=NULL;} 
  if(cb_coeff_out){ free(cb_coeff_out); cb_coeff_out=NULL;}
  if(cb_chains_out) cb_chains_out=NULL; 
  cb_pow_out=0;
  cb_nc_out=0;
  cb_nsub=0;
}

void build_cb_out(int nsub)
{  
  int i,j;
  char * name_i, * name_j;
  int nperm=1+indx_(nout_out-2,nout_out-1);
  int * chains2;

  cStrings(nsub,&cb_nc_out,&cb_pow_out,&cb_chains_out);
  chains2=malloc(2*sizeof(int)*cb_nc_out*cb_pow_out); 

  cw_buff=(REAL*)malloc(sizeof(REAL)*cb_pow_out);
  cb_coeff_out=(REAL*)malloc(sizeof(REAL)*cb_pow_out);
  c_perm=malloc(sizeof(int*)*nperm);
  for(i=0;i<nperm;i++) c_perm[i]=NULL;

  for(i=0;i<nout_out-1;i++) for(j=i+1;j<nout_out;j++)                                
  {                                                                            
     name_i=pinf_out(nsub,i+nin_out+1,NULL,NULL);                                    
     name_j=pinf_out(nsub,j+nin_out+1,NULL,NULL);                                    
     if(!strcmp(name_i,name_j))                                                
     {  int k,l,l2;
        memcpy(chains2,cb_chains_out,2*sizeof(int)*cb_nc_out*cb_pow_out);                 

        c_perm[indx_(i,j)]=malloc(sizeof(int)*cb_pow_out);                    

        for(k=0;k<2*cb_nc_out*cb_pow_out;k++)                                        
        if(chains2[k]==i+nin_out+1) chains2[k]=j+nin_out+1;                        
        else if(chains2[k]==j+nin_out+1) chains2[k]=i+nin_out+1;                   

        for(l=0;l<cb_pow_out;l++)                                             
        {                                                                      
           int * c=chains2+2*cb_nc_out*l;                                            
           k=0;                                                                
           while(k<2*cb_nc_out-2) if(c[k]>c[k+2])                                     
           {  int c2=c[k];                                                     
              int c3=c[k+1];                                                   
              c[k]=c[k+2];                                                     
              c[k+1]=c[k+3];                                                   
              c[k+2]=c2;                                                       
              c[k+3]=c3;                                                       
              if(k>0) k-=2;else k+=2;                                          
           } else k+=2;                                                        
                                                                               
           for(l2=0;l2<cb_pow_out;l2++)                                       
           {  int * cc=cb_chains_out+2*cb_nc_out*l2;                                        
              for(k=0;k<2*cb_nc_out;k++) if(c[k]!=cc[k]) break;                       
              if(k==2*cb_nc_out)                                                      
              { c_perm[indx_(i,j)][l]=l2;                                      
                break;                                                         
              }                                                                
           }                                                                   
                                                                               
           if(l2==cb_pow_out) fprintf(stderr,"Can not construct permutation\n");      
        }                                                                      
     }
  }  
  free(chains2);
  cb_nsub=nsub;                                                                          
}


static REAL smpl(int nsub, double GG,REAL * momenta,int * err)
{  REAL r;
   if(nsub>nprc_out) return 0;
   CalcConst=calcall[nsub];
   r=darr[nsub-1](GG,momenta,err);
   calcall[nsub]=0;
   return r;
}

static REAL simSqme(int nsub, double GG,REAL * momenta, int ntot,int level,int*err)
{
  REAL ans, buff;
  int n,i,k;

  if(level==ntot)  return smpl(nsub,GG,momenta,err);

  ans=simSqme(nsub,GG,momenta,ntot,level+1,err);

  n=1;

  for (i=level+1;i<=ntot;i++)
  {  int *p= cb_pow_out? c_perm[indx_(i-nin_out-1,level-nin_out-1)]:NULL;

     if(particles[i] == particles[level]) 
     {  for(k=0;k<4;k++) 
        {  buff=momenta[k+4*level-4];
           momenta[k+4*level-4]=momenta[k+4*i-4];
           momenta[k+4*i-4]=buff;           
        }
        if(cb_pow_out && p)
        { int m;
          memcpy(cw_buff,cb_coeff_out,sizeof(REAL)*cb_pow_out);
          for(m=0;m<cb_pow_out;m++) cb_coeff_out[m] = cw_buff[p[m]];       
        }

        ans+=simSqme(nsub,GG,momenta,ntot,level+1,err);
        for(k=0;k<4;k++) 
        {  buff=momenta[k+4*level-4];
           momenta[k+4*level-4]=momenta[k+4*i-4];   
           momenta[k+4*i-4]=buff;
        }
        if(cb_pow_out && p)
        { int m;
          memcpy(cw_buff,cb_coeff_out,sizeof(REAL)*cb_pow_out);
          for(m=0;m<cb_pow_out;m++) cb_coeff_out[p[m]] = cw_buff[m];       
        }  
        n++;
     }
  }
  return ans/n;
}


double sqme_out(int nsub, double GG,  REAL * momenta, int * err)
{
  int i;
  REAL result; 
  if(nin_out==2)
  { double dp0=momenta[0]*momenta[4]-momenta[1]*momenta[5] 
    - momenta[2]*momenta[6]- momenta[3]*momenta[7];
    HelicityN[0]=Helicity[0]/dp0;
    HelicityN[1]=Helicity[1]/dp0;
  }
  if(particles[0]!=nsub)
  {int  ntot=nin_out+nout_out;                                                             

     particles[0]=nsub;                                                                               
     for(i=1;i<=ntot;i++) particles[i]=i;                                          

     for(i=1;i<ntot;i++) if (particles[i]==i)                                      
     { int j;
       char * name_i=pinf_out(nsub,i,NULL,NULL);                                           
       for(j=i+1;j<=ntot;j++)if (particles[j]==j)                                  
       { char * name_j=pinf_out(nsub,j,NULL,NULL);                                          
         if(strcmp(name_i,name_j)==0) particles[j]=i;                              
       }                                                                          
     }
  }                                                                              
  if(cb_nsub && cb_nsub!=nsub) destroy_cb_out();

  if(cb_pow_out) for(i=0;i<cb_pow_out;i++) cb_coeff_out[i]=0;
   
  Fmax=0; 
  result=simSqme(nsub,GG,momenta,nin_out+nout_out,nin_out+1,err);
  if(!(*err) && Fmax*computer_eps*100 > (result>0 ? result : -result) )
  { *err=1; result=0;}

   return (double)result;
}
