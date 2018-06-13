#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* It is always safe and elegant to allocate memory inside the main function. Anything allocated inside the
calling function can lead to memory leaks */
char *get_ptr()
{
	char *samplePtr = (char *)malloc(sizeof(char));
	samplePtr = "Hello";
	return samplePtr;
}

int main()
{
	char *localPtr = get_ptr();
	free(localPtr); //freeing here can delete the memory allocated inside the other function
	printf("%s \n", localPtr);
	return 0;
}
