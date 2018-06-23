#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int factorial(int n)
{

	if (n==1)
		return 1;
	else
		return (n*factorial(n-1));
	
}

int main(int argc, char** argv )
{
	char *in;
	long int inStr = strtol(argv[1], &in, 10);
	int kk = factorial(inStr);
	printf("%d \n", kk);
	return 0;
}