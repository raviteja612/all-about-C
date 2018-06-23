#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
  char *pArr1 = "Hi high hello";
  char *pArr2 = malloc(strlen(pArr1)*sizeof(char));
  memcpy(pArr2, pArr1, strlen(pArr1)*sizeof(char));
  
  memset(pArr2, 's', 4*sizeof(char) );
  printf("%s \n", pArr2);
  

  return 0;
}