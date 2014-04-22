import sys,os,subprocess
cwd = os.getcwd()

def readpara(fpar):
        L=[]
        fparam=open(fpar,'r')
        countp=0
        for i in fparam:
                if "##" not in i:
			if i.split()[0]!='pdf':
				try:
					L.append([i.split()[0],float(i.split()[1])])
					continue
	                        except ValueError:
					print i
					print "Error reading paramters card!"
					return 0
					break
			else:
	                        try:
                                        L.append([i.split()[0],i.split()[1]])
					continue
	                        except ValueError:
					print i
					print "Error reading paramters card!"
					return 0
					break

        fparam.close()
        return L


dparam=readpara('param.dat')
pdf=dparampdf=dparam[52][1]

fin=open('src/pdfbkp.f','r')
fout=open('src/pdf.f','w')
for line in fin:
	if 'data name' not in line:
		fout.write(line)
	else:
		fout.write('      data name /\''+pdf+'\'/\n')
fin.close()
fout.close()

#os.chdir(cwd+'/src')
#os.system("gfortran -c MSQ*.F cuba*.F")
#os.system("gfortran -c pdf.F random.F")
#os.system("ar rc libCalc.a MSQ*.o cuba*.o pdf.o random.o")
#os.system("mv libCalc.a ../lib")
#os.system("f2py -c -m --fcompiler='gfortran' gen22 gen22.F -lLHAPDF -L../lib -lCalc")
#os.system("f2py -c -m --fcompiler='gfortran' gen21 gen21.F -lLHAPDF -L../lib -lCalc")
#os.system("cp gen22.so ../lib")
#os.system("cp gen21.so ../lib")
#os.system("cp classes.py ../lib")
