#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int findLongestSubStr(char *pSs, int *pLen);

int main(void)
{
char ss[] = "abcabcbb";
printf("%s lenth is %d\n" , ss, (int)(strlen(ss)));
int maxLen;
int start_idx = findLongestSubStr(ss, &maxLen);
printf("start_idx = %d, maxLen = %d\n", start_idx, maxLen);
}
int findLongestSubStr(char *pStr, int *maxLen)
{
  int inLen = (int)strlen(pStr);
  int cur_len = 0;
  int start_idx = 0;
  int startMaxIdx = 0;
  int max_len = 0;
  int *charBuf = (int *)malloc(256 * sizeof(int));
  for (int ii =0; ii < 256; ii++)
  {
    charBuf[ii] = -1;
  }
for (int ii = 0; ii < inLen; ii++)
{
  int charAscii = pStr[ii];
  if(charBuf[charAscii] != -1)//char from this string or previous once
  {
    start_idx = charBuf[charAscii] + 1;
  }
  cur_len = ii - start_idx + 1;
  charBuf[charAscii] = ii;
  if (cur_len > max_len)
  {
    startMaxIdx = start_idx;
    max_len = cur_len;
  }
}
*maxLen = max_len;
return startMaxIdx;
}
