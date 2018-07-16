#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int powerOf2(int n)
{

	int pow = 1<<n;
	return pow;
}

int main()
{
	int n = 3;
	printf("%d is the 2 to the power of %d \n", powerOf2(n), n);
	return 0;
}
