/*
---Stack implementation description---
It is same as adding numbers to an array. But you give a user interface
Using just a structure variable ("." operator) or structure pointer ("->" operator like in this program)
Create an array of mxLength in a structure and maintain a variable to check the index.

Initiate to -1. IF it stays there then you cannot pop anything.
If it exceeds the maxLength then you cannot push anything.
All it needs is to send the pointer to this structure into each of push, pop and display

--URL: https://www.sanfoundry.com/c-program-stack-implementation/
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXELEM 20

struct stack{
  int strc[MAXELEM];
  int top;
};
typedef struct stack STACK;

//function decalarations
void push(STACK *pStrc, int elem)
{
  if(pStrc->top == (MAXELEM-1))
  {
    printf("Stack is full \n");
    return;
  }
  else
  {
    pStrc->top++;
    pStrc->strc[pStrc->top] = elem;
  }
}

void pop(STACK *pStrc)
{
  if (pStrc->top == -1)
  {
    printf("stack is empty\n" );
  }
  else
  {
    printf("Popping the element %d \n", pStrc->strc[pStrc->top]);
    pStrc->top--;
  }
}

void display(STACK *pStrc)
{
  int numElems = pStrc->top;
  printf("Displaying the elements: \n");
  for (int ii =numElems; ii >= 0; ii--)
  {
    printf("%d \n", pStrc->strc[ii]);
  }
}

int main(void)
{
  int choice, pushElem, poppedElem;
  STACK strc;
  STACK *pStrc = &strc;//using strc directly only needs . operator
  pStrc->top = -1;

  while(1)
  {
    printf("What action do you want to do? \n 0. Push \n 1. Pop \n 2. Display \n");
    scanf("%d", &choice);
  switch (choice) {
    case 0:
      printf("Element you want to push: ");
      scanf("%d", &pushElem);
      push (pStrc, pushElem);
      break;

    case 1:
        pop(pStrc);
        break;

    case 2:
      display(pStrc);
      break;

    default:
      printf("Invalid choice \n");
      break;
      }
    }
  return 0;
}
