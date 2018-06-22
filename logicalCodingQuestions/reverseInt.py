# Hello World program in Python
    
x = -1234    
negFlag = 0
num = x
if x < 0:
    num = -x
    negFlag = 1
    print (negFlag)
ctr = 0
digits = []
ln = len(str(num))
retNum=0
while (ctr < ln ):
  divr = 10**ctr
  temp = (num/divr )%10
  retNum += temp * (10**(ln-ctr-1))
  ctr += 1


if negFlag:
    print(-retNum)
else:
    print(retNum)


	