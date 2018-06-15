/* Queue using a doubly linked list */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listitem
{
	struct listitem *next;
	struct listitem *prev;
	int val;	
}LISTITEM;

LISTITEM *temp, head;//a structure variable (here, "head") gets memory allocated by default

int main()
{
	head.next = (LISTITEM *)&head;
	head.prev = (LISTITEM *)&head;
	LISTITEM *item;
	for (int i=0; i<5; i++)
	{
		item = (LISTITEM *)malloc(sizeof(LISTITEM)); //create a struct
		item->val = 2*i; //store the value
		temp = head.prev;	//store the recently added one to temp, so that the joints can be knit
		temp->next = item; //use that to point to the newly created item
		item->next = &head; //last item will point back to the head
		item->prev = temp; //knit the new one to the last but one
		head.prev = item; //head will point to the last one
		
	}
	//let's traverse through the list in one direction
	temp = head.next;
	while(temp!= &head)
	{
		printf("%d \n", temp->val);
		temp = temp->next;
	}
	
	//traverse in the other direction
	temp = head.prev;
	while(temp!= &head)
	{
		printf("%d \n", temp->val);
		temp=temp->prev;
	}
	printf("Done");
}