/*Gist of the solution:
1. Maintain a buffer of sized 256 (ASCII characters) and init with -1s
2. Start traversing through the input string
3. check if a particular char is already present (i.e. not -1)
3. If it is present, check if the repeating character's old location
is within the substring under consideration (ii-charArr[strIdx] <= curLen)
4. if satisfied move the startIdx to the next location of that old location
because we will no longer continue to use that as part of our maxLength
5. update the char buffer and compute the curLen
6. Only if curLen exceeds the prev max length, replace the maxLen and the startIdx of that
max length substring

'''actual solution can be found at: 
https://www.geeksforgeeks.org/length-of-the-longest-substring-without-repeating-characters/""

*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct outputs{
  int maxLen;
  int startIdx;
}output;

int findLongestSubStr(char *pStr, output *pOut1);

int main(void)
{

  char ss[] = "howarhheyou";
  output out1;
  findLongestSubStr(ss, &out1);

  printf("MaxLen = %d, StartIdx = %d \n", out1.maxLen, out1.startIdx);
}
int findLongestSubStr(char *pStr, output *pOut1)
{
  int lenStr = strlen(pStr);
  printf("%d \n", lenStr);
  int startIdx = 0;
  int max_len = 0;
  int curLen = 0;
  int maxLenStartIdx = 0;

  int *charArr = (int *)malloc(256 * sizeof(int));
  for (int ii = 0; ii < 256; ii++)
  {
    charArr[ii] = -1;
  }
  for (int ii = 0; ii < lenStr; ii++)
  {
    int strIdx = pStr[ii]; //since assigning this to "int", it gets the ASCII
    if (charArr[strIdx] != -1 && (ii-charArr[strIdx] <= curLen))
    //if it already exists and is a part of the substring under test
    {
      startIdx = charArr[strIdx] + 1 ;//move one location to right of the char that has just been repeated

    }
    //update the character's location for future checks
    charArr[strIdx] = ii;
    curLen = ii - startIdx + 1;
    if (curLen  > max_len)
    {
      maxLenStartIdx = startIdx;
      max_len = curLen;
    }

  }
  pOut1->maxLen = max_len;
  pOut1->startIdx = maxLenStartIdx;
return 0;
}
