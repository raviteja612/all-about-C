//"how the command line arguments work"

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv)
{
  //we got the number of command line arguments as argc
  //we got what the actual arguments are in the two dimension char array
  char **localPtr = argv; //use a double pointer to point to the input strings
  for (int ii = 0; ii < argc; ii ++)
  {
    localPtr = argv + ii; //points to the starting address of the next string

    printf("Same argument using pointer jumps is at address %d \n", *localPtr);
    printf("argument number %d is %s \n with starting address %d \n", ii, argv[ii], &argv[ii]);
  }
}
