/*
---Stack implementation description using Linkedlist (Pointers)

Here create a pointer to itself of type struct
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Macros*/
#define MAXELEMS 50

struct stack{
	int elem;
	struct stack *strPtr;
};
typedef struct stack STACK;
STACK *strInit;
	
/*function prototypes*/
int push (int pushElem);
int pop(void);
int disp(void);

static int ctr = -1;
int main()
{
	
	int option, pushElem, keepGoing=1;
	
	while (keepGoing)
	{
		printf("What do you want to do? \n 1.Push \n 2.Pop \n 3.Display \n");
		scanf("%d", &option);
		switch (option)
			{
				case 1:
					printf("Element you want to push: \n");
					scanf("%d", &pushElem);
					push (pushElem);
					break;
				case 2: 
					pop();
					break;
				case 3:
					disp();
					break;
				default:
					printf("Invalid option");
					break;
					
			}
		printf("do you want to keep going? (Y=1, N=0) \n");
		scanf("%d", &keepGoing);
	}
	printf("Completed");
	
	return 0;
}

int push (int pushElem)
{
	STACK *new = (STACK *)malloc(sizeof(STACK));
	new->elem=pushElem;
	new->strPtr=strInit;
	strInit=new;
	ctr +=1;
	return 0;
}
int pop()
{
	if (strInit == NULL)
	{
		printf("Stack is empty \n");
		
	}
	else
	{
		printf("Popping the element %d \n", strInit->elem);
		strInit = strInit->strPtr;
		ctr -= 1;
	}
	return 0;
}
int disp()
{
	STACK *dispPtr = strInit;
	while (dispPtr != NULL)
	{
		printf("%d \n", dispPtr->elem);
		dispPtr = dispPtr->strPtr;
		
	}
	return 0;
}
