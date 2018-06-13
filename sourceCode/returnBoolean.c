#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>


bool ifTrue(int a)
{
	if (a == 2)
		return true;
	else
		return false;
}

int main()
{
	int a = 2;
	printf("%d \n", ifTrue(a));
	return 0;
}
