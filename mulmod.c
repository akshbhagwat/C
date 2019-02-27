// Multiplication Module table 
#include<stdio.h>
main()
{
	int i,j,n,t;
	printf("Enter number to find multiplication table\n");
	scanf("%d",&n);
	printf(" * ");
	for(i=0;i<n;i++)
		{
			printf("\t|%d|",i);
		}
			printf("\n");
	for(i=0;i<n;i++)
		{
				printf("|%d| ",i);
				for(j=0;j<n;j++)
			{
				t=i*j;
				printf("\t%d",t%n);
			}
				printf("\n");	
		}
}
