#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char * concatenateStrings(char **inStrings, int n)
{
  int inSize =0;
  char **pInStrings = inStrings;
  for (int ii = 0; ii < n; ii++)
  {

    int tmp = strlen(*pInStrings);
    printf("size of string %d is %d\n", ii, tmp);
    inSize += tmp;
    pInStrings++;
  }
  printf("Total length of input strings is %d\n", inSize);
  char *outString = (char *)malloc(inSize * sizeof(char));
  pInStrings = inStrings;
  for (int ii =0 ; ii < n; ii++)
  {
    strcat(outString, *pInStrings);
    pInStrings++;
  }
  return outString;
}


int main(int argc, char **argv)
{
char **inStrings = argv;

int n = argc-1;
inStrings++;
char *outString = concatenateStrings(inStrings, n);
printf("output concatenated String is %s \n", outString);
return 0;
}
