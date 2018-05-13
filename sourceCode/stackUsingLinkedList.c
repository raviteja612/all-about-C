/*
---Stack implementation description using Linkedlist---
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node {
  int val;
  struct node *ptr;
};
typedef struct node NODE;

NODE *push (NODE *pNode, int pushElem)
{
  NODE *localPtr = (NODE *)malloc(sizeof(NODE));
  if (localPtr == NULL)
  {
    printf("Insufficient memory \n");
  }
  pNode->val = pushElem;
  localPtr->ptr = pNode; //connect the newly created one to the old struct

  return localPtr; //need to return the address of the newly created struct
}

NODE *pop(NODE *pNode)
{
  if (pNode->ptr == NULL)
  {
    printf("stack is empty \n");
  }
  else
  {
    printf("Popping the element %d\n ", pNode->val);
    pNode = pNode->ptr;
  }
  return pNode;
}

void display(NODE *pNode)
{
  NODE *localPtr = pNode;
  printf("Displaying the elements \n");
  while (localPtr->ptr != NULL)
  {
    printf("%d \n", localPtr->val);
    localPtr = localPtr->ptr;
  }
}

int main()
{
  NODE nodeStr;
  NODE *pNode = &nodeStr;
  pNode->ptr = NULL;
  int choice, pushElem;
  while(1)
  {
    printf("What action do you want to do? \n 0. Push \n 1. Pop \n 2. Display \n");
    scanf("%d", &choice);
  switch (choice) {
    case 0:
      printf("Element you want to push: ");
      scanf("%d", &pushElem);
      pNode = push (pNode, pushElem);
      break;

    case 1:
      pNode = pop(pNode);
      break;

    case 2:
      display(pNode);
      break;

    default:
      printf("Invalid choice \n");
      break;
      }
    }
}
