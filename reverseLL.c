// Reverse linked list

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE,**PPNODE;

PNODE Reverse(PNODE first)
{
	PNODE present = NULL,temp;
	while(first != NULL)
	{
		temp = first;
		first = first -> next;
		first -> next = present;
		present = temp;
		printf("%d",present->data);
	}
	return present;
}


void Display(PNODE first)
{
	while(first != NULL)
	{
		printf(" %d ",first -> data);
		first = first -> next;
	}
}

void InsertFirst(PPNODE first,int no)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	if(newn == NULL)
	{
		printf("INVALID\n");
	}
	newn -> data = no;
	newn -> next = NULL;

	if(*first == NULL)
	{
		*first = newn;
	}
	else
	{
		newn -> next = *first;
		*first = newn;
	}
}

int main()
{
	PNODE head = NULL;
	PNODE ptr;
	InsertFirst(&head,10);
	InsertFirst(&head,20);
	InsertFirst(&head,30);
	InsertFirst(&head,40);
	InsertFirst(&head,50);
	Display(head);

	ptr = Reverse(head);
	Display(ptr);
	return 0;
}
