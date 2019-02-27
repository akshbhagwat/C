//program of doubly linked list
#include<stdio.h>
#include<stdlib.h>
struct node         //structure of node in dll
{
	struct node *prev;
	int info;
	struct node *next;
};
struct node *head,*newnode,*temp,*temp1;
int count=0;

void create();
void insertbeg();
void insertend();
void insertbtw();//chk
void insertpos();//chk
void deleteval();//chk
void deletepos();//chk
void display();
void search();
void update();


void create()
{
	int data;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next=newnode->prev=NULL;
	printf("\n Enter the data to be entered:");
	scanf("%d",&data);
	newnode->info=data;
	count++;
}

void insertbeg()
{
	if(head==NULL)
	{	
		create();
		head=newnode;
		return;
	}
	else
	{
		create();
		head->prev=newnode;
		newnode->next=head;
		head=newnode;
	}
}

void insertend()
{
	if(head==NULL)
	{	
		create();
		head=newnode;
		return;
	}
	else
	{
		create();	
		temp=head;
		//while(temp!=NULL)
		//temp=temp->next;
		newnode->prev=temp;
		temp->next=newnode;
		temp=newnode;
	}
}

void insertbtw()
{	
	create();
	temp=head;
	while(temp != NULL)
	temp=temp->next;
	newnode->next=temp->next;
	temp->next=newnode;
	newnode->prev=temp;
	temp->next->prev=newnode;
}
				
void insertpos()
{
	int ch,pos,i=2;	
	printf("\n Enter the position");
	scanf("%d",&pos);
	
	if((pos<1) || pos>=count)
	{
	printf("\n Incorrect position.");
	return;
	}
	else if ((head == NULL) && (pos!=1))
	{
		printf("\n Empty list cannot insert other than 1st position");
		return;
	}
	else if(pos==1)
	{
		if(head==NULL)
		{	
			create();
			head=newnode;
			return;
		}
		else
		{
			create();
			head->prev=newnode;
			newnode->prev=head;
			head=newnode;
		}
	}
	else
	{	temp=head;
		while(i<pos)
		{	
			temp=temp->next;
			i++;
		}
		create();
		temp1=temp->next;
		newnode->next=temp1;
		temp1->prev=newnode;
		temp->next=newnode;
		newnode->prev=temp;
	}
}	

void deleteval()
{
	int data;
	printf("\n Enter the value:");
	scanf("%d",&data);
	temp=head;
	while(temp!=NULL)
	{
		if((temp->info)==data)	
		{
			temp=temp->next;
			temp1=temp->next;
			temp->next=temp1->next;
			if(temp1->next!=NULL)
			temp1->next->prev=temp;//temp1->next->prev=temp;
			free(temp1);
			count--;
			return;
		}
	}
		printf("\n Element not found.");
}

void deletepos()
{	
	int pos,i=0;
	printf("\nEnter position to be deleted : ");
    scanf("%d", &pos);
	temp=head; 
    if((pos<1) || (pos>=count+1))
    {
        printf("\n Position out of range to delete");
        return;
    }
    else if(head==NULL)
    {
        printf("\n No elements to delete");
        return;
    }
    else
    {
    	if(pos==1)
    	{
    		head=temp->next;
    		return;
		}
		for(i=0;i<pos-2;i++)
		temp=temp->next;
		temp1=temp->next;
		temp->next->prev=temp1->next;
		temp->next=temp1->next;
		free(temp1);
		count--;
	}
}

void display()
{
	temp = head;
 
    if(temp == NULL)
    {
        printf("\n List empty to display \n");
        return;
    }
    printf("\n Linked list elements: ");
 
    while (temp->next!=NULL)
    {
        printf(" %d ",temp->info);
        temp=temp->next;
    }
    printf(" %d ",temp->info);
}

void search()
{
    int data,count = 0;
    struct node *temp;
    temp=head;
 
    if (temp==NULL)
    {
        printf("\nError: List empty to search for data");
        return;
    }
    printf("\n Enter value to search:");
    scanf("%d", &data);
    while (temp!=NULL)
    {
        if (temp->info==data)
        {
            printf("\n Data found in %d position",count+1);
            return;
        }
        else
             temp= temp->next;
            count++;
    }
    printf("\n %d not found in list.",data);
}
 
void update()
{
    int data,data1;
    struct node *temp;
 
    printf("\n Enter node data to be updated:");
    scanf("%d",&data);
    printf("\n Enter new data:");
    scanf("%d",&data1);
    temp=head;
    if (temp==NULL)
    {
        printf("\n List empty no node to update");
        return;
    }
    while (temp!=NULL)
    {
        if (temp->info==data)
        {
 
            temp->info=data1;
            display();
            return;
        }
        else
            temp=temp->next;
    }
 
    printf("\n %d not found in list to update", data);
}

void main()
{
	head=NULL;
	temp=temp1=NULL;
	int ch;
	
	printf("\n 1.Insert at beginning.");
	printf("\n 2.Insert in the end.");
	printf("\n 3.Insert in between.");
	printf("\n 4.Insert position wise.");
	printf("\n 5.Delete by value.");
	printf("\n 6.Delete by position.");
	printf("\n 7.Display.");
	printf("\n 8.Search.");
	printf("\n 9.Update.");	
	printf("\n 10.Exit.");
	
	while(1)
	{
		printf("\n\n Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insertbeg();
				break;
			case 2:insertend();
				break;
			case 3:insertbtw();
				break;
			case 4:insertpos();
				break;				
			case 5:deleteval();
				break;
			case 6:deletepos();
				break;
			case 7:display();
				break;
			case 8:search();
				break;
			case 9:update();
				break;
			case 10:exit(0);
				break;
			default:printf("\n Wrong Choice.");
			
		}
				
		}
	}
		
