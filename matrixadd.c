#include<stdio.h>
main()
{
int A[10][10],B[10][10],C[10][10],i,j,m,n;
printf("\n Enter number of rows and columns\n");
scanf("%d %d",&m,&n);
printf("\n Enter matrix A \n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&A[i][j]);
for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			{
				printf("\t%d",A[i][j]);
			}
		printf("\n");
	}
printf("\n Enter matrix B \n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&B[i][j]);
for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			{
				printf("\t%d",B[i][j]);
			}
		printf("\n");
	
	}
printf("\n Addition is=\n");
/*for(i=0;i<m;i++)
for(j=0;j<n;j++)
	
		C[i][j]=A[i][j]+B[i][j];
	}*/

for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			{
				C[i][j]=A[i][j]+B[i][j];
				printf("%d\t",C[i][j]);
			}
		printf("\n");	
	}
}
