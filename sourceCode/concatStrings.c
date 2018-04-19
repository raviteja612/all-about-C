/*
allocate heap memory inside the function call and return that to the main function.
Using malloc will allocate the heap memory inside the called function and will persist in the main function when it is returned.

Malloc: allocates the memory of generic type and typecasts it based on what you mention. This is unitialized. To initialize to all 
zeros, use calloc. A NULL pointer is returned if there is no memory available. A NULL pointer is basically something pointing to 
an address whose value is zero. An address location at 0 is always invalid. It needs to be > 0.
*/


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
