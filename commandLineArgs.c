//"how the command line arguments work"

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv)
{
  //we got the number of command line arguments as argc
  //we got what the actual arguments are in the two dimension char array
  char **localPtr = argv;
  for (int ii = 0; ii < argc; ii ++)
  {
    localPtr = argv + ii;
    printf("argument number %d is %s \n", ii, argv[ii]);
    printf("Same argument using pointer jumps is %s \n", *localPtr);
  }
}
