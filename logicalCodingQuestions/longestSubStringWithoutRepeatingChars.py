import numpy as np
def longestSub(inStr):
	curLen=0
	maxLen = 0
	start = 0
	finalStart = 0
	ll = -1*np.ones(256) #length of ascii chars
	for chr in range(len(inStr)):
		idx = ord(inStr[chr])
		if (ll[idx] != -1 and (chr - start <=curLen)):
			start = ll[idx] + 1
		ll[idx] = chr
		curLen = chr-start+1
		if curLen > maxLen:
			maxLen = curLen
			finalStart = start
	
	return finalStart, maxLen
		

if __name__ == '__main__':
	inStr = "Hellocbjlk"
	start, maxLen = longestSub(inStr)
	print (inStr[int(start):(int(start)+int(maxLen))])