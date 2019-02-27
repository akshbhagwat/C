#include<stdio.h>
struct student
	{
		char name[20];
		int rollno;
		int marks[3];
		float perc;
	};
void main()
{
int i,sum,j;
struct student s[10];
printf("\n enter the details of 10 students \n");
for(i=0;i<10;i++)
	{
		printf("\n enter the name and roll number\n");
		scanf("%s %d",&s[i].name,&s[i].rollno);
		printf("\n enter marks of three subject");
		sum=0;
	for(j=0;j<3;j++)
	{
		scanf("%d",&s[i].marks[j]);
		sum=sum+s[i].marks[j];
	}
		s[i].perc=(float)sum/3;
	}
	printf("\n\nName \tRoll no\t Percentage");
	printf("\n============================================\n");
	for(i=0;i<10;i++)
	{
		printf("\n%s\t%d\t%f",s[i].name,s[i].rollno,s[i].perc);
	}
}

