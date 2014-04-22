import numpy as np
import sys,os,subprocess



#qList=['T','B','C','S','U','D','G','d','u','s','c','b','t']
qList=['N3','E3','N2','E2','N1','E1','oo','oo','oo','oo','T', \
		'B','C','S','U','D','G','d','u','s','c','b','t', \
		'oo','oo','oo','oo','e1','n1','e2','n2','e3','n3']
qListN=[-6,-5,-4,-3,-2,-1,0,1,2,3,4,5,6]
cwd = os.getcwd()


def readpara(fpar):
	L=[]
	fparam=open(fpar,'r')
	countp=0
	for i in fparam:
		if "##" not in i:
			if i.split()[0]!='pdf' and i.split()[0]!='DecMod':
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



def ShareEvnt(NTotal,CSList):
	NList=[0]*len(CSList)
        TotalCS=sum(CSList)

        Frac=map(lambda x:x/TotalCS,CSList)
        while sum(NList) < NTotal:
                Prand=np.random.random()
                temp=0
                for i in range(len(Frac)):
                        if temp < Prand and Prand <= temp+Frac[i]:
                                NList[i]=NList[i]+1
                                break
                        else:
                                temp=temp+Frac[i]
                                continue
        return NList


class ProcessClass:
	def __init__(self,process,CoefL,NpartIn,NpartOut):
		self.process=process
		self.NpartIn=NpartIn
		self.NpartOut=NpartOut
		self.FlavIn=['']*self.NpartIn
		self.FlavOut=['']*self.NpartOut
		self.co0=CoefL[0]
		self.co1=CoefL[1]
		self.co2=CoefL[2]
		self.co27=CoefL[3]
		self.co28=CoefL[4]
		self.co29=CoefL[5]
		self.co30=CoefL[6]
		self.co31=CoefL[7]
		self.co32=CoefL[8]
		self.co33=CoefL[9]
		self.co34=CoefL[10]
		self.co35=CoefL[11]
		self.co36=CoefL[12]
		self.co37=CoefL[13]
		self.co38=CoefL[14]
		self.co39=CoefL[15]
		self.co40=CoefL[16]
		self.co41=CoefL[17]
		self.co42=CoefL[18]
		self.co43=CoefL[19]
		self.co44=CoefL[20]
		self.dparam=readpara('param.dat')
		self.ProcFlag=self.dparam[len(self.dparam)-1][1]


	def CalcSubPro(self,qIn,qOut):
		PartList=map(lambda x: x,range(10072,9999,-1))+[25,-24,23,22,-6,-5,-4,-3,-2,-1,0,1,2,3,4,5,6,22,23,24,25]+map(lambda x:x,range(10000,10073))
		CPartList=map(lambda x: x,range(10072,9999,-1))+[25,24,23,22,6,5,4,3,2,1,0,-1,-2,-3,-4,-5,-6,22,23,-24,25]+map(lambda x:x,range(10000,10073))
		abdce=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
		PDGL=['G.t']+map(lambda x:'0'+abdce[x],range(len(abdce)-1,-1,-1))+map(lambda x:'0'+abdce[x].upper(),range(len(abdce)-1,-1,-1))
		PDGL=PDGL+map(lambda x:str(x),range(19,9,-1))+map(lambda x:'0'+str(x),range(9,-1,-1))
		PDGL=PDGL+['h','W-','Z','A','T','B','C','S','U','D','G','d','u','s','c','b','t','A','Z','W+','h']
		PDGL=PDGL+map(lambda x:'0'+str(x),range(0,10))+map(lambda x:str(x),range(10,20))
		PDGL=PDGL+map(lambda x:'0'+abdce[x].upper(),range(0,len(abdce)))+map(lambda x:'0'+abdce[x],range(0,len(abdce)))+['G.t']

		ncoupl=189
		CouplL=['','','']*ncoupl

		CouplL[0]=[[-5,5,22],[self.co0],'co0 ']
		CouplL[1]=[[-5,5,0],[self.co0],'co0 ']
		CouplL[2]=[[-5,5,25],[self.co0],'co0 ']
		CouplL[3]=[[-5,5,23],[self.co0],'co0 ']
		CouplL[4]=[[-5,4,-24],[self.co0],'co0 ']
		CouplL[5]=[[-5,6,-24],[self.co0],'co0 ']
		CouplL[6]=[[-5,2,-24],[self.co0],'co0 ']
		CouplL[7]=[[-4,5,24],[self.co0],'co0 ']
		CouplL[8]=[[-4,4,22],[self.co0],'co0 ']
		CouplL[9]=[[-4,4,0],[self.co0],'co0 ']
		CouplL[10]=[[-4,4,25],[self.co0],'co0 ']
		CouplL[11]=[[-4,4,23],[self.co0],'co0 ']
		CouplL[12]=[[-4,1,24],[self.co0],'co0 ']
		CouplL[13]=[[-4,3,24],[self.co0],'co0 ']
		CouplL[14]=[[-4,6,0],[self.co2],'co2 ']
		CouplL[15]=[[-4,6,10003],[self.co2],'co2 ']
		CouplL[16]=[[-4,6,10004],[self.co2],'co2 ']
		CouplL[17]=[[-4,6,10034],[self.co33,self.co34],'co33 co34']
		CouplL[18]=[[-4,6,10035],[self.co33,self.co34],'co33 co34']
		CouplL[19]=[[-4,6,10037],[self.co35,self.co36],'co35 co36']
		CouplL[20]=[[-4,6,10038],[self.co35,self.co36],'co35 co36']
		CouplL[21]=[[-4,6,10040],[self.co37,self.co38],'co37 co38']
		CouplL[22]=[[-4,6,10041],[self.co37,self.co38],'co37 co38']
		CouplL[23]=[[-4,6,10043],[self.co39,self.co40],'co39 co40']
		CouplL[24]=[[-4,6,10044],[self.co39,self.co40],'co39 co40']
		CouplL[25]=[[-4,6,10046],[self.co36],'co36 ']
		CouplL[26]=[[-4,6,10047],[self.co36],'co36 ']
		CouplL[27]=[[-4,6,10049],[self.co38],'co38 ']
		CouplL[28]=[[-4,6,10050],[self.co38],'co38 ']
		CouplL[29]=[[-4,6,10052],[self.co34],'co34 ']
		CouplL[30]=[[-4,6,10053],[self.co34],'co34 ']
		CouplL[31]=[[-4,6,10055],[self.co40],'co40 ']
		CouplL[32]=[[-4,6,10056],[self.co40],'co40 ']
		CouplL[33]=[[-4,6,10058],[self.co41],'co41 ']
		CouplL[34]=[[-4,6,10059],[self.co41],'co41 ']
		CouplL[35]=[[-4,6,10061],[self.co41],'co41 ']
		CouplL[36]=[[-4,6,10063],[self.co41],'co41 ']
		CouplL[37]=[[-4,6,10064],[self.co42],'co42 ']
		CouplL[38]=[[-4,6,10065],[self.co42],'co42 ']
		CouplL[39]=[[-4,6,10067],[self.co42],'co42 ']
		CouplL[40]=[[-4,6,10069],[self.co42],'co42 ']
		CouplL[41]=[[-4,6,10070],[self.co41,self.co43],'co41 co43']
		CouplL[42]=[[-4,6,10071],[self.co41,self.co43],'co41 co43']
		CouplL[43]=[[-4,6,10011],[self.co41,self.co43],'co41 co43']
		CouplL[44]=[[-4,6,10013],[self.co41,self.co43],'co41 co43']
		CouplL[45]=[[-4,6,10014],[self.co42,self.co44],'co42 co44']
		CouplL[46]=[[-4,6,10015],[self.co42,self.co44],'co42 co44']
		CouplL[47]=[[-4,6,10017],[self.co42,self.co44],'co42 co44']
		CouplL[48]=[[-4,6,10019],[self.co42,self.co44],'co42 co44']
		CouplL[49]=[[-1,4,-24],[self.co0],'co0 ']
		CouplL[50]=[[-1,1,22],[self.co0],'co0 ']
		CouplL[51]=[[-1,1,0],[self.co0],'co0 ']
		CouplL[52]=[[-1,1,23],[self.co0],'co0 ']
		CouplL[53]=[[-1,6,-24],[self.co0],'co0 ']
		CouplL[54]=[[-1,2,-24],[self.co0],'co0 ']
		CouplL[55]=[[0,0,0],[self.co0],'co0 ']
		CouplL[56]=[[0,0,10000],[self.co0],'co0 ']
		CouplL[57]=[[0,0,10002],[self.co0],'co0 ']
		CouplL[58]=[[0,0,10003],[self.co0],'co0 ']
		CouplL[59]=[[0,0,10005],[self.co0],'co0 ']
		CouplL[60]=[[-3,4,-24],[self.co0],'co0 ']
		CouplL[61]=[[-3,3,22],[self.co0],'co0 ']
		CouplL[62]=[[-3,3,0],[self.co0],'co0 ']
		CouplL[63]=[[-3,3,25],[self.co0],'co0 ']
		CouplL[64]=[[-3,3,23],[self.co0],'co0 ']
		CouplL[65]=[[-3,6,-24],[self.co0],'co0 ']
		CouplL[66]=[[-3,2,-24],[self.co0],'co0 ']
		CouplL[67]=[[-6,5,24],[self.co0],'co0 ']
		CouplL[68]=[[-6,4,0],[self.co2],'co2 ']
		CouplL[69]=[[-6,4,10003],[self.co2],'co2 ']
		CouplL[70]=[[-6,4,10004],[self.co2],'co2 ']
		CouplL[71]=[[-6,4,10034],[self.co33,self.co34],'co33 co34']
		CouplL[72]=[[-6,4,10035],[self.co33,self.co34],'co33 co34']
		CouplL[73]=[[-6,4,10037],[self.co35,self.co36],'co35 co36']
		CouplL[74]=[[-6,4,10038],[self.co35,self.co36],'co35 co36']
		CouplL[75]=[[-6,4,10040],[self.co37,self.co38],'co37 co38']
		CouplL[76]=[[-6,4,10041],[self.co37,self.co38],'co37 co38']
		CouplL[77]=[[-6,4,10043],[self.co39,self.co40],'co39 co40']
		CouplL[78]=[[-6,4,10044],[self.co39,self.co40],'co39 co40']
		CouplL[79]=[[-6,4,10046],[self.co36],'co36 ']
		CouplL[80]=[[-6,4,10047],[self.co36],'co36 ']
		CouplL[81]=[[-6,4,10049],[self.co38],'co38 ']
		CouplL[82]=[[-6,4,10050],[self.co38],'co38 ']
		CouplL[83]=[[-6,4,10052],[self.co34],'co34 ']
		CouplL[84]=[[-6,4,10053],[self.co34],'co34 ']
		CouplL[85]=[[-6,4,10055],[self.co40],'co40 ']
		CouplL[86]=[[-6,4,10056],[self.co40],'co40 ']
		CouplL[87]=[[-6,4,10058],[self.co41],'co41 ']
		CouplL[88]=[[-6,4,10059],[self.co41],'co41 ']
		CouplL[89]=[[-6,4,10061],[self.co41],'co41 ']
		CouplL[90]=[[-6,4,10063],[self.co41],'co41 ']
		CouplL[91]=[[-6,4,10064],[self.co42],'co42 ']
		CouplL[92]=[[-6,4,10065],[self.co42],'co42 ']
		CouplL[93]=[[-6,4,10067],[self.co42],'co42 ']
		CouplL[94]=[[-6,4,10069],[self.co42],'co42 ']
		CouplL[95]=[[-6,4,10070],[self.co41,self.co43],'co41 co43']
		CouplL[96]=[[-6,4,10071],[self.co41,self.co43],'co41 co43']
		CouplL[97]=[[-6,4,10011],[self.co41,self.co43],'co41 co43']
		CouplL[98]=[[-6,4,10013],[self.co41,self.co43],'co41 co43']
		CouplL[99]=[[-6,4,10014],[self.co42,self.co44],'co42 co44']
		CouplL[100]=[[-6,4,10015],[self.co42,self.co44],'co42 co44']
		CouplL[101]=[[-6,4,10017],[self.co42,self.co44],'co42 co44']
		CouplL[102]=[[-6,4,10019],[self.co42,self.co44],'co42 co44']
		CouplL[103]=[[-6,1,24],[self.co0],'co0 ']
		CouplL[104]=[[-6,3,24],[self.co0],'co0 ']
		CouplL[105]=[[-6,6,22],[self.co0],'co0 ']
		CouplL[106]=[[-6,6,0],[self.co0],'co0 ']
		CouplL[107]=[[-6,6,25],[self.co0],'co0 ']
		CouplL[108]=[[-6,6,23],[self.co0],'co0 ']
		CouplL[109]=[[-6,2,0],[self.co1],'co1 ']
		CouplL[110]=[[-6,2,10000],[self.co1],'co1 ']
		CouplL[111]=[[-6,2,10001],[self.co1],'co1 ']
		CouplL[112]=[[-6,2,10006],[self.co27],'co27 ']
		CouplL[113]=[[-6,2,10007],[self.co27],'co27 ']
		CouplL[114]=[[-6,2,10009],[self.co28,self.co31],'co28 co31']
		CouplL[115]=[[-6,2,10020],[self.co28,self.co31],'co28 co31']
		CouplL[116]=[[-6,2,10022],[self.co29,self.co32],'co29 co32']
		CouplL[117]=[[-6,2,10023],[self.co29,self.co32],'co29 co32']
		CouplL[118]=[[-6,2,10025],[self.co30],'co30 ']
		CouplL[119]=[[-6,2,10026],[self.co30],'co30 ']
		CouplL[120]=[[-6,2,10028],[self.co31],'co31 ']
		CouplL[121]=[[-6,2,10029],[self.co31],'co31 ']
		CouplL[122]=[[-6,2,10031],[self.co32],'co32 ']
		CouplL[123]=[[-6,2,10032],[self.co32],'co32 ']
		CouplL[124]=[[-2,5,24],[self.co0],'co0 ']
		CouplL[125]=[[-2,1,24],[self.co0],'co0 ']
		CouplL[126]=[[-2,3,24],[self.co0],'co0 ']
		CouplL[127]=[[-2,6,0],[self.co1],'co1 ']
		CouplL[128]=[[-2,6,10000],[self.co1],'co1 ']
		CouplL[129]=[[-2,6,10001],[self.co1],'co1 ']
		CouplL[130]=[[-2,6,10006],[self.co27],'co27 ']
		CouplL[131]=[[-2,6,10007],[self.co27],'co27 ']
		CouplL[132]=[[-2,6,10009],[self.co28,self.co31],'co28 co31']
		CouplL[133]=[[-2,6,10020],[self.co28,self.co31],'co28 co31']
		CouplL[134]=[[-2,6,10022],[self.co29,self.co32],'co29 co32']
		CouplL[135]=[[-2,6,10023],[self.co29,self.co32],'co29 co32']
		CouplL[136]=[[-2,6,10025],[self.co30],'co30 ']
		CouplL[137]=[[-2,6,10026],[self.co30],'co30 ']
		CouplL[138]=[[-2,6,10028],[self.co31],'co31 ']
		CouplL[139]=[[-2,6,10029],[self.co31],'co31 ']
		CouplL[140]=[[-2,6,10031],[self.co32],'co32 ']
		CouplL[141]=[[-2,6,10032],[self.co32],'co32 ']
		CouplL[142]=[[-2,2,22],[self.co0],'co0 ']
		CouplL[143]=[[-2,2,0],[self.co0],'co0 ']
		CouplL[144]=[[-2,2,23],[self.co0],'co0 ']
		CouplL[145]=[[-2,2,10006],[self.co0],'co0 ']
		CouplL[146]=[[-2,2,10008],[self.co0],'co0 ']
		CouplL[147]=[[-2,2,10009],[self.co0],'co0 ']
		CouplL[148]=[[-2,2,10021],[self.co0],'co0 ']
		CouplL[149]=[[-2,2,10022],[self.co0],'co0 ']
		CouplL[150]=[[-2,2,10024],[self.co0],'co0 ']
		CouplL[151]=[[-2,2,10025],[self.co0],'co0 ']
		CouplL[152]=[[-2,2,10027],[self.co0],'co0 ']
		CouplL[153]=[[-2,2,10028],[self.co0],'co0 ']
		CouplL[154]=[[-2,2,10030],[self.co0],'co0 ']
		CouplL[155]=[[-2,2,10031],[self.co0],'co0 ']
		CouplL[156]=[[-2,2,10033],[self.co0],'co0 ']
		CouplL[157]=[[-2,2,10034],[self.co0],'co0 ']
		CouplL[158]=[[-2,2,10036],[self.co0],'co0 ']
		CouplL[159]=[[-2,2,10037],[self.co0],'co0 ']
		CouplL[160]=[[-2,2,10039],[self.co0],'co0 ']
		CouplL[161]=[[-2,2,10040],[self.co0],'co0 ']
		CouplL[162]=[[-2,2,10043],[self.co0],'co0 ']
		CouplL[163]=[[-2,2,10045],[self.co0],'co0 ']
		CouplL[164]=[[-2,2,10046],[self.co0],'co0 ']
		CouplL[165]=[[-2,2,10048],[self.co0],'co0 ']
		CouplL[166]=[[-2,2,10049],[self.co0],'co0 ']
		CouplL[167]=[[-2,2,10051],[self.co0],'co0 ']
		CouplL[168]=[[-2,2,10052],[self.co0],'co0 ']
		CouplL[169]=[[-2,2,10054],[self.co0],'co0 ']
		CouplL[170]=[[-2,2,10055],[self.co0],'co0 ']
		CouplL[171]=[[-2,2,10057],[self.co0],'co0 ']
		CouplL[172]=[[-2,2,10058],[self.co0],'co0 ']
		CouplL[173]=[[-2,2,10060],[self.co0],'co0 ']
		CouplL[174]=[[-2,2,10061],[self.co0],'co0 ']
		CouplL[175]=[[-2,2,10062],[self.co0],'co0 ']
		CouplL[176]=[[-2,2,10064],[self.co0],'co0 ']
		CouplL[177]=[[-2,2,10066],[self.co0],'co0 ']
		CouplL[178]=[[-2,2,10067],[self.co0],'co0 ']
		CouplL[179]=[[-2,2,10068],[self.co0],'co0 ']
		CouplL[180]=[[-2,2,10070],[self.co0],'co0 ']
		CouplL[181]=[[-2,2,10010],[self.co0],'co0 ']
		CouplL[182]=[[-2,2,10011],[self.co0],'co0 ']
		CouplL[183]=[[-2,2,10012],[self.co0],'co0 ']
		CouplL[184]=[[-2,2,10014],[self.co0],'co0 ']
		CouplL[185]=[[-2,2,10016],[self.co0],'co0 ']
		CouplL[186]=[[-2,2,10017],[self.co0],'co0 ']
		CouplL[187]=[[-2,2,10018],[self.co0],'co0 ']
		CouplL[188]=[[0,0,10072],[self.co0],'co0 ']

		for i in range(len(qIn)): self.FlavIn[i]=qIn[i] 
		for i in range(len(qOut)): self.FlavOut[i]=qOut[i]
		Canais=[]
		if len(self.FlavIn)==1:
			for p1 in self.FlavIn[0]:
				if len(self.FlavOut)==2:
					for p2 in self.FlavOut[0]:
						for p3 in self.FlavOut[1]:
							# 1 -> 2
							print "1 -> 2"
				else: sys.exit("Erro: To the present case the number of Out particles must be 2")
		elif len(self.FlavIn)==2:
			for p1 in self.FlavIn[0]:
				for p2 in self.FlavIn[1]:
					if len(self.FlavOut)==1:
						for p3 in self.FlavOut[0]:
							# 2  -> 1
							SubCanais=[]
							s=0
							for i in range(ncoupl):
								virt=100
								if p1 in CouplL[i][0] and sum(CouplL[i][1])!=0:
									temp=CouplL[i][0].index(p1)
									for j in [0,1,2]:
										if j!=temp and CouplL[i][0][j]==p2:
												for k in [0,1,2]:
													if k!=temp and k!=j and CPartList[PartList.index(CouplL[i][0][k])]==p3:
														virt=p3
														couplVert1=CouplL[i][1]
														s=1
														strsubproc=PDGL[PartList.index(p1)]+PDGL[PartList.index(p2)]+PDGL[PartList.index(p3)]
														SubCanais.append(['s',virt,strsubproc])
														break
													else: continue
										else: continue
								else: continue
							if s==1:
								Canais.append(SubCanais)
						self.Canais=Canais
					elif len(self.FlavOut)==2:
						for p3 in self.FlavOut[0]:
							for p4 in self.FlavOut[1]:
								SubCanais=[]
								s=0
								t=0
								u=0
#								print "passou"
								for i in range(ncoupl):
									# s channel
									virt=100
#									print "passou 1  ",p1,"  ",CouplL[i][1]
									if p1 in CouplL[i][0] and sum(CouplL[i][1])!=0:
#										print "passou 2"
										temp=CouplL[i][0].index(p1)
										for j in [0,1,2]:
											if j!=temp and CouplL[i][0][j]==p2:
												virt=CPartList[PartList.index(CouplL[i][0][filter(lambda x:x!= temp and x!=j,[0,1,2])[0]])]
												couplVert1=CouplL[i][1]
											else: continue
										if virt!=100:
											for k in range(ncoupl):
												if CPartList[PartList.index(p3)] in CouplL[k][0] and sum(CouplL[k][1])!=0:
													temp=CouplL[k][0].index(CPartList[PartList.index(p3)])
													for j in [0,1,2]:
														if j!=temp and CouplL[k][0][j]==CPartList[PartList.index(p4)] and virt==CouplL[k][0][filter(lambda x:x!= temp and x!=j,[0,1,2])[0]]:
															couplVert2=CouplL[k][1]
															strsubproc=PDGL[PartList.index(p1)]+PDGL[PartList.index(p2)]+PDGL[PartList.index(p3)]+PDGL[PartList.index(p4)]
															SubCanais.append(['s',virt,strsubproc,CouplL[i][2]+CouplL[k][2]])
															s=1
															break
														else: continue
												else: continue
									# t channel
									virt=100
									if p1 in CouplL[i][0] and sum(CouplL[i][1])!=0:
										temp=CouplL[i][0].index(p1)
										for j in [0,1,2]:
											if j!=temp and CouplL[i][0][j]==CPartList[PartList.index(p3)]:
												virt=CouplL[i][0][filter(lambda x:x!= temp and x!=j,[0,1,2])[0]]
												couplVert1=CouplL[i][1]
											else: continue
										if virt!=100:
											for k in range(ncoupl):
												if p2 in CouplL[k][0] and sum(CouplL[k][1])!=0:
													temp=CouplL[k][0].index(p2)
													for j in [0,1,2]:
														if j!=temp and CouplL[k][0][j]==CPartList[PartList.index(p4)] and virt==CPartList[PartList.index(CouplL[k][0][filter(lambda x:x!= temp and x!=j,[0,1,2])[0]])]:
															couplVert2=CouplL[k][1]
															strsubproc=PDGL[PartList.index(p1)]+PDGL[PartList.index(p2)]+PDGL[PartList.index(p3)]+PDGL[PartList.index(p4)]
															SubCanais.append(['t',virt,strsubproc,CouplL[i][2]+CouplL[k][2]])
															t=1
															break
														else: continue
												else: continue
									# u channel
									virt=100
									if p1 in CouplL[i][0] and sum(CouplL[i][1])!=0:
										temp=CouplL[i][0].index(p1)
										for j in [0,1,2]:
											if j!=temp and CouplL[i][0][j]==CPartList[PartList.index(p4)]:
												virt=CouplL[i][0][filter(lambda x:x!= temp and x!=j,[0,1,2])[0]]
												couplVert1=CouplL[i][1]
											else: continue
										if virt!=100:
											for k in range(ncoupl):
												if p2 in CouplL[k][0] and sum(CouplL[k][1])!=0:
													temp=CouplL[k][0].index(p2)
													for j in [0,1,2]:
														if j!=temp and CouplL[k][0][j]==CPartList[PartList.index(p3)] and virt==CPartList[PartList.index(CouplL[k][0][filter(lambda x:x!= temp and x!=j,[0,1,2])[0]])]:
															couplVert2=CouplL[k][1]
															strsubproc=PDGL[PartList.index(p1)]+PDGL[PartList.index(p2)]+PDGL[PartList.index(p3)]+PDGL[PartList.index(p4)]
															SubCanais.append(['u',virt,strsubproc,CouplL[i][2]+CouplL[k][2]])
															u=1
															break
														else: continue
												else: continue
								if s==1 or t==1 or u==1:
									Canais.append(SubCanais)
					else: sys.exit("Erro: To the present case the number of Out particles must be 1 or 2")
			if len(self.FlavOut)==1:
				self.Canais=Canais
			elif len(self.FlavOut)==2:
				CanaisNoPureSM=[]
				for subtemp in Canais:
					PureSM=''
					for canal in subtemp:
						PureSM=PureSM+canal[3]
					PureSM=PureSM.split()
					if len(filter(lambda x:x=='co0',PureSM))!=len(PureSM):
						CanaisNoPureSM.append(subtemp)
				self.Canais=CanaisNoPureSM
			else: sys.exit("Erro: To the present case the number of Out particles must be 1 or 2")
		else: sys.exit("Erro: Number of  In particles must be 1 or 2")
#		print self.Canais
	def WriteSubPro(self):
		if 1==1:
			Mu=self.dparam[0][1]
			Md=self.dparam[1][1]
			Mc=self.dparam[2][1]
			Ms=self.dparam[3][1]
			Mb=self.dparam[4][1]
			Mtop=self.dparam[5][1]
			MZ=self.dparam[6][1]
			MW=self.dparam[7][1]
			MH=self.dparam[8][1]
			Me=self.dparam[9][1]
			Mm=self.dparam[10][1]
			Mt=self.dparam[11][1]
			wW=self.dparam[12][1]
			wtop=self.dparam[13][1]
			wH=self.dparam[14][1]
			wZ=self.dparam[15][1]
			SW=self.dparam[16][1]
			EE=self.dparam[17][1]
			s12=self.dparam[18][1]
			s23=self.dparam[19][1]
			s13=self.dparam[20][1]
			co1=self.dparam[21][1]
			co2=self.dparam[22][1]
			co27=self.dparam[23][1]
			co28=self.dparam[24][1]
			co29=self.dparam[25][1]
			co30=self.dparam[26][1]
			co31=self.dparam[27][1]
			co32=self.dparam[28][1]
			co33=self.dparam[29][1]
			co34=self.dparam[30][1]
			co35=self.dparam[31][1]
			co36=self.dparam[32][1]
			co37=self.dparam[33][1]
			co38=self.dparam[34][1]
			co39=self.dparam[35][1]
			co40=self.dparam[36][1]
			co41=self.dparam[37][1]
			co42=self.dparam[38][1]
			co43=self.dparam[39][1]
			co44=self.dparam[40][1]
			fu=self.dparam[41][1]
			hu=self.dparam[42][1]
			fc=self.dparam[43][1]
			hc=self.dparam[44][1]
			Q=self.dparam[45][1]
			miuR=self.dparam[46][1]
			L=self.dparam[47][1]
			ECM=self.dparam[48][1]
			PTmatch=self.dparam[49][1]
			PTmin=self.dparam[50][1]
			NEvnts=int(self.dparam[51][1])
			PARP67=1.0
			pdf=self.dparam[52][1]
			pp=self.dparam[53][1]
			DecMod=self.dparam[54][1]
			SpCorr=self.dparam[55][1]

			CW=np.sqrt(1-SW**2)
#			MW=MZ*CW
			c12  = np.sqrt(1-s12**2)
			c23  = np.sqrt(1-s23**2)
			c13  = np.sqrt(1-s13**2)

			Vud = c12*c13
			Vus = s12*c13
			Vub = s13
			Vcd = (-s12*c23-c12*s23*s13)
			Vcs = (c12*c23-s12*s23*s13)
			Vcb = s23*c13
			Vtd = (s12*s23-c12*c23*s13)
			Vts = (-c12*s23-s12*c23*s13)
			Vtb = c23*c13

			fnew=open('temp/data'+self.process+'.c','w')

			fnew.write('struct {\n'+ \
					'double Mu,Md,Mc,Ms,Mb,Mtop,Me,Mm,Mt,MZ,MW,MH,Mn;\n'+\
					'double s12,s23,s13,c12,c23,c13;\n'+\
					'double Vud,Vus,Vub,Vcd,Vcs,Vcb,Vtd,Vts,Vtb;\n'+\
					'double co1,co2,co27,co28,co29,co30,co31,co32,co33,co34,co35,co36,co37,co38,co39,co40,co41,co42,co43,co44;\n'+\
					'double fu,hu,fc,hc,L,Q,miuR,wW,wtop,wH,wZ,SW,CW,EE;\n'+\
					'double ECM,PTmin;\n'+\
					'int pp;\n'+\
					'} data;\n\n'+\
					'static int dados(){\n\n')
			fnew.write('data.Mu = '+str(Mu)+';\n')
			fnew.write('data.Md = '+str(Md)+';\n')
			fnew.write('data.Mc = '+str(Mc)+';\n')
			fnew.write('data.Ms = '+str(Ms)+';\n')
			fnew.write('data.Mb = '+str(Mb)+';\n')
			fnew.write('data.Mtop = '+str(Mtop)+';\n')
			fnew.write('data.Me = '+str(Me)+';\n')
			fnew.write('data.Mm = '+str(Mm)+';\n')
			fnew.write('data.Mt = '+str(Mt)+';\n')
			fnew.write('data.MZ = '+str(MZ)+';\n')
			fnew.write('data.MW = '+str(MW)+';\n')
			fnew.write('data.MH = '+str(MH)+';\n')
			fnew.write('data.Mn = 0.0;\n')
			fnew.write('data.wW = '+str(wW)+';\n')
			fnew.write('data.wtop = '+str(wtop)+';\n')
			fnew.write('data.wH = '+str(wH)+';\n')
			fnew.write('data.wZ = '+str(wZ)+';\n')
			fnew.write('data.SW = '+str(SW)+';\n')
			fnew.write('data.CW = '+str(CW)+';\n')
			fnew.write('data.EE = '+str(EE)+';\n')
			fnew.write('data.s12 = '+str(s12)+';\n')
			fnew.write('data.s23 = '+str(s23)+';\n')
			fnew.write('data.s13 = '+str(s13)+';\n')
			fnew.write('data.c12 = '+str(c12)+';\n')
			fnew.write('data.c23 = '+str(c23)+';\n')
			fnew.write('data.c13 = '+str(c13)+';\n')
			fnew.write('data.Vud = '+str(Vud)+';\n')
			fnew.write('data.Vus = '+str(Vus)+';\n')
			fnew.write('data.Vub = '+str(Vub)+';\n')
			fnew.write('data.Vcd = '+str(Vcd)+';\n')
			fnew.write('data.Vcs = '+str(Vcs)+';\n')
			fnew.write('data.Vcb = '+str(Vcb)+';\n')
			fnew.write('data.Vtd = '+str(Vtd)+';\n')
			fnew.write('data.Vts = '+str(Vts)+';\n')
			fnew.write('data.Vtb = '+str(Vtb)+';\n')
			fnew.write('data.co1 = '+str(co1)+';\n')
			fnew.write('data.co2 = '+str(co2)+';\n')
			fnew.write('data.co27 = '+str(co27)+';\n')
			fnew.write('data.co28 = '+str(co28)+';\n')
			fnew.write('data.co29 =  '+str(co29)+';\n')
			fnew.write('data.co30 =  '+str(co30)+';\n')
			fnew.write('data.co31 = '+str(co31)+';\n')
			fnew.write('data.co32 = '+str(co32)+';\n')
			fnew.write('data.co33 = '+str(co33)+';\n')
			fnew.write('data.co34 = '+str(co34)+';\n')
			fnew.write('data.co35 = '+str(co35)+';\n')
			fnew.write('data.co36 = '+str(co36)+';\n')
			fnew.write('data.co37 = '+str(co37)+';\n')
			fnew.write('data.co38 = '+str(co38)+';\n')
			fnew.write('data.co39 = '+str(co39)+';\n')
			fnew.write('data.co40 = '+str(co40)+';\n')
			fnew.write('data.co41 = '+str(co41)+';\n')
			fnew.write('data.co42 = '+str(co42)+';\n')
			fnew.write('data.co43 = '+str(co43)+';\n')
			fnew.write('data.co44 = '+str(co44)+';\n')
			fnew.write('data.fu = '+str(fu)+';\n')
			fnew.write('data.hu = '+str(hu)+';\n')
			fnew.write('data.fc = '+str(fc)+';\n')
			fnew.write('data.hc = '+str(hc)+';\n')
			fnew.write('data.L = '+str(L)+';\n')
			fnew.write('data.Q = '+str(Q)+';\n')
			fnew.write('data.miuR = '+str(miuR)+';\n')
			fnew.write('data.ECM = '+str(ECM)+';\n')
			fnew.write('data.pp = '+str(pp)+';\n')

			if 'Gtop' in self.process:
				if self.ProcFlag == 21 or self.ProcFlag == 22:
					fnew.write('data.PTmin = '+str(PTmatch)+';\n\n')
				else:
					fnew.write('data.PTmin = '+str(PTmin)+';\n\n')
			elif 'Lqtop' in self.process:
					fnew.write('data.PTmin = '+str(PTmin)+';\n\n')
			else: pass
#				fnew.write('data.PTmin = '+str(PTmin)+';\n\n')
			fnew.write('return 0;\n}')
			fnew.close()




			os.system('cp src/CalcCS'+self.process+'_bkp.c'+' temp/CalcCS'+self.process+'.c')
			fnew=open('temp/CalcCS'+self.process+'.c','a')
			fnew.write('\n\n')
			fnew.write('CSTotal=0.0;\n')
			fnew.write('ErroTotal=0.0;\n')

			fnew.write('fp=fopen(\"../CS/cs'+self.process+'.txt\"'+',\"w\");\n\n')

			
			DecMList=[['data.Mn','data.Me'],['data.Mn','data.Mm'],['data.Mn','data.Mt'],['data.Mu','data.Md'],['data.Mc','data.Ms']]
			DecPDGList=[[12,11],[14,13],[16,15],[2,1],[4,3]]

			Npr=0
			for subpro in self.Canais:
				part=list(subpro[0][2])
				countq=1
				fnew.write('/*..............................*/\n')
				for q in part:
					if q != 'G' and q !='t' and q != 'T':
						fnew.write('m'+str(countq)+' = data.M'+q.lower()+';\n')
						countq+=1
					elif q == 't' or q =='T': 
						countq+=1
					elif q == 'G':
						fnew.write('m'+str(countq)+' = 0;\n')
						countq+=1
					else: sys.exit('Error with partons flavours')
#				if pp == 1:
				fnew.write('Flav1='+str(qList.index(part[0])-16)+';\n')
				fnew.write('Flav2='+str(qList.index(part[1])-16)+';\n')
#				elif pp == -1:
#					fnew.write('Flav1='+str(qList.index(part[0])-16)+';\n')
#					fnew.write('Flav2='+str(-(qList.index(part[1])-16))+';\n')
#				else: sys.exit('Error in pp flag')

				if 'Dtop' not in self.process:
					if len(list(DecMod))!=5: sys.exit("Error: Size of DecMod.")
					for dec in range(len(list(DecMod))):
						Npr+=1
						if '1'== list(DecMod)[dec]:
							fnew.write('Npr = '+str(Npr)+';\n')
							fnew.write('m4' + ' = data.Mb;\n')
							fnew.write('m5' + ' = '+DecMList[dec][0]+';\n')
							fnew.write('m6' + ' = '+DecMList[dec][1]+';\n')
							Flav3=qList.index(part[2])-16							
							if part[3]=='t':
								Flav4=5							
								Flav5=DecPDGList[dec][0]
								Flav6=-DecPDGList[dec][1]
								fnew.write('Flav3 = '+str(Flav3)+';\n')
								fnew.write('Flav4 = '+str(Flav4)+';\n')
								fnew.write('Flav5 = '+str(Flav5)+';\n')
								fnew.write('Flav6 = '+str(Flav6)+';\n')
							elif part[3]=='T':
								Flav4=-5							
								Flav5=-DecPDGList[dec][0]
								Flav6=DecPDGList[dec][1]
								fnew.write('Flav3 = '+str(Flav3)+';\n')
								fnew.write('Flav4 = '+str(Flav4)+';\n')
								fnew.write('Flav5 = '+str(Flav5)+';\n')
								fnew.write('Flav6 = '+str(Flav6)+';\n')
							else: sys.exit("Erro: No top")
							fnew.write('userdata[0]=ECM;\n')
							fnew.write('userdata[1]=(float) Flav1;\n')
							fnew.write('userdata[2]=(float) Flav2;\n')
							fnew.write('userdata[3]=(float) Flav3;\n')
							fnew.write('userdata[4]=(float) Flav4;\n')
							fnew.write('userdata[5]=(float) Flav5;\n')
							fnew.write('userdata[6]=(float) Flav6;\n')
							fnew.write('userdata[7]=m1;\n')
							fnew.write('userdata[8]=m2;\n')
							fnew.write('userdata[9]=m3;\n')
							fnew.write('userdata[10]=m4;\n')
							fnew.write('userdata[11]=m5;\n')
							fnew.write('userdata[12]=m6;\n')
							fnew.write('userdata[13]=PTmin;\n')

							if 'Gtop' in self.process:
								fnew.write('initiate(userdata,&NprSub,&qid,&SubPorder);\n')
								fnew.write('userdata[14]=(float) NprSub;\n')
								fnew.write('userdata[15]=(float) qid;\n')
								fnew.write('userdata[16]=(float) data.pp;\n')

								fnew.write('Vegas(NDIM, NCOMP, IntGtop, userdata,\n'+\
								   'EPSREL, EPSABS, VERBOSE, SEED,\n'+\
								   'MINEVAL, MAXEVAL, NSTART, NINCREASE, NBATCH,\n'+\
								   'GRIDNO, STATEFILE,\n'+\
								   '&neval, &fail, integral, error, prob);\n')
								fnew.write('finalization();\n')
							else:
								fnew.write('initiate(userdata,&NprSub,&qid,&SubPorder);\n')
								fnew.write('userdata[14]=(float) NprSub;\n')
								fnew.write('userdata[15]=(float) qid;\n')
								fnew.write('userdata[16]=(float) SubPorder;\n')
								fnew.write('userdata[17]=(float) data.pp;\n')
								fnew.write('Vegas(NDIM, NCOMP, IntLqtop, userdata,\n'+\
								   'EPSREL, EPSABS, VERBOSE, SEED,\n'+\
								   'MINEVAL, MAXEVAL, NSTART, NINCREASE, NBATCH,\n'+\
								   'GRIDNO, STATEFILE,\n'+\
								   '&neval, &fail, integral, error, prob);\n')
								fnew.write('finalization();\n')

							fnew.write('fprintf(fp,\"%d CS('+part[0]+' '+part[1]+' -> '+part[2]+' '+part[3]+' -> '+ \
									qList[Flav3+16]+' '+qList[Flav4+16]+' '+qList[Flav5+16]+' '+qList[Flav6+16] + \
									')[pb] = %E +- %E \\n\",Npr,integral[0], error[0]);\n')

							fnew.write('printf(\"%d CS('+part[0]+' '+part[1]+' -> '+part[2]+' '+part[3]+' -> '+ \
									qList[Flav3+16]+' '+qList[Flav4+16]+' '+qList[Flav5+16]+' '+qList[Flav6+16] + \
									')[pb] = %E +- %E    (%4.2f%%)   \\n\",Npr,integral[0], error[0],100*error[0]/integral[0]);\n')
							fnew.write('CSTotal=CSTotal+integral[0];\n')
							fnew.write('ErroTotal=ErroTotal+Sq(error[0]);\n')
							fnew.write('fflush(fp);\n')
						else:continue
				else:
					if len(list(DecMod))!=5: sys.exit("Error: Size of DecMod.")
					for dec in range(len(list(DecMod))):
						Npr+=1
						if '1'== list(DecMod)[dec]:
							fnew.write('Npr = '+str(Npr)+';\n')
							fnew.write('m3' + ' = data.Mb;\n')
							fnew.write('m4' + ' = '+DecMList[dec][0]+';\n')
							fnew.write('m5' + ' = '+DecMList[dec][1]+';\n')
							if part[2]=='t':
################################################################# order must be different because of C MSQ
								Flav3=5							
								Flav4=DecPDGList[dec][0]
								Flav5=-DecPDGList[dec][1]
								fnew.write('Flav3 = '+str(Flav3)+';\n')
								fnew.write('Flav4 = '+str(Flav4)+';\n')
								fnew.write('Flav5 = '+str(Flav5)+';\n')
							elif part[2]=='T':
								Flav3=-5
								Flav4=-DecPDGList[dec][0]
								Flav5=DecPDGList[dec][1]
								fnew.write('Flav3 = '+str(Flav3)+';\n')
								fnew.write('Flav4 = '+str(Flav4)+';\n')
								fnew.write('Flav5 = '+str(Flav5)+';\n')
							fnew.write('userdata[0]=ECM;\n')
							fnew.write('userdata[1]=(float) Flav1;\n')
							fnew.write('userdata[2]=(float) Flav2;\n')
							fnew.write('userdata[3]=(float) Flav3;\n')
							fnew.write('userdata[4]=(float) Flav4;\n')
							fnew.write('userdata[5]=(float) Flav5;\n')
							fnew.write('userdata[6]=m1;\n')
							fnew.write('userdata[7]=m2;\n')
							fnew.write('userdata[8]=m3;\n')
							fnew.write('userdata[9]=m4;\n')
							fnew.write('userdata[10]=m5;\n\n')

							if 'NLO' not in self.process:

								fnew.write('initiate(userdata,&NprSub,&qid,&SubPorder);\n')
								fnew.write('userdata[11]=(float) NprSub;\n')
								fnew.write('userdata[12]=(float) data.pp;\n')
								fnew.write('Vegas(NDIM, NCOMP, IntDtopLO, userdata,\n'+\
								   'EPSREL, EPSABS, VERBOSE, SEED,\n'+\
								   'MINEVAL, MAXEVAL, NSTART, NINCREASE, NBATCH,\n'+\
								   'GRIDNO, STATEFILE,\n'+\
								   '&neval, &fail, integral, error, prob);\n')
								fnew.write('finalization();\n')
								fnew.write('fprintf(fp,\"%d CS('+part[0]+' '+part[1]+' -> '+part[2]+' -> '+ \
									qList[Flav3+16]+' '+qList[Flav4+16]+' '+qList[Flav5+16] + \
									')[pb] = %E +- %E \\n\",Npr,integral[0], error[0]);\n')
								fnew.write('printf(\"%d CS('+part[0]+' '+part[1]+' -> '+part[2]+' -> '+ \
									qList[Flav3+16]+' '+qList[Flav4+16]+' '+qList[Flav5+16] + \
									')[pb] = %E +- %E   (%4.2f%%) \\n\",Npr,integral[0], error[0],100*error[0]/integral[0]);\n')
								fnew.write('CSTotal=CSTotal+integral[0];\n')
								fnew.write('ErroTotal=ErroTotal+Sq(error[0]);\n')
								fnew.write('fflush(fp);\n')

							else:

								fnew.write('userdata[11]=(float) data.pp;\n')
								fnew.write('Vegas(NDIM, NCOMP, IntDtopNLO, userdata,\n'+\
								   'EPSREL, EPSABS, VERBOSE, SEED,\n'+\
								   'MINEVAL, MAXEVAL, NSTART, NINCREASE, NBATCH,\n'+\
								   'GRIDNO, STATEFILE,\n'+\
								   '&neval, &fail, integral, error, prob);\n')
								fnew.write('fprintf(fp,\"%d CS('+part[0]+' '+part[1]+' -> '+part[2]+' -> '+ \
									qList[Flav3+16]+' '+qList[Flav4+16]+' '+qList[Flav5+16] + \
									')[pb] = %E +- %E \\n\",Npr,integral[0]+integral[1]+integral[2],'+ \
									' sqrt(Sq(error[0])+Sq(error[1])+Sq(error[2])));\n')
								fnew.write('printf(\"%d CS('+part[0]+' '+part[1]+' -> '+part[2]+' -> '+ \
									qList[Flav3+16]+' '+qList[Flav4+16]+' '+qList[Flav5+16] + \
									')[pb] = %E +- %E    (%4.2f%%) \\n\",Npr,integral[0]+integral[1]+integral[2],'+ \
									' sqrt(Sq(error[0])+Sq(error[1])+Sq(error[2])),'+\
									'100*sqrt(Sq(error[0])+Sq(error[1])+Sq(error[2]))/(integral[0]+integral[1]+integral[2]));\n')
								fnew.write('CSTotal=CSTotal+integral[0]+integral[1]+integral[2];\n')
								fnew.write('ErroTotal=ErroTotal+Sq(sqrt(Sq(error[0])+Sq(error[1])+Sq(error[2])));\n')
								fnew.write('fflush(fp);\n')


						else: continue
					fnew.write('/*..............................*/\n')

			fnew.write('fprintf(fp,\"Total Cross Section: %f +- %f\\n\",CSTotal,sqrt(ErroTotal));\n')
			fnew.write('printf(\"Total Cross Section: %f +- %f\\n\",CSTotal,sqrt(ErroTotal));\n')
			fnew.write('fclose(fp);\n')
			fnew.write('return 0;\n}')

			fnew.close()

#			sys.exit()


class genClass:
	def __init__(self,ListProcess):
		self.ListProcess=ListProcess
		self.dparam=readpara('param.dat')
		self.ProcFlag=self.dparam[len(self.dparam)-1][1]

	def WritegenSubPro(self):



		Mu=self.dparam[0][1]
		Md=self.dparam[1][1]
		Mc=self.dparam[2][1]
		Ms=self.dparam[3][1]
		Mb=self.dparam[4][1]
		Mtop=self.dparam[5][1]
		MZ=self.dparam[6][1]
		MW=self.dparam[7][1]
		MH=self.dparam[8][1]
		Me=self.dparam[9][1]
		Mm=self.dparam[10][1]
		Mt=self.dparam[11][1]
		wW=self.dparam[12][1]
		wtop=self.dparam[13][1]
		wH=self.dparam[14][1]
		wZ=self.dparam[15][1]
		SW=self.dparam[16][1]
		EE=self.dparam[17][1]
		s12=self.dparam[18][1]
		s23=self.dparam[19][1]
		s13=self.dparam[20][1]
		co1=self.dparam[21][1]
		co2=self.dparam[22][1]
		co27=self.dparam[23][1]
		co28=self.dparam[24][1]
		co29=self.dparam[25][1]
		co30=self.dparam[26][1]
		co31=self.dparam[27][1]
		co32=self.dparam[28][1]
		co33=self.dparam[29][1]
		co34=self.dparam[30][1]
		co35=self.dparam[31][1]
		co36=self.dparam[32][1]
		co37=self.dparam[33][1]
		co38=self.dparam[34][1]
		co39=self.dparam[35][1]
		co40=self.dparam[36][1]
		co41=self.dparam[37][1]
		co42=self.dparam[38][1]
		co43=self.dparam[39][1]
		co44=self.dparam[40][1]
		fu=self.dparam[41][1]
		hu=self.dparam[42][1]
		fc=self.dparam[43][1]
		hc=self.dparam[44][1]
		Q=self.dparam[45][1]
		miuR=self.dparam[46][1]
		L=self.dparam[47][1]
		ECM=self.dparam[48][1]
		PTmatch=self.dparam[49][1]
		PTmin=self.dparam[50][1]
		NEvnts=int(self.dparam[51][1])
		PARP67=1.0
		pdf=self.dparam[52][1]
		pp=self.dparam[53][1]
		DecMod=self.dparam[54][1]
		SpCorr=self.dparam[55][1]

		CW=np.sqrt(1-SW**2)
#		MW=MZ*CW
		c12  = np.sqrt(1-s12**2)
		c23  = np.sqrt(1-s23**2)
		c13  = np.sqrt(1-s13**2)

		Vud = c12*c13
		Vus = s12*c13
		Vub = s13
		Vcd = (-s12*c23-c12*s23*s13)
		Vcs = (c12*c23-s12*s23*s13)
		Vcb = s23*c13
		Vtd = (s12*s23-c12*c23*s13)
		Vts = (-c12*s23-s12*c23*s13)
		Vtb = c23*c13

		self.qMList=[0.0,Mt,0.0,Mm,0.0,Me,0,0,0,0,Mtop,Mb,Mc,Ms,Mu,Md,0.0,Md,Mu,Ms,Mc,Mb,Mtop,0,0,0,0,Me,0.0,Mm,0.0,Mt,0.0]



		fresults=open('Events/runinfo.txt','w')
		fresults.write('Data used for Event generation\n\n')
		fresults.write('Mu = '+str(Mu)+'\n')
		fresults.write('Md = '+str(Md)+'\n')
		fresults.write('Mc = '+str(Mc)+'\n')
		fresults.write('Ms = '+str(Ms)+'\n')
		fresults.write('Mb = '+str(Mb)+'\n')
		fresults.write('Mtop = '+str(Mtop)+'\n')
		fresults.write('Me = '+str(Me)+'\n')
		fresults.write('Mm = '+str(Mm)+'\n')
		fresults.write('Mt = '+str(Mt)+'\n')
		fresults.write('MZ = '+str(MZ)+'\n')
		fresults.write('MW = '+str(MW)+'\n')
		fresults.write('MH = '+str(MH)+'\n')
		fresults.write('Mn = 0.0\n')
		fresults.write('wW = '+str(wW)+'\n')
		fresults.write('wtop = '+str(wtop)+'\n')
		fresults.write('wH = '+str(wH)+'\n')
		fresults.write('wZ = '+str(wZ)+'\n')
		fresults.write('SW = '+str(SW)+'\n')
		fresults.write('CW = '+str(CW)+'\n')
		fresults.write('EE = '+str(EE)+'\n')
		fresults.write('s12 = '+str(s12)+'\n')
		fresults.write('s23 = '+str(s23)+'\n')
		fresults.write('s13 = '+str(s13)+'\n')
		fresults.write('c12 = '+str(c12)+'\n')
		fresults.write('co1 = '+str(co1)+'\n')
		fresults.write('co2 = '+str(co2)+'\n')
		fresults.write('co27 = '+str(co27)+'\n')
		fresults.write('co28 = '+str(co28)+'\n')
		fresults.write('co29 =  '+str(co29)+'\n')
		fresults.write('co30 =  '+str(co30)+'\n')
		fresults.write('co31 = '+str(co31)+'\n')
		fresults.write('co32 = '+str(co32)+'\n')
		fresults.write('co33 = '+str(co33)+'\n')
		fresults.write('co34 = '+str(co34)+'\n')
		fresults.write('co35 = '+str(co35)+'\n')
		fresults.write('co36 = '+str(co36)+'\n')
		fresults.write('co37 = '+str(co37)+'\n')
		fresults.write('co38 = '+str(co38)+'\n')
		fresults.write('co39 = '+str(co39)+'\n')
		fresults.write('co40 = '+str(co40)+'\n')
		fresults.write('co41 = '+str(co41)+'\n')
		fresults.write('co42 = '+str(co42)+'\n')
		fresults.write('co43 = '+str(co43)+'\n')
		fresults.write('co44 = '+str(co44)+'\n')
		fresults.write('fu = '+str(fu)+'\n')
		fresults.write('hu = '+str(hu)+'\n')
		fresults.write('fc = '+str(fc)+'\n')
		fresults.write('hc = '+str(hc)+'\n')
		fresults.write('L = '+str(L)+'\n')
		fresults.write('Q = '+str(Q)+'\n')
		fresults.write('miuR = '+str(miuR)+'\n')
		fresults.write('ECM = '+str(ECM)+'\n')
		fresults.write('PTmatch = '+str(PTmatch)+'\n')
		fresults.write('PTmin = '+str(PTmin)+'\n')
		fresults.write('NEvnts = '+str(NEvnts)+'\n')
		fresults.write('PARP(67) = '+str(PARP67)+'\n')
		fresults.write('PdfSet = '+str(pdf)+'\n')
		fresults.write('pp = '+str(pp)+'\n')
		fresults.write('DecMod = '+DecMod+'\n')
		fresults.write('SpCorr = '+str(SpCorr)+'\n')
		fresults.write('Process information:\n\n')


		ListCS=[]
		ListCSErr=[]
		ListSubProc=[]
		ListProc=[]
		for process in self.ListProcess:
			try:
				fcs=open('CS/cs'+process+'.txt','r')
			except IOError:
				sys.exit("You have first to calculate the cross section")
			for i in fcs:
 				if 'Total' not in i:
					line = i.split()
					ListCS.append(float(line[line.index('=')+1]))
					ListCSErr.append(float(line[line.index('=')+3]))
					ListSubProc.append(i.split()[0]+' : '+i.split('=')[0].split(')')[0].split('(')[1])
					ListProc.append(process)
			fcs.close()
		if self.ProcFlag == 21 or self.ProcFlag == 22:
			csDtopLO=np.array(map(lambda y:ListCS[y],filter(lambda x:'DtopLO' in ListProc[x],range(len(ListProc)))))
			csDtopNLO=np.array(map(lambda y:ListCS[y],filter(lambda x:'DtopNLO' in ListProc[x],range(len(ListProc)))))
			csGtop=np.array(map(lambda y:ListCS[y],filter(lambda x:'Gtop' in ListProc[x],range(len(ListProc)))))
			kfactor=(csDtopLO+csDtopNLO-csGtop)/csDtopLO
			ListCS=map(lambda y:ListCS[y],filter(lambda x:'NLO' not in ListProc[x],range(len(ListProc))))
			ListCSErr=map(lambda y:ListCSErr[y],filter(lambda x:'NLO' not in ListProc[x],range(len(ListProc))))
			ListSubProc=map(lambda y:ListSubProc[y],filter(lambda x:'NLO' not in ListProc[x],range(len(ListProc))))
			ListProc=map(lambda y:ListProc[y],filter(lambda x:'NLO' not in ListProc[x],range(len(ListProc))))
			count=0

			for i in range(len(ListProc)):
				if 'Dtop' in ListProc[i]:
					if np.isnan(kfactor[count]):
						ListCS[i]=0
						ListCSErr[i]=0
					else:
						ListCS[i]=ListCS[i]*kfactor[count]
						ListCSErr[i]=ListCSErr[i]*kfactor[count]
					count+=1
			self.ListProcess=map(lambda y:self.ListProcess[y],filter(lambda x:'NLO' not in self.ListProcess[x],range(len(self.ListProcess))))


		self.ListSubProc=ListSubProc
		self.ListProc=ListProc

		for process in self.ListProcess:

			fnew=open('temp/data'+process+'.c','w')

			fnew.write('struct {\n'+ \
					'double Mu,Md,Mc,Ms,Mb,Mtop,Me,Mm,Mt,MZ,MW,MH,Mn;\n'+\
					'double s12,s23,s13,c12,c23,c13;\n'+\
					'double Vud,Vus,Vub,Vcd,Vcs,Vcb,Vtd,Vts,Vtb;\n'+\
					'double co1,co2,co27,co28,co29,co30,co31,co32,co33,co34,co35,co36,co37,co38,co39,co40,co41,co42,co43,co44;\n'+\
					'double fu,hu,fc,hc,L,Q,miuR,wW,wtop,wH,wZ,SW,CW,EE;\n'+\
					'double ECM,PTmin;\n'+\
					'int pp;\n'+\
					'} data;\n\n'+\
					'static int dados(){\n\n')
			fnew.write('data.Mu = '+str(Mu)+';\n')
			fnew.write('data.Md = '+str(Md)+';\n')
			fnew.write('data.Mc = '+str(Mc)+';\n')
			fnew.write('data.Ms = '+str(Ms)+';\n')
			fnew.write('data.Mb = '+str(Mb)+';\n')
			fnew.write('data.Mtop = '+str(Mtop)+';\n')
			fnew.write('data.Me = '+str(Me)+';\n')
			fnew.write('data.Mm = '+str(Mm)+';\n')
			fnew.write('data.Mt = '+str(Mt)+';\n')
			fnew.write('data.MZ = '+str(MZ)+';\n')
			fnew.write('data.MW = '+str(MW)+';\n')
			fnew.write('data.MH = '+str(MH)+';\n')
			fnew.write('data.Mn = 0.0;\n')
			fnew.write('data.wW = '+str(wW)+';\n')
			fnew.write('data.wtop = '+str(wtop)+';\n')
			fnew.write('data.wH = '+str(wH)+';\n')
			fnew.write('data.wZ = '+str(wZ)+';\n')
			fnew.write('data.SW = '+str(SW)+';\n')
			fnew.write('data.CW = '+str(CW)+';\n')
			fnew.write('data.EE = '+str(EE)+';\n')
			fnew.write('data.s12 = '+str(s12)+';\n')
			fnew.write('data.s23 = '+str(s23)+';\n')
			fnew.write('data.s13 = '+str(s13)+';\n')
			fnew.write('data.c12 = '+str(c12)+';\n')
			fnew.write('data.c23 = '+str(c23)+';\n')
			fnew.write('data.c13 = '+str(c13)+';\n')
			fnew.write('data.Vud = '+str(Vud)+';\n')
			fnew.write('data.Vus = '+str(Vus)+';\n')
			fnew.write('data.Vub = '+str(Vub)+';\n')
			fnew.write('data.Vcd = '+str(Vcd)+';\n')
			fnew.write('data.Vcs = '+str(Vcs)+';\n')
			fnew.write('data.Vcb = '+str(Vcb)+';\n')
			fnew.write('data.Vtd = '+str(Vtd)+';\n')
			fnew.write('data.Vts = '+str(Vts)+';\n')
			fnew.write('data.Vtb = '+str(Vtb)+';\n')
			fnew.write('data.co1 = '+str(co1)+';\n')
			fnew.write('data.co2 = '+str(co2)+';\n')
			fnew.write('data.co27 = '+str(co27)+';\n')
			fnew.write('data.co28 = '+str(co28)+';\n')
			fnew.write('data.co29 =  '+str(co29)+';\n')
			fnew.write('data.co30 =  '+str(co30)+';\n')
			fnew.write('data.co31 = '+str(co31)+';\n')
			fnew.write('data.co32 = '+str(co32)+';\n')
			fnew.write('data.co33 = '+str(co33)+';\n')
			fnew.write('data.co34 = '+str(co34)+';\n')
			fnew.write('data.co35 = '+str(co35)+';\n')
			fnew.write('data.co36 = '+str(co36)+';\n')
			fnew.write('data.co37 = '+str(co37)+';\n')
			fnew.write('data.co38 = '+str(co38)+';\n')
			fnew.write('data.co39 = '+str(co39)+';\n')
			fnew.write('data.co40 = '+str(co40)+';\n')
			fnew.write('data.co41 = '+str(co41)+';\n')
			fnew.write('data.co42 = '+str(co42)+';\n')
			fnew.write('data.co43 = '+str(co43)+';\n')
			fnew.write('data.co44 = '+str(co44)+';\n')
			fnew.write('data.fu = '+str(fu)+';\n')
			fnew.write('data.hu = '+str(hu)+';\n')
			fnew.write('data.fc = '+str(fc)+';\n')
			fnew.write('data.hc = '+str(hc)+';\n')
			fnew.write('data.L = '+str(L)+';\n')
			fnew.write('data.Q = '+str(Q)+';\n')
			fnew.write('data.miuR = '+str(miuR)+';\n')
			fnew.write('data.ECM = '+str(ECM)+';\n')
			fnew.write('data.pp = '+str(pp)+';\n')




			if 'Gtop' in process:
				if self.ProcFlag == 21 or self.ProcFlag == 22:
					fnew.write('data.PTmin = '+str(PTmatch)+';\n\n')
				else:
					fnew.write('data.PTmin = '+str(PTmin)+';\n\n')
			elif 'Lqtop' in process:
					fnew.write('data.PTmin = '+str(PTmin)+';\n\n')
			else: pass
#				fnew.write('data.PTmin = '+str(PTmin)+';\n\n')
			fnew.write('return 0;\n}')
			fnew.close()









		self.ListNEvnts=ShareEvnt(NEvnts,ListCS)
		if self.ProcFlag==1:
			fresults.write('Direct top\n')
			fresults.write('Process                |      CS     |     NEvents \n')
		elif self.ProcFlag==2:
			fresults.write('top + gluon\n')
			fresults.write('Process                |      CS     |     NEvents \n')
		elif self.ProcFlag==3:
			fresults.write('top + light quark\n')
			fresults.write('Process                |      CS     |     NEvents \n')
		else:
			fresults.write('Direct top in NLO approximation\n')
			fresults.write('Process                |      CS     |     NEvents  | Kfactor\n')
		count=0
		countkf=0
		for process in self.ListProcess:

			NEvntstemp=map(lambda y:self.ListNEvnts[y],filter(lambda x: process in ListProc[x],range(len(ListProc))))
			CStemp=map(lambda y:ListCS[y],filter(lambda x: process in ListProc[x],range(len(ListProc))))
			CSErrtemp=map(lambda y:ListCSErr[y],filter(lambda x: process in ListProc[x],range(len(ListProc))))
			NsubprocEvn=0
			for k in range(len(ListProc)):
				if self.ListNEvnts[k]!=0 and ListProc[k]==process: NsubprocEvn+=1


			if self.ProcFlag <= 3: fevnt=open('Events/' + process.replace('LO','') +'.lhe','w')
			else:
				if 'Dtop' in process: fevnt=open('Events/' + process.replace('LO','NLO') +'.lhe','w')
				else: fevnt=open('Events/' + process+'NLO.lhe','w')
			fevnt.write("<LesHouchesEvents version=\"1.0\">\n")
			fevnt.write("<!--\n")
			fevnt.write("\#File generated with genFCNCtop\n")
			fevnt.write("-->\n")
			fevnt.write("<header>\n")
			fevnt.write("<GenerationInfo>\n")
			fevnt.write('{0}  {1:9d}\n'.format("# Number of Events        :    ",int( sum(NEvntstemp) )))
			fevnt.write('{0}  {1:1.3e}\n'.format("# Integrated weight (pb)  :    ",sum( CStemp  )))
			fevnt.write('{0}  {1:1.1f}\n'.format("# Truncated wgt (pb)      :    ",0.0))
			fevnt.write('{0}  {1:1.1f}\n'.format("# Unit wgt                :    ",1.0))
			fevnt.write("</GenerationInfo>\n")
			fevnt.write("</header>\n")
			fevnt.write("<init>\n")
			if 'Lqtop' not in process:
				if pp == 1:
					fevnt.write('    {0:5d} {1:5d} {2:5.2f} {3:5.2f} {4:2d} {5:2d} {6:2d} {7:2d} {8:2d} {9:2d}\n'.format(2212,2212,ECM/2,ECM/2,-1,-1,-1,-1,3,NsubprocEvn) )
					for k in range(len(ListProc)):
						if process == ListProc[k] and self.ListNEvnts[k] != 0:
							Npr=int(ListSubProc[k].split(':')[0])
							fevnt.write('    {0:1.3e} {1:1.3e} {2:1.1f} {3:1d}\n'.format(ListCS[k],ListCSErr[k],1,Npr))
						else: continue
				elif pp == -1:
					fevnt.write('    {0:5d} {1:5d} {2:5.2f} {3:5.2f} {4:2d} {5:2d} {6:2d} {7:2d} {8:2d} {9:2d}\n'.format(2212,-2212,ECM/2,ECM/2,-1,-1,-1,-1,3,NsubprocEvn) )
					for k in range(len(ListProc)):
						if process == ListProc[k] and self.ListNEvnts[k] != 0:
							Npr=int(ListSubProc[k].split(':')[0])
							fevnt.write('    {0:1.3e} {1:1.3e} {2:1.1f} {3:1d}\n'.format(ListCS[k],ListCSErr[k],1,Npr))
						else: continue
				else:
					sys.exit("Error: Wrong pp flag")
				fevnt.write("</init>\n")
				fevnt.close()
			else:
				NsubprocEvn=1
				if pp == 1:
					fevnt.write('    {0:5d} {1:5d} {2:5.2f} {3:5.2f} {4:2d} {5:2d} {6:2d} {7:2d} {8:2d} {9:2d}\n'.format(2212,2212,ECM/2,ECM/2,-1,-1,-1,-1,3,NsubprocEvn) )
					fevnt.write('    {0:1.3e} {1:1.3e} {2:1.1f} {3:1d}\n'.format(sum(CStemp),(sum(map(lambda x:x**2,CSErrtemp)))**0.5,1,1))
				elif pp == -1:
					fevnt.write('    {0:5d} {1:5d} {2:5.2f} {3:5.2f} {4:2d} {5:2d} {6:2d} {7:2d} {8:2d} {9:2d}\n'.format(2212,-2212,ECM/2,ECM/2,-1,-1,-1,-1,3,NsubprocEvn) )
					fevnt.write('    {0:1.3e} {1:1.3e} {2:1.1f} {3:1d}\n'.format(sum(CStemp),(sum(map(lambda x:x**2,CSErrtemp)))**0.5,1,1))
				else:
					sys.exit("Error: Wrong pp flag")
				fevnt.write("</init>\n")
				fevnt.close()

#			fevnt='Events/' + process.replace('LO','') +'.lhe'
			filegen=open('temp/gen'+process+'.c','w')
			filegen.write('#include <stdio.h>\n' +
				'#include <stdlib.h>\n'+
				'#include <math.h>\n'+
				'#include \"../src/num_in.h\"\n'+
				'#include \"../src/num_out.h\"\n'+
				'#include \"data'+process+'.c\"\n'+
				'#include \"../src/util.c\"\n')
			if 'Dtop' in process:
				filegen.write('#include \"../src/genDtopS.c\"\n\n')
			elif 'Gtop' in process:
				filegen.write('#include \"../src/genGtopS.c\"\n\n')
			elif 'Lqtop' in process:
				filegen.write('#include \"../src/genLqtopS.c\"\n\n')


			filegen.write('int main()\n{\n\n')
			filegen.write('dados();\n\n')
			for k in range(len(ListSubProc)):
				if process == ListProc[k]:
					line =ListSubProc[k].split(':')[1].split()
					Npr=int(ListSubProc[k].split(':')[0])
					if len(line) == 8:
						Flav1=qList.index(line[0])-16
						Flav2=qList.index(line[1])-16
						Flavt=qList.index(line[3])-16
						Flav3=qList.index(line[5])-16
						Flav4=qList.index(line[6])-16
						Flav5=qList.index(line[7])-16

						m1=self.qMList[qList.index(line[0])]
						m2=self.qMList[qList.index(line[1])]
						m3=self.qMList[qList.index(line[5])]
						m4=self.qMList[qList.index(line[6])]
						m5=self.qMList[qList.index(line[7])]
						if Flavt==6:
							FlavW=24
						elif Flavt==-6:
							FlavW=-24
						else: sys.exit()
						fevtemp=process+'temp'+str(Npr)+'.dat'
						if self.ListNEvnts[count]>0:
							strtemp=qList[Flav1+16]+','+qList[Flav2+16]+' -> '+qList[Flavt+16]+' -> '+qList[Flav3+16]+' '+qList[Flav4+16]+' '+qList[Flav5+16]+':'
							if self.ProcFlag == 21 or self.ProcFlag == 22:
								fresults.write('{0} {1} {2:2.3e} {3} {4:8d} {5} {6:2.2f}\n'.format(strtemp,'|',ListCS[count],' | ',
								self.ListNEvnts[count],'   | ',kfactor[countkf]))
								filegen.write('printf(\"'+strtemp+'  \");\n')
								filegen.write('gendtop(\"'+fevtemp+'\",'+str(Npr)+','+str(self.ListNEvnts[count])+','+str(int(SpCorr))+','+
									str(int(Flav1))+','+str(int(Flav2))+','+str(int(Flav3))+','+str(int(Flav4))+','+str(int(Flav5))+','
									+str(m1)+','+str(m2)+','+str(m3)+','+str(m4)+','+str(m5)+','+str(pp)+');\n\n')
								countkf+=1
							else:
								fresults.write('{0:} {1} {2:2.3e} {3} {4:8d}\n'.format(strtemp,'|',ListCS[count],' | ',self.ListNEvnts[count]))
								filegen.write('printf(\"'+strtemp+'  \");\n')
								filegen.write('gendtop(\"'+fevtemp+'\",'+str(Npr)+','+str(self.ListNEvnts[count])+','+str(int(SpCorr))+','+
									str(int(Flav1))+','+str(int(Flav2))+','+str(int(Flav3))+','+str(int(Flav4))+','+str(int(Flav5))+
									','+str(m1)+','+str(m2)+','+str(m3)+','+str(m4)+','+str(m5)+','+str(pp)+');\n\n')
							count+=1
						else: count+=1
					elif len(line) == 10:
						Flav1=qList.index(line[0])-16
						Flav2=qList.index(line[1])-16
						Flav3=qList.index(line[6])-16
						Flavt=qList.index(line[4])-16
						Flav4=qList.index(line[7])-16
						Flav5=qList.index(line[8])-16
						Flav6=qList.index(line[9])-16

						m1=self.qMList[qList.index(line[0])]
						m2=self.qMList[qList.index(line[1])]
						m3=self.qMList[qList.index(line[6])]
						m4=self.qMList[qList.index(line[7])]
						m5=self.qMList[qList.index(line[8])]
						m6=self.qMList[qList.index(line[9])]
						if Flavt==6:
							FlavW=24
						elif Flavt==-6:
							FlavW=-24
						else: sys.exit()
						fevtemp=process+'temp'+str(Npr)+'.dat'
						if 'Gtop' in process:
							if self.ListNEvnts[count]>0:
								strtemp=qList[Flav1+16]+','+qList[Flav2+16]+' -> '+qList[Flav3+16]+' '+qList[Flavt+16]+' -> '+\
										qList[Flav3+16]+' '+qList[Flav4+16]+' '+qList[Flav5+16]+' '+qList[Flav6+16]+':'
								if self.ProcFlag == 21 or self.ProcFlag == 22:
									fresults.write('{0} {1} {2:2.3e} {3} {4:8d} {5} {6:2.2f}\n'.format(strtemp,'|',ListCS[count],' | ',
											self.ListNEvnts[count],'   | ',1.0))
									filegen.write('printf(\"'+strtemp+'  \");\n')
									filegen.write('gengtop(\"'+fevtemp+'\",'+str(Npr)+','+str(self.ListNEvnts[count])+','+str(int(SpCorr))+','+
										str(int(Flav1))+','+str(int(Flav2))+','+str(int(Flav3))+','+str(int(Flav4))+','+str(int(Flav5))+
										','+str(int(Flav6))+','+str(m1)+','+str(m2)+','+str(m3)+','+str(m4)+','+str(m5)+','+str(m6)+','+str(pp)+');\n\n')
									countkf+=1
								else:	
									fresults.write('{0} {1} {2:2.3e} {3} {4:8d} {5} {6:2.2f}\n'.format(strtemp,'|',ListCS[count],' | ',
											self.ListNEvnts[count],'   | ',1.0))
									filegen.write('printf(\"'+strtemp+'  \");\n')
									filegen.write('gengtop(\"'+fevtemp+'\",'+str(Npr)+','+str(self.ListNEvnts[count])+','+str(int(SpCorr))+','+
										str(int(Flav1))+','+str(int(Flav2))+','+str(int(Flav3))+','+str(int(Flav4))+','+
										str(int(Flav5))+','+str(int(Flav6))+','+str(m1)+','+str(m2)+','+str(m3)+','+str(m4)+','+
										str(m5)+','+str(m6)+','+str(pp)+');\n\n')
								count+=1
							else: count+=1
						elif 'Lqtop' in process:
							if self.ListNEvnts[count]>0:
								strtemp=qList[Flav1+16]+','+qList[Flav2+16]+' -> '+qList[Flav3+16]+' '+qList[Flavt+16]+' -> '+ qList[Flav3+16]+' '+qList[Flav4+16]+' '+qList[Flav5+16]+' '+\
										qList[Flav6+16]+':'
								if self.ProcFlag == 21 or self.ProcFlag == 22:
									fresults.write('{0} {1} {2:2.3e} {3} {4:8d} {5} {6:2.2f}\n'.format(strtemp,'|',ListCS[count],' | ',
											self.ListNEvnts[count],'   | ',1.0))
									filegen.write('printf(\"'+strtemp+'  \");\n')
									filegen.write('genlqtop(\"'+fevtemp+'\",'+str(Npr)+','+str(self.ListNEvnts[count])+','+str(int(SpCorr))+','+
										str(int(Flav1))+','+str(int(Flav2))+','+str(int(Flav3))+','+str(int(Flav4))+','+str(int(Flav5))+
										','+str(int(Flav6))+','+str(m1)+','+str(m2)+','+str(m3)+','+str(m4)+','+str(m5)+','+str(m6)+','+str(pp)+');\n\n')
									countkf+=1
								else:	
									fresults.write('{0} {1} {2:2.3e} {3} {4:8d} {5} {6:2.2f}\n'.format(strtemp,'|',ListCS[count],' | ',
											self.ListNEvnts[count],'   | ',1.0))
									filegen.write('printf(\"'+strtemp+'  \");\n')
									filegen.write('genlqtop(\"'+fevtemp+'\",'+str(Npr)+','+str(self.ListNEvnts[count])+','+str(int(SpCorr))+','+
										str(int(Flav1))+','+str(int(Flav2))+','+str(int(Flav3))+','+str(int(Flav4))+','+
										str(int(Flav5))+','+str(int(Flav6))+','+str(m1)+','+str(m2)+','+str(m3)+','+str(m4)+','+
										str(m5)+','+str(m6)+','+str(pp)+');\n\n')
								count+=1
							else: count+=1
					else: sys.exit("Error: Number of particles.")
			filegen.write('}')
			filegen.close()
		fresults.close()
#		os.chdir(cwd+'/temp')
#		for process in self.ListProcess:
#			if 'Dtop' in process:
#				os.system('gcc gen'+process+'.c ../src/pdf.o ../src/ranmar.o ../lib/libDtop23.a -lm -lLHAPDF -o genEvnt'+process+'.exe')
#				os.system('./genEvnt'+process+'.exe')
#			elif 'Gtop' in process:
#				os.system('gcc gen'+process+'.c ../src/pdf.o ../src/ranmar.o ../lib/libGtop24.a -lm -lLHAPDF -o genEvnt'+process+'.exe')
##				os.system('./genEvnt'+process+'.exe')
#			elif 'Lqtop' in process:
#				os.system('gcc gen'+process+'.c ../src/pdf.o ../src/ranmar.o ../lib/libLqtop24.a -lm -lLHAPDF -o genEvnt'+process+'.exe')
#				os.system('./genEvnt'+process+'.exe')
#		os.chdir(cwd)


#	def WriteLHE(self,subprocess,Proc,NEvents):
#		Npart=len(subprocess.split(':')[1].split('->')[0].split())
#		Npart=Npart+len(subprocess.split(':')[1].split('->')[1].split())+4
#		NEGrid=np.zeros((NEvents,Npart,13))
#		InfoGrid=np.zeros((NEvents,6))

class WriteLHEClass:
	def __init__(self,SubProc,Proc,NEvents,SpCorr,pp):
		self.NEvents=NEvents
		self.Npart=len(SubProc.split(':')[1].split('->')[0].split())
		self.Npart=self.Npart+len(SubProc.split(':')[1].split('->')[1].split())+4
		self.NEGrid=np.zeros((self.NEvents,self.Npart,13))
		self.InfoGrid=np.zeros((self.NEvents,6))
		self.InfoPDF=np.zeros((self.NEvents,7))
#		ftemp=open(file,'r')
#		self.Ncolums=len(ftemp.readline().split())
#		ftemp.close()
		self.SubProc=SubProc
		self.Proc=Proc
		self.file='temp/'+Proc+'temp'+SubProc.split(':')[0].split()[0]+'.dat'
		self.Npr=int(SubProc.split(':')[0].split()[0])
		line =SubProc.split(':')[1].split()
		self.SpCorr = int(SpCorr)
		self.pp=pp
		if self.Npart==7:
			Flav1=qList.index(line[0])-16
			Flav2=qList.index(line[1])-16
			Flavt=qList.index(line[3])-16
			Flav3=qList.index(line[5])-16
			Flav4=qList.index(line[6])-16
			Flav5=qList.index(line[7])-16
			if Flavt==6:
				FlavW=24
			elif Flavt==-6:
				FlavW=-24
			else: sys.exit("Error")
			self.ListFlav=[Flav1,Flav2,Flavt,Flav3,FlavW,Flav4,Flav5]
		elif self.Npart==8:
			Flav1=qList.index(line[0])-16
			Flav2=qList.index(line[1])-16
			Flav3=qList.index(line[6])-16
			Flavt=qList.index(line[4])-16
			Flav4=qList.index(line[7])-16
			Flav5=qList.index(line[8])-16
			Flav6=qList.index(line[9])-16
			if Flavt==6:
				FlavW=24
			elif Flavt==-6:
				FlavW=-24
			else: sys.exit("Error")
			self.ListFlav=[Flav1,Flav2,Flav3,Flavt,Flav4,FlavW,Flav5,Flav6]

	def ReadRaw(self,file):
		ftemp=open(file,'r')
		self.Ncolums=len(ftemp.readline().split())
		self.NERawGrid=np.zeros((self.NEvents,self.Ncolums))
		countemp=0
		for evt in ftemp:
			if countemp >= self.NEvents: break
			x1x2t=map(float,evt.split())
			try:
				self.NERawGrid[countemp]=np.array(map(lambda x:x1x2t[x],range(self.Ncolums)))
				countemp+=1
			except IndexError:
				print evt
#			if self.Npart==7:
#				if len(x1x2t)==44:
#					self.NERawGrid[countemp]=np.array(map(lambda x:x1x2t[x],range(self.Ncolums)))
#					countemp+=1
#				else: continue
#			elif self.Npart==8:
#				if len(x1x2t)==51:
#					self.NERawGrid[countemp]=np.array(map(lambda x:x1x2t[x],range(self.Ncolums)))
#					countemp+=1
#				else: continue
#			else: continue

		ftemp.close()

	def FillInfo(self,NUP,IDPRUP,XWGTUP,SCALUP,AQEDUP):
		ggpos= len(self.NERawGrid[0])-1-7
		for i in range(self.NEvents):
			self.InfoGrid[i]=np.array([NUP,IDPRUP,XWGTUP,SCALUP,AQEDUP,self.NERawGrid[i][ggpos]])
			self.InfoPDF[i]=np.array([self.NERawGrid[i][ggpos+1],self.NERawGrid[i][ggpos+2],self.NERawGrid[i][ggpos+3],self.NERawGrid[i][ggpos+4],self.NERawGrid[i][ggpos+5],self.NERawGrid[i][ggpos+6],self.NERawGrid[i][ggpos+7]])
	def FillEventsDecay(self,Flavors,ISTUP,MOTHUP1,MOTHUP2,VTIMUP,SPINUP):
		IDUP=[]
		for i in Flavors:
			if i!=0:
				IDUP.append(i)
			else:
				IDUP.append(21)	
		for i in range(self.NEvents):
			chain=['']*(self.Ncolums-5*(len(Flavors))-1-7)
			start=5*(len(Flavors))
			for j in range(len(chain)):
				chain[j]=int(self.NERawGrid[i][start])
				start+=1
			Cores=['']*(len(Flavors))
			for j in range(len(Cores)): Cores[j]=[0,0]
			cor=500;
			chain=filter(lambda x:x!=1000,chain)
			if len(Flavors)==8:
				FlavIn=[Flavors[0],Flavors[1]]
				FlavInt=[Flavors[3],Flavors[5]]
				FlavOut=[Flavors[2],Flavors[4],Flavors[6],Flavors[7]]
				if len(chain)%2!=0:
					print "error with color chain  ",chain," ",self.NERawGrid[i]," ",i
					sys.exit()
				for j in range(0,len(chain),2):
					if chain[j]<=4 and chain[j+1]<=4:
						if chain[j] in [1,2] and chain[j+1] in [1,2]:
							if Cores[chain[j]-1][0]==0 and Cores[chain[j+1]-1][1]==0:
								Cores[chain[j]-1][0]=cor
								Cores[chain[j+1]-1][1]=cor
								cor+=1
							elif Cores[chain[j]-1][0]!=0 and Cores[chain[j+1]-1][1]==0:
								Cores[chain[j+1]-1][1]=Cores[chain[j]-1][0]
							else:
								Cores[chain[j]-1][0]=Cores[chain[j+1]-1][1]
						elif chain[j] in [1,2] and chain[j+1] in [3,4]:
							if Cores[chain[j]-1][0]==0 and Cores[chain[j+1]-1][0]==0:
								Cores[chain[j]-1][0]=cor
								Cores[chain[j+1]-1][0]=cor
								cor+=1
							elif Cores[chain[j]-1][0]!=0 and Cores[chain[j+1]-1][0]==0:
								Cores[chain[j+1]-1][0]=Cores[chain[j]-1][0]
							else:
								Cores[chain[j]-1][0]=Cores[chain[j+1]-1][0]

						elif chain[j] in [3,4] and chain[j+1] in [1,2]:
							if Cores[chain[j]-1][1]==0 and Cores[chain[j+1]-1][1]==0:
								Cores[chain[j]-1][1]=cor
								Cores[chain[j+1]-1][1]=cor
								cor+=1
							elif Cores[chain[j]-1][1]!=0 and Cores[chain[j+1]-1][1]==0:
								Cores[chain[j+1]-1][1]=Cores[chain[j]-1][1]
							else:
								Cores[chain[j]-1][1]=Cores[chain[j+1]-1][1]
						else:
							if Cores[chain[j]-1][1]==0 and Cores[chain[j+1]-1][0]==0:
								Cores[chain[j]-1][1]=cor
								Cores[chain[j+1]-1][0]=cor
								cor+=1
							elif Cores[chain[j]-1][1]!=0 and Cores[chain[j+1]-1][0]==0:
								Cores[chain[j+1]-1][1]=Cores[chain[j]-1][0]
							else:
								Cores[chain[j]-1][1]=Cores[chain[j+1]-1][0]
					elif chain[j]<=4 and chain[j+1]>4:
							if Cores[chain[j]-1][0]==0 and Cores[chain[j+1]-1][0]==0:
								Cores[chain[j]-1][0]=cor
								Cores[chain[j+1]-1][0]=cor
								cor+=1
							elif Cores[chain[j]-1][0]!=0 and Cores[chain[j+1]-1][0]==0:
								Cores[chain[j+1]-1][0]=Cores[chain[j]-1][0]
							else:
								Cores[chain[j]-1][0]=Cores[chain[j+1]-1][0]
					elif chain[j]>4 and chain[j+1]<=4:
							if Cores[chain[j]-1][1]==0 and Cores[chain[j+1]-1][1]==0:
								Cores[chain[j]-1][1]=cor
								Cores[chain[j+1]-1][1]=cor
								cor+=1
							elif Cores[chain[j]-1][1]!=0 and Cores[chain[j+1]-1][1]==0:
								Cores[chain[j+1]-1][1]=Cores[chain[j]-1][1]

							else:
								Cores[chain[j]-1][1]=Cores[chain[j+1]-1][1]
					else:
						if Flavors[chain[j]-1] in FlavOut and Flavors[chain[j+1]-1] in FlavOut:
							if Cores[chain[j]-1][1]==0 and Cores[chain[j+1]-1][0]==0:
								Cores[chain[j]-1][1]=cor
								Cores[chain[j+1]-1][0]=cor
								cor+=1
							elif Cores[chain[j]-1][1]!=0 and Cores[chain[j+1]-1][0]==0:
								Cores[chain[j+1]-1][1]=Cores[chain[j]-1][0]
							else:
								Cores[chain[j]-1][1]=Cores[chain[j+1]-1][0]
						elif Flavors[chain[j]-1] in FlavInt and Flavors[chain[j+1]-1] in FlavOut:
							if Cores[chain[j]-1][0]==0 and Cores[chain[j+1]-1][0]==0:
								Cores[chain[j]-1][0]=cor
								Cores[chain[j+1]-1][0]=cor
								cor+=1
							elif Cores[chain[j]-1][0]!=0 and Cores[chain[j+1]-1][0]==0:
								Cores[chain[j+1]-1][0]=Cores[chain[j]-1][0]
							else:
								Cores[chain[j]-1][0]=Cores[chain[j+1]-1][0]
						elif Flavors[chain[j]-1] in FlavOut and Flavors[chain[j+1]-1] in FlavInt:
							if Cores[chain[j]-1][1]==0 and Cores[chain[j+1]-1][1]==0:
								Cores[chain[j]-1][1]=cor
								Cores[chain[j+1]-1][1]=cor
								cor+=1
							elif Cores[chain[j]-1][1]!=0 and Cores[chain[j+1]-1][1]==0:
								Cores[chain[j+1]-1][1]=Cores[chain[j]-1][1]
							else:
								Cores[chain[j]-1][1]=Cores[chain[j+1]-1][1]
			else:
				FlavIn=[Flavors[0],Flavors[1]]
				FlavInt=[Flavors[2],Flavors[4]]
				FlavOut=[Flavors[3],Flavors[5],Flavors[6]]
				for j in range(0,len(chain),2):
					if chain[j]<=3 and chain[j+1]<=3:
						if chain[j] in [1,2] and chain[j+1] in [1,2]:
							if Cores[chain[j]-1][0]==0 and Cores[chain[j+1]-1][1]==0:
								Cores[chain[j]-1][0]=cor
								Cores[chain[j+1]-1][1]=cor
								cor+=1
							elif Cores[chain[j]-1][0]!=0 and Cores[chain[j+1]-1][1]==0:
								Cores[chain[j+1]-1][1]=Cores[chain[j]-1][0]
							else:
								Cores[chain[j]-1][0]=Cores[chain[j+1]-1][1]
						elif chain[j] in [1,2] and chain[j+1]==3:
							if Cores[chain[j]-1][0]==0 and Cores[chain[j+1]-1][0]==0:
								Cores[chain[j]-1][0]=cor
								Cores[chain[j+1]-1][0]=cor
								cor+=1
							elif Cores[chain[j]-1][0]!=0 and Cores[chain[j+1]-1][0]==0:
								Cores[chain[j+1]-1][0]=Cores[chain[j]-1][0]
							else:
								Cores[chain[j]-1][0]=Cores[chain[j+1]-1][0]

						elif chain[j]==3 and chain[j+1] in [1,2]:
							if Cores[chain[j]-1][1]==0 and Cores[chain[j+1]-1][1]==0:
								Cores[chain[j]-1][1]=cor
								Cores[chain[j+1]-1][1]=cor
								cor+=1
							elif Cores[chain[j]-1][1]!=0 and Cores[chain[j+1]-1][1]==0:
								Cores[chain[j+1]-1][1]=Cores[chain[j]-1][1]
							else:
								Cores[chain[j]-1][1]=Cores[chain[j+1]-1][1]
						else: continue
					elif chain[j]<=3 and chain[j+1]>3:
							if Cores[chain[j]-1][0]==0 and Cores[chain[j+1]-1][0]==0:
								Cores[chain[j]-1][0]=cor
								Cores[chain[j+1]-1][0]=cor
								cor+=1
							elif Cores[chain[j]-1][0]!=0 and Cores[chain[j+1]-1][0]==0:
								Cores[chain[j+1]-1][0]=Cores[chain[j]-1][0]
							else:
								Cores[chain[j]-1][0]=Cores[chain[j+1]-1][0]
					elif chain[j]>3 and chain[j+1]<=3:
							if Cores[chain[j]-1][1]==0 and Cores[chain[j+1]-1][1]==0:
								Cores[chain[j]-1][1]=cor
								Cores[chain[j+1]-1][1]=cor
								cor+=1
							elif Cores[chain[j]-1][1]!=0 and Cores[chain[j+1]-1][1]==0:
								Cores[chain[j+1]-1][1]=Cores[chain[j]-1][1]

							else:
								Cores[chain[j]-1][1]=Cores[chain[j+1]-1][1]
					else:
						if Flavors[chain[j]-1] in FlavOut and Flavors[chain[j+1]-1] in FlavOut:
							if Cores[chain[j]-1][1]==0 and Cores[chain[j+1]-1][0]==0:
								Cores[chain[j]-1][1]=cor
								Cores[chain[j+1]-1][0]=cor
								cor+=1
							elif Cores[chain[j]-1][1]!=0 and Cores[chain[j+1]-1][0]==0:
								Cores[chain[j+1]-1][1]=Cores[chain[j]-1][0]
							else:
								Cores[chain[j]-1][1]=Cores[chain[j+1]-1][0]
						elif Flavors[chain[j]-1] in FlavInt and Flavors[chain[j+1]-1] in FlavOut:
							if Cores[chain[j]-1][0]==0 and Cores[chain[j+1]-1][0]==0:
								Cores[chain[j]-1][0]=cor
								Cores[chain[j+1]-1][0]=cor
								cor+=1
							elif Cores[chain[j]-1][0]!=0 and Cores[chain[j+1]-1][0]==0:
								Cores[chain[j+1]-1][0]=Cores[chain[j]-1][0]
							else:
								Cores[chain[j]-1][0]=Cores[chain[j+1]-1][0]
						elif Flavors[chain[j]-1] in FlavOut and Flavors[chain[j+1]-1] in FlavInt:
							if Cores[chain[j]-1][1]==0 and Cores[chain[j+1]-1][1]==0:
								Cores[chain[j]-1][1]=cor
								Cores[chain[j+1]-1][1]=cor
								cor+=1
							elif Cores[chain[j]-1][1]!=0 and Cores[chain[j+1]-1][1]==0:
								Cores[chain[j+1]-1][1]=Cores[chain[j]-1][1]
							else:
								Cores[chain[j]-1][1]=Cores[chain[j+1]-1][1]
						else: continue

			if 1==2:
				cor=500;
				count=0
				Flavors=FlavIn+FlavInt+FlavOut
				for j in range(0,len(chain),2):
					if (chain[j] <= 2) and (chain[j+1] <=2 ) :
						if Cores[chain[j]-1][0]==0 and Cores[chain[j+1]-1][1]==0:
							Cores[chain[j]-1][0]=cor
							Cores[chain[j+1]-1][1]=cor
							cor+=1
						elif Cores[chain[j]-1][0]==0 and Cores[chain[j+1]-1][1]!=0:
							Cores[chain[j]-1][0]=Cores[chain[j+1]-1][1]
						elif Cores[chain[j]-1][0]!=0 and Cores[chain[j+1]-1][1]==0:
							Cores[chain[j+1]-1][1]=Cores[chain[j]-1][0]
						else: continue
					else: continue

				for j in range(0,len(chain),2):
					if (chain[j] <= 2) and (chain[j+1] <=2 ) :
						continue
					else:
						if Flavors[chain[j]-1]>0 or Flavors[chain[j+1]-1]>0:
							try:
								if Cores[chain[j]-1][0]==0 and Cores[chain[j+1]-1][0]==0:
									if (Flavors[chain[j]-1] in FlavOut) and (Flavors[chain[j+1]-1] in FlavOut):
										Cores[chain[j]-1][1]=cor
										Cores[chain[j+1]-1][0]=cor
										cor+=1
									else:
										Cores[chain[j]-1][0]=cor
										Cores[chain[j+1]-1][0]=cor
										cor+=1
								elif Cores[chain[j]-1][0]==0 and Cores[chain[j+1]-1][0]!=0:
									Cores[chain[j]-1][0]=Cores[chain[j+1]-1][0]
								elif Cores[chain[j]-1][0]!=0 and Cores[chain[j+1]-1][0]==0:
									Cores[chain[j+1]-1][0]=Cores[chain[j]-1][0]
								else: continue
							except IndexError:
								print j
								print Cores
								print chain,len(chain)
						else:
							if Cores[chain[j]-1][1]==0 and Cores[chain[j+1]-1][1]==0:
								if (Flavors[chain[j]-1] in FlavOut) and (Flavors[chain[j+1]-1] in FlavOut):
									Cores[chain[j]-1][0]=cor
									Cores[chain[j+1]-1][1]=cor
									cor+=1
								else:
									Cores[chain[j]-1][1]=cor
									Cores[chain[j+1]-1][1]=cor
									cor+=1
							elif Cores[chain[j]-1][1]==0 and Cores[chain[j+1]-1][1]!=0:
								Cores[chain[j]-1][1]=Cores[chain[j+1]-1][1]
							elif Cores[chain[j]-1][1]!=0 and Cores[chain[j+1]-1][1]==0:
								Cores[chain[j+1]-1][1]=Cores[chain[j]-1][1]
							else: continue


			for j in range(self.Npart):
				self.NEGrid[i][j][0]=IDUP[j]
				self.NEGrid[i][j][1]=ISTUP[j]
				self.NEGrid[i][j][2]=MOTHUP1[j]
				self.NEGrid[i][j][3]=MOTHUP2[j]
				self.NEGrid[i][j][4]=Cores[j][0]
				self.NEGrid[i][j][5]=Cores[j][1]
				self.NEGrid[i][j][6]=self.NERawGrid[i][j*5+0]
				self.NEGrid[i][j][7]=self.NERawGrid[i][j*5+1]
				self.NEGrid[i][j][8]=self.NERawGrid[i][j*5+2]
				self.NEGrid[i][j][9]=self.NERawGrid[i][j*5+3]
				self.NEGrid[i][j][10]=self.NERawGrid[i][j*5+4]
				self.NEGrid[i][j][11]=VTIMUP[j]
				self.NEGrid[i][j][12]=SPINUP[j]

	def Write(self,ninit,file):
		f=file
#		f=open(file,'a')
#		for evt in range(self.NEvents):
		for evt in range(ninit-1,ninit):
			f.write('<event>\n')
			# write info
			f.write(' {0:1d}  {1:2d}  {2:3.2f}  {3:3.2f}  {4:2d}  {5:2.4f}\n'.format(\
			int(self.InfoGrid[evt][0]),int(self.InfoGrid[evt][1]),self.InfoGrid[evt][2],\
			self.InfoGrid[evt][3],int(self.InfoGrid[evt][4]),(1.0/(4*np.pi))*self.InfoGrid[evt][5]**2))
			# write data
			if self.SpCorr == 1:
				for part in range(self.Npart):
					f.write('    {0:3d}  {1:2d}  {2:1d}  {3:1d}  {4:3d} {5:3d} '.format(\
					int(self.NEGrid[evt][part][0]),int(self.NEGrid[evt][part][1]),\
					int(self.NEGrid[evt][part][2]),int(self.NEGrid[evt][part][3]),\
					int(self.NEGrid[evt][part][4]),int(self.NEGrid[evt][part][5])))
					f.write('    {0:13.8e}  {1:13.8e}  {2:13.8e}  {3:13.8e}  {4:13.8e} {5:1d} {6:1d}\n'.format(\
					self.NEGrid[evt][part][6],self.NEGrid[evt][part][7],\
					self.NEGrid[evt][part][8],self.NEGrid[evt][part][9],\
					round(self.NEGrid[evt][part][10],3),int(self.NEGrid[evt][part][11]),\
					int(self.NEGrid[evt][part][12])))
			elif self.SpCorr == 0:
				for part in range(self.Npart-4):
					f.write('    {0:3d}  {1:2d}  {2:1d}  {3:1d}  {4:3d} {5:3d} '.format(\
					int(self.NEGrid[evt][part][0]),int(self.NEGrid[evt][part][1]),\
					int(self.NEGrid[evt][part][2]),int(self.NEGrid[evt][part][3]),\
					int(self.NEGrid[evt][part][4]),int(self.NEGrid[evt][part][5])))
					f.write('    {0:13.8e}  {1:13.8e}  {2:6.2e}  {3:13.8e}  {4:13.8e} {5:1d} {6:1d}\n'.format(\
					self.NEGrid[evt][part][6],self.NEGrid[evt][part][7],\
					self.NEGrid[evt][part][8],self.NEGrid[evt][part][9],\
					round(self.NEGrid[evt][part][10],3),int(self.NEGrid[evt][part][11]),\
					int(self.NEGrid[evt][part][12])))
			else: sys.exit("Erro: Wrong SpCorr parameter")
			f.write('#pdf ')
			f.write('{0:4d} {1:4d} {2:13.8e} {3:13.8e} {4:13.8e} {5:13.8e} {6:13.8e}\n'.format(\
				int(self.NEGrid[evt][0][0]),int(self.NEGrid[evt][1][0]),self.InfoPDF[evt][2],\
				self.InfoPDF[evt][3],self.InfoPDF[evt][4],self.InfoPDF[evt][5],self.InfoPDF[evt][6]))
			f.write('</event>\n')

