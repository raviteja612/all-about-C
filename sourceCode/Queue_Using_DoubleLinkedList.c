/* Queue using a doubly linked list */

/* How to do:
1. Create an outside structure
2. global structure variable

For nodes:
3. next pointer of the last one points to the new node always
4. next pointer of the new node (which is the last one now) will go to header
5. All previous pointers point to the previous node
6. Previous of the First node in the list points to head

For head:
7. Next of the head points to the first node
8. Previous of head points to the last one
Think of it as a circular buffer
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listitem
{
	struct listitem *next;
	struct listitem *prev;
	int val;	
}LISTITEM;

LISTITEM head;

void enqueue(int val)
{
	LISTITEM *item = (LISTITEM *)malloc(sizeof(LISTITEM));
	LISTITEM *temp;
	temp = head.prev;
	temp->next = item;
	item->next = &head;
	head.prev = item;
	item->prev = &head;
	item->val = val;
	return;
}

int dequeue()
{
	LISTITEM *temp = head.next;
	if (temp == &head)
	{
		printf("List is empty");
	}
	else{
		printf("%d \n", temp->val);
		head.next = temp->next;
		temp->next->prev = &head;
	}
		
	return 0;
}

int main()
{
	head.next = (LISTITEM *)&head;
	head.prev = (LISTITEM *)&head;
	
	int retData;
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	dequeue();
	dequeue();
	dequeue();
	
	printf("\n Done \n");

}


