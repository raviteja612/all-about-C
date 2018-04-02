/* using double pointers for string arrays
use the double pointer to point to the different locations i.e. starting address
of each word
use the single pointer to use that to print the words.
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define LENGTH 3

int main(void)
{
 char* words[LENGTH];
 words[0] = "Hello";
 words[1] = "How";
words[2] = "are you";

char *pc, *pcStr;
char **ppc;

for (int ii = 0; ii < LENGTH; ii++)
{
  ppc = words + ii;
  pc = *ppc;
  pcStr = pc;
  while (*pc !=0)
  {
    printf("%c", *pc);
    pc++;
  }
  printf("\n");
  printf("%s \n", pcStr);
}

return 0;
}
