#!/usr/bin/python

#!/usr/bin/env python
import signal
import numpy as np
import sys,os,subprocess
cwd = os.getcwd()
sys.path.append(cwd+'/lib')
from classes import *

dparam=readpara('param.dat')	
if dparam==0: sys.exit()
try:
	csflag=dparam[map(lambda x:x[0],dparam).index('cs')][1]
	ProcFlag=dparam[map(lambda x:x[0],dparam).index('Process')][1]
except ValueError:
	sys.exit("Cross Section flag not defined properly.")


####################
Mu=dparam[0][1]
Md=dparam[1][1]
Mc=dparam[2][1]
Ms=dparam[3][1]
Mb=dparam[4][1]
Mtop=dparam[5][1]
MZ=dparam[6][1]
MW=dparam[7][1]
MH=dparam[8][1]
Me=dparam[9][1]
Mm=dparam[10][1]
Mt=dparam[11][1]
wW=dparam[12][1]
wtop=dparam[13][1]
wH=dparam[14][1]
wZ=dparam[15][1]
SW=dparam[16][1]
EE=dparam[17][1]
s12=dparam[18][1]
s23=dparam[19][1]
s13=dparam[20][1]
co1=dparam[21][1]
co2=dparam[22][1]
co27=dparam[23][1]
co28=dparam[24][1]
co29=dparam[25][1]
co30=dparam[26][1]
co31=dparam[27][1]
co32=dparam[28][1]
co33=dparam[29][1]
co34=dparam[30][1]
co35=dparam[31][1]
co36=dparam[32][1]
co37=dparam[33][1]
co38=dparam[34][1]
co39=dparam[35][1]
co40=dparam[36][1]
co41=dparam[37][1]
co42=dparam[38][1]
co43=dparam[39][1]
co44=dparam[40][1]
fu=dparam[41][1]
hu=dparam[42][1]
fc=dparam[43][1]
hc=dparam[44][1]
Q=dparam[45][1]
MiuR=dparam[46][1]
L=dparam[47][1]
ECM=dparam[48][1]
PTmatch=dparam[49][1]
PTmin=dparam[50][1]
NEvnts=int(dparam[51][1])
PARP67=1.0
pdf=dparam[52][1]
pp=dparam[53][1]
DecMod=dparam[54][1]
SpCorr=int(dparam[55][1])
ttbar=int(dparam[56][1])
sed=int(dparam[57][1])
####################
np.random.seed(sed)
os.system('cp src/ranmar_bkp.c src/ranmar.c')
os.system('grep -rl \'kl = 2324;\' src/ranmar.c | xargs sed -i \'s/kl = 2324;/kl = '+str(sed)+';/\'')
os.system('gcc -c src/ranmar.c -o src/ranmar.o')
##################
if ProcFlag==1:
	ListProcess=['DtopLO']
elif ProcFlag==2:
	ListProcess=['Gtop']
elif ProcFlag==3:
	ListProcess=['Lqtop']
elif ProcFlag==21:
	ListProcess=['DtopLO','DtopNLO','Gtop']
elif ProcFlag==22:
	ListProcess=['DtopLO','DtopNLO','Gtop','Lqtop']
else:
	sys.exit("Process flag not defined properly.")
#################
#qList=['T','B','C','S','U','D','G','d','u','s','c','b','t']
qList=['N3','E3','N2','E2','N1','E1','oo','oo','oo','oo','T','B','C','S','U','D','G','d','u','s','c','b','t','oo','oo','oo','oo','e1','n1','e2','n2','e3','n3']
qMList=[0.0,Mt,0.0,Mm,0.0,Me,0,0,0,0,Mtop,Mb,Mc,Ms,Mu,Md,0.0,Md,Mu,Ms,Mc,Mb,Mtop,0,0,0,0,Me,0.0,Mm,0.0,Mt,0.0]

#################
proton=['u','U','d','D','c','C','s','S','b','B','G']
#proton=['d','B']
protonPDG=map(lambda x:qList.index(x)-16,proton)
Lquark=['U','C','D','S','B','u','c','d','s','b']
#Lquark=['u','c']
LquarkPDG=map(lambda x:qList.index(x)-16,Lquark)
#### t,tbar or both (0- t only,1- tbar only,2- t and tbar)
if ttbar == 0:
        top=['t']
elif ttbar == 1:
        top=['T']
elif ttbar == 2:
        top=['t','T']
else:
        sys.exit('Error in ttbar flag')
topPDG=map(lambda x:qList.index(x)-16,top)
CoefL=[1.0,co1,co2,co27,co28,co29,co30,co31,co32,co33,co34,co35,co36,co37,co38,co39,co40,co41,co42,co43,co44];
#################
if csflag==0 or csflag==2:
####################################
###  calculate cross sections
####################################

	for process in ListProcess:
		if 'Dtop' in process:
			processo=ProcessClass(process,CoefL,2,1)
			processo.CalcSubPro([protonPDG,protonPDG],[topPDG])
			processo.WriteSubPro()
		elif 'Gtop' in process:
			processo=ProcessClass(process,CoefL,2,2)
			processo.CalcSubPro([protonPDG,protonPDG],[[0],topPDG])
			processo.WriteSubPro()
		elif 'Lqtop' in process:
			processo=ProcessClass(process,CoefL,2,2)
			processo.CalcSubPro([protonPDG,protonPDG],[LquarkPDG,topPDG])
			processo.WriteSubPro()
		os.chdir(cwd+'/temp')

#		sys.exit()
		if 'Dtop' in process:
			os.system('gcc CalcCS'+process+'.c ../src/pdf.o -lcuba ../lib/libDtop23.a -lm -lLHAPDF -o runcs'+process+'.exe')
			os.system('./runcs'+process+'.exe')
			os.chdir(cwd)
		elif 'Gtop' in process:
			os.system('gcc CalcCSGtop.c ../src/pdf.o -lcuba ../lib/libGtop24.a -lm -lLHAPDF -o runcsGtop.exe')
			os.system('./runcsGtop.exe')
			os.chdir(cwd)
		elif 'Lqtop' in process:
			os.system('gcc CalcCSLqtop.c ../src/pdf.o -lcuba ../lib/libLqtop24.a -lm -lLHAPDF -o runcsLqtop.exe')
			os.system('./runcsLqtop.exe')
			os.chdir(cwd)
	print "Cross Sections calculated. Check CS folder"
####################################################
if csflag==1 or csflag==2:

	genEvnt=genClass(ListProcess)
	genEvnt.WritegenSubPro()
#	print genEvnt.ListProcess
#	print genEvnt.ListSubProc
#	print genEvnt.ListNEvnts
	ListProcess=genEvnt.ListProcess

	os.chdir(cwd+'/temp')
	for process in ListProcess:
		if 'Dtop' in process:
			os.system('gcc gen'+process+'.c ../src/pdf.o ../src/ranmar.o ../lib/libDtop23.a -lm -lLHAPDF -o genEvnt'+process+'.exe')
			os.system('./genEvnt'+process+'.exe')
		elif 'Gtop' in process:
			os.system('gcc gen'+process+'.c ../src/pdf.o ../src/ranmar.o ../lib/libGtop24.a -lm -lLHAPDF -o genEvnt'+process+'.exe')
			os.system('./genEvnt'+process+'.exe')
		elif 'Lqtop' in process:
			os.system('gcc gen'+process+'.c ../src/pdf.o ../src/ranmar.o ../lib/libLqtop24.a -lm -lLHAPDF -o genEvnt'+process+'.exe')
			os.system('./genEvnt'+process+'.exe')
	os.chdir(cwd)

	writeEvnt=['']*len(genEvnt.ListSubProc)
	count=0
	NumeroAcont=[]
	for k in range(len(genEvnt.ListSubProc)):
		if genEvnt.ListNEvnts[k]>0:
			writeEvnt[count]=WriteLHEClass(genEvnt.ListSubProc[k],genEvnt.ListProc[k],genEvnt.ListNEvnts[k],SpCorr,pp)
			writeEvnt[count].ReadRaw(writeEvnt[count].file)
			NumeroAcont.append(genEvnt.ListNEvnts[k])
			if 'Dtop' in genEvnt.ListProc[k]:
				if ProcFlag == 21 or ProcFlag == 22:
						writeEvnt[count].FillInfo(writeEvnt[count].Npart,writeEvnt[count].Npr,1,1.0*PTmatch/np.sqrt(PARP67),-1)
				else:
						writeEvnt[count].FillInfo(writeEvnt[count].Npart,writeEvnt[count].Npr,1,Q,-1)
				writeEvnt[count].FillEventsDecay(writeEvnt[count].ListFlav,[-1,-1,2,1,2,1,1],[0,0,1,3,3,5,5],[0,0,2,0,0,0,0],[0,0,0,0,0,0,0],[9,9,9,9,9,9,9])
			else:
				if 'Lqtop' in genEvnt.ListProc[k]:
					writeEvnt[count].FillInfo(writeEvnt[count].Npart,1,1,Q,-1)
				else:
					writeEvnt[count].FillInfo(writeEvnt[count].Npart,writeEvnt[count].Npr,1,Q,-1)
				writeEvnt[count].FillEventsDecay(writeEvnt[count].ListFlav,[-1,-1,1,2,1,2,1,1],[0,0,1,1,4,4,6,6],[0,0,2,2,0,0,0,0],[0,0,0,0,0,0,0,0],[9,9,9,9,9,9,9,9])
			count+=1
		else: continue

	ffinal=open("Events/mix.lhe",'w')
	cumulativa=['']*len(NumeroAcont)
	while sum(NumeroAcont)>0:
		count=0
		soma=0
		for k in NumeroAcont:
			soma=soma+k
			cumulativa[count]=soma
			count+=1

		tiro=int(cumulativa[len(cumulativa)-1]*np.random.random())
		count=0
		for k in cumulativa:
			if tiro < k:
				writeEvnt[count].Write(NumeroAcont[count],ffinal)
				NumeroAcont[count]=NumeroAcont[count]-1
				break
			else:
				count+=1
				continue
	ffinal.close()
	os.system('rm temp/*temp*')

	if ProcFlag <= 3:
		os.system('cat Events/mix.lhe >> '+'Events/'+ListProcess[0].replace('LO','')+'.lhe')
		os.system('rm Events/mix.lhe')
	else:
		if ProcFlag==21:
			fdtop=open("Events/DtopNLO.lhe",'r')
			fgtop=open("Events/GtopNLO.lhe",'r')
			SecTotal=0
			ErroTotal=0
			NEvntTotal=0
			passou=0
			NumeroSubpro=0
			count=0
			for k in fdtop:
				if 'Number of Events' in k:
					NEvntTotal+=int(k.split(':')[1])
				elif '<init>' in k:
					passou=1
					continue
				elif '</init>' in k:
					break
				if passou==1:
					NumeroSubpro=int(k.split()[9])
					passou=2
				elif passou==2 and count<NumeroSubpro:
					SecTotal+=float(k.split()[0])
					ErroTotal+=float(k.split()[1])**2
					count+=1
			passou=0
			NumeroSubpro=0
			count=0
			for k in fgtop:
				if 'Number of Events' in k:
					NEvntTotal+=int(k.split(':')[1])
				elif '<init>' in k:
					passou=1
					continue
				elif '</init>' in k:
					break
				if passou==1:
					NumeroSubpro=int(k.split()[9])
					passou=2
				elif passou==2 and count<NumeroSubpro:
					SecTotal+=float(k.split()[0])
					ErroTotal+=float(k.split()[1])**2
					count+=1
			ErroTotal=ErroTotal**0.5
			fdtop.close()
			fgtop.close()
			fdtop=open("Events/DtopNLO.lhe",'w')
			fdtop.write("<LesHouchesEvents version=\"1.0\">\n")
			fdtop.write("<!--\n")
			fdtop.write("\#File generated with MEtop\n")
			fdtop.write("-->\n")
			fdtop.write("<init>\n")
			if pp == 1:
				fdtop.write('    {0:5d} {1:5d} {2:5.2f} {3:5.2f} {4:2d} {5:2d} {6:2d} {7:2d} {8:2d} {9:2d}\n'.format(2212,2212,ECM/2,ECM/2,-1,-1,-1,-1,3,1) )
				fdtop.write('    {0:1.3e} {1:1.3e} {2:1.1f} {3:1d}\n'.format(SecTotal,ErroTotal,1.0,1))
				fdtop.write("</init>\n")
			elif pp == -1:
				fdtop.write('    {0:5d} {1:5d} {2:5.2f} {3:5.2f} {4:2d} {5:2d} {6:2d} {7:2d} {8:2d} {9:2d}\n'.format(2212,-2212,ECM/2,ECM/2,-1,-1,-1,-1,3,1) )
				fdtop.write('    {0:1.3e} {1:1.3e} {2:1.1f} {3:1d}\n'.format(SecTotal,ErroTotal,1.0,1))
				fdtop.write("</init>\n")
			fmix=open('Events/mix.lhe')
			for line in fmix:
				linelist=line.split()
				if len(linelist) == 6:
					fdtop.write(' '+linelist[0]+'  1  '+linelist[2]+'  '+linelist[3]+'  '+linelist[4]+'  '+linelist[5]+'\n')
				else:
					fdtop.write(line)

			fdtop.close()
			fmix.close()
			os.system('rm Events/mix.lhe Events/GtopNLO.lhe')
		else:
			fdtop=open("Events/DtopNLO.lhe",'r')
			fgtop=open("Events/GtopNLO.lhe",'r')
			flqtop=open("Events/LqtopNLO.lhe",'r')
			SecTotal=0
			ErroTotal=0
			NEvntTotal=0
			passou=0
			NumeroSubpro=0
			count=0
			for k in fdtop:
				if 'Number of Events' in k:
					NEvntTotal+=int(k.split(':')[1])
				elif '<init>' in k:
					passou=1
					continue
				elif '</init>' in k:
					break
				if passou==1:
					NumeroSubpro=int(k.split()[9])
					passou=2
				elif passou==2 and count<NumeroSubpro:
					SecTotal+=float(k.split()[0])
					ErroTotal+=float(k.split()[1])**2
					count+=1
			passou=0
			NumeroSubpro=0
			count=0
			for k in fgtop:
				if 'Number of Events' in k:
					NEvntTotal+=int(k.split(':')[1])
				elif '<init>' in k:
					passou=1
					continue
				elif '</init>' in k:
					break
				if passou==1:
					NumeroSubpro=int(k.split()[9])
					passou=2
				elif passou==2 and count<NumeroSubpro:
					SecTotal+=float(k.split()[0])
					ErroTotal+=float(k.split()[1])**2
					count+=1
			passou=0
			NumeroSubpro=0
			count=0
			for k in flqtop:
				if 'Number of Events' in k:
					NEvntTotal+=int(k.split(':')[1])
				elif '<init>' in k:
					passou=1
					continue
				elif '</init>' in k:
					break
				if passou==1:
					NumeroSubpro=int(k.split()[9])
					passou=2
				elif passou==2 and count<NumeroSubpro:
					SecTotal+=float(k.split()[0])
					ErroTotal+=float(k.split()[1])**2
					count+=1
			ErroTotal=ErroTotal**0.5
			fdtop.close()
			fgtop.close()
			flqtop.close()
			fdtop=open("Events/DtopNLO.lhe",'w')
			fdtop.write("<LesHouchesEvents version=\"1.0\">\n")
			fdtop.write("<!--\n")
			fdtop.write("\#File generated with MEtop\n")
			fdtop.write("-->\n")
			fdtop.write("<init>\n")
			if pp == 1:
				fdtop.write('    {0:5d} {1:5d} {2:5.2f} {3:5.2f} {4:2d} {5:2d} {6:2d} {7:2d} {8:2d} {9:2d}\n'.format(2212,2212,ECM/2,ECM/2,-1,-1,-1,-1,3,1) )
				fdtop.write('    {0:1.3e} {1:1.3e} {2:1.1f} {3:1d}\n'.format(SecTotal,ErroTotal,1.0,1))
				fdtop.write("</init>\n")
			elif pp == -1:
				fdtop.write('    {0:5d} {1:5d} {2:5.2f} {3:5.2f} {4:2d} {5:2d} {6:2d} {7:2d} {8:2d} {9:2d}\n'.format(2212,-2212,ECM/2,ECM/2,-1,-1,-1,-1,3,1) )
				fdtop.write('    {0:1.3e} {1:1.3e} {2:1.1f} {3:1d}\n'.format(SecTotal,ErroTotal,1.0,1))
				fdtop.write("</init>\n")
			fmix=open('Events/mix.lhe')
			for line in fmix:
				linelist=line.split()
				if len(linelist) == 6:
					fdtop.write(' '+linelist[0]+'  1  '+linelist[2]+'  '+linelist[3]+'  '+linelist[4]+'  '+linelist[5]+'\n')
				else:
					fdtop.write(line)

			fdtop.close()
			fmix.close()
			os.system('rm Events/mix.lhe Events/GtopNLO.lhe Events/LqtopNLO.lhe')

##########################################
if csflag!=1 and csflag!=2 and csflag!=0:
	sys.exit('Error in csflag')

