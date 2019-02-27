#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
	int data;
	struct Node *next;
}NODE,*PNODE,**PPNODE;

void Insert(PPNODE first,int no)
{
	PNODE newn = NULL;
	PNODE temp = *first;

	newn = (PNODE)malloc(sizeof(NODE));
	newn -> data = no;
	newn -> next = NULL;

	if(*first == NULL)
	{
		*first = newn;
	}
	else
	{
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
		temp -> next = newn;
	}
}

void Display(PNODE first)
{
	PNODE temp = first;
	printf("\n");
	while(temp != NULL)
	{
		printf("[%d]-->",temp -> data);
		temp = temp -> next;
	}
	printf("\b\b\b");
}

void Reverse(PPNODE head)
{
	PNODE temp1,temp2,temp3;
	temp1 = temp2 = temp3 = *head;
	temp1 = temp1 -> next -> next;
	temp2 = temp2 -> next;
	temp3 -> next = NULL;
	temp2 -> next = temp3;
	
        temp3 = temp2;
        temp2 = temp1;
	temp1 = temp1 -> next;
	temp2 -> next = temp3;

	*head = temp2;
}

void PrintReverse(PPNODE head)
{
	PNODE temp = *head;
	int count = 3;

	while((count != 0)&&(temp != NULL))
	{
		Reverse(head);
		count--;
	}
}

int main()
{
	struct Node *head = NULL;

	Insert(&head,10);
	Insert(&head,20);
	Insert(&head,30);
	Insert(&head,40);
	Insert(&head,50);
	Insert(&head,60);
	Insert(&head,70);
	Insert(&head,80);

	Display(head);

	PrintReverse(&head);
	Display(head);

	return 0;
}
