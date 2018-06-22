#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
  char pArr[] = "Hi high hello"; 
  //Had this been a pointer, you cannot modify its contents
  /* *pArr = "Hello" -- if we used this then the pointer is pointing to a string literal, which is pointing to 
  Read only location. So we cannot modify its contents. Rather use an array so that you can modify it. Or define a new pointer 
  and create memory to reverse the string by creating a new copy */
  
  int n = strlen(pArr);
  
  printf("length of string = %d \n", n);
  char *pRevArr = malloc((strlen(pArr)+1)*sizeof(char));
  for (int ii=0; ii< (int)n/2; ii++)
  {
	  char temp = pArr[ii];
	  pArr[ii] = pArr[2*n-ii-1] ;
	  pArr[2*n-ii-1] = temp;
	  
  }
  printf("Reverse string %s of length %d\n", pArr, strlen(pArr));
  int jj, ii = 0;
  
  while (ii < strlen(pArr))
  {
	  jj=ii; //start of the word after a space
	  while(pArr[ii]!=' ' && pArr[ii]!=0)
	  {
		  ii++;
	  } //end of the word before a space
	  int inc=0;
	  for(int kk=jj; kk<ii; kk++, inc++) //loop from start to end of each word
	  {
		  pRevArr[kk] = pArr[ii-1-inc]; //reverse just that part
	  }
	  pRevArr[ii] = ' '; //add the space now
	  ii++; //account for the space in the original string
  }  
  pRevArr[ii-1] = 0; //once end of word is reached, go a step back and put EndOfString literal
  printf("%s \n", pRevArr);
  return 0;
}