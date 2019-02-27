// Adjacency matrix 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int **adj = NULL;
void display(int n);
int n;

main()
{
	int i = 0;
	int n = 0;
	int j = 0;
	int f = 0;

	printf("Enter vertices of matrix\n");
	scanf("%d",&n);

	adj = (int **)malloc(sizeof(int*)*n);

	for(i = 0;i < n; i++)
	{
		adj[i] = (int *)malloc(sizeof(int)*n);
	}

	for(i=0;i<n;i++)
	 {
		   for(j=0;j<n;j++)
			{
		 		printf("\n Enter A %d %d :",i,j);
				scanf("%d",&adj[i][j]); 
			}
	}

	printf("\n Entered matrix A is :\n");

	display(n);   

	for(i=0;i<n;i++)
	 {
		for(j=0;j<n;j++)
		{
			if(i!=j && adj[i][j]==0)
			f = 1;
		}
	}
		
	if (f == 1)
		printf("\n Graph is not connected");
	else
		printf("\n Graph is connected");

	for(i = 0;i < n; i++)
	{
		free(adj[i]);
	}
	free(adj);
}



void display(int n)
{
	int i,j;

	for(i=0;i<n;i++)
	 {
	  	for(j=0;j<n;j++)
		{
			printf("%d\t",adj[i][j]);
		}
		printf("\n");
	}
}

void mul(int arr1[50][50],int arr2[50][50])
{
int d[50][50],i,j,k,l;
for(i=1;i<n;i++)
	 {
  		for(j=1;j<n;j++)
			{
				d[i][j]=0;
			}
	}
for(i=1;i<n;i++)
	 {
  		for(j=1;j<n;j++)
			{
				for(k=1;k<n;k++)
					{
		d[i][j]=d[i][j]+arr1[i][j]*arr2[k][j];
					}
			}
	}

void copy(int arr1[50][50],int arr2[50][50])
{
int d[50][50],i,j,k,l;
for(i=1;i<n;i++)
	 {
  		for(j=1;j<n;j++)
			{
		arr2[i][j]=arr1[i][j];
			}
	}
}

int add(int arr1[50][50],int arr2[50][50])
{
int i,j;
int arr3[50][50];
for(i=1;i<n;i++)
	 {
  		for(j=1;j<n;j++)
			{
		arr3[i][j]=arr1[i][j]+arr2[i][j];
			}
	}
    
}
}
