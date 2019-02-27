// Design such application which is used to hold information of student from school.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student
{
	char name[50];
	char addr[50];
	int rno;
	int age;
	int nmarks;
	int *mptr;
}STUD,*PSTUD;

void AcceptInfo(PSTUD,int);
void DisplayAll(PSTUD,int);
void DisplayByRno(PSTUD,int,int);
void DisplayByName(PSTUD,int,char*);

int main()
{
	int n = 0,r = 0,j = 0;
	PSTUD ptr = NULL;
	char *na = NULL;
	printf("Enter number of student in school\n");
	scanf("%d",&n);
	ptr = (PSTUD)malloc(n * sizeof(STUD));
	AcceptInfo(ptr,n);
	DisplayAll(ptr,n);
	printf("Enter roll number\n");
	scanf("%d",&r);
	DisplayByRno(ptr,n,r);
//	printf("Enter name to display information\n");
//	scanf("%s",&na);
//	DisplayByName(ptr,n,na);
	return 0;
}

void AcceptInfo(PSTUD ptr,int no)
{
	int i = 0,j = 0;
	if((ptr == NULL) || (no <= 0))
	{
		return ;
	}
	printf("Enter all information of student\n");
	for(i = 0 ; i < no ; i++)
	{
		printf("Enter information of student number : %d\n",i+1);
		printf("Enter name\n");
		scanf("%s",&ptr[i].name);
		printf("Enter address\n");
		scanf("%s",&ptr[i].addr);
		printf("Enter roll number\n");
		scanf("%d",&ptr[i].rno);
		printf("Enter age\n");
		scanf("%d",&ptr[i].age);
		printf("Enter number of subject\n");
		scanf("%d",&ptr[i].nmarks);
		
		ptr[i].mptr = (int*)malloc(ptr[i].nmarks * sizeof(int));
		printf("Enter marks\n");
		for(j = 0 ; j < ptr[i].nmarks ; j++)
		{
			printf("Subject number : %d\n",j+1);
			scanf("%d",&ptr[i].mptr[j]);
		}
	}
}

void DisplayAll(PSTUD ptr,int n)
{
	int i = 0,j = 0;
	if((ptr == NULL) || (n <= 0))
	{
		return ;
	}
	printf("NAME\tADDRESS\tAGE\tRNo\tSub\tMARKS\n");
	for(i = 0 ; i < n ; i++)
	{
		printf("%s\t%s\t%d\t%d\t%d\t",ptr[i].name,ptr[i].addr,ptr[i].age,ptr[i].rno,ptr[i].nmarks);
		for(j = 0 ; j < ptr[i].nmarks ; j++)
		{
			printf("%d ",ptr[i].mptr[j]);
		}
		printf("\n");
	}
}

void DisplayByRno(PSTUD ptr,int n,int r)
{
	int i = 0,j = 0;
	if((ptr == NULL) || (n <= 0) || (r <= 0))
	{
		return ;
	}
	printf("NAME\tADDRESS\tAGE\tRNo\tSub\tMARKS\n");
	for(i = 0 ; i < n ; i++)
	{
		if(ptr[i].rno == r)
		{
			printf("%s\t%s\t%d\t%d\t",ptr[i].name,ptr[i].addr,ptr[i].age,ptr[i].nmarks);
			for(j = 0 ; j < ptr[i].nmarks ; j++)
			{
				printf("%d ",ptr[i].mptr[j]);
			}
s			printf("\n");
		}
	}
}

/*void DisplayByName(PSTUD ptr,int n,char *na)
{
	int i = 0,j = 0;
	if((ptr == NULL) || (n <= 0) || (na == NULL))
	{
		return ;
	}
	printf("NAME\tADDRESS\tAGE\tRNo\tSub\tMARKS\n");
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j <)
		if(ptr[i].name == )
		{
			printf("%s\t%s\t%d\t%d\t",ptr[i].name,ptr[i].addr,ptr[i].age,ptr[i].nmarks);
			for(j = 0 ; j < ptr[i].nmarks ; j++)
			{
				printf("%d ",ptr[i].mptr[j]);
			}
			printf("\n");
		}
	}
}
*/
