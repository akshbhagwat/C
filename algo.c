#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **p = NULL;
	int i = 0,j = 0,k=0,a=0;
	int row = 0,col = 0;
	printf("Enter row\n");
	scanf("%d",&row);
	printf("Enter col\n");
	scanf("%d",&col);
	p = (int **)malloc(row * sizeof(int*));
	for(i = 0 ; i < row ; i++)
	{
		p[i] = (int *)malloc(col * sizeof(int));
	}
	if(p == NULL)
	{
		printf("MEMORY NOT ALLOCATED\n");
	}
	printf("Enter %d elemts\n",row*col);
	for(i = 0 ; i < row ; i++)
	{
		for(j = 0 ; j < col ; j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	printf("MATRIX -------------->\n");
	for(i = 0 ; i < row ; i++)
	{
		for(j = 0 ; j < col ; j++)
		{
			printf("%d ",p[i][j]);
		}
		printf("\n");
	}
	for(i = 0 ; i < row ; i++)
	{
		for(j = 0 ; j < col ; j++)
		{
			for(k=j+1;k<col;k++)
			{
				if(p[i][j]>p[i][k])
				{
					a=p[i][j];
					p[i][j]=p[i][k];
					p[i][k]=a;
				}
			}
		}
	}
	for(i = 0 ; i < row ; i++)
	{
		for(j = 0 ; j < col ; j++)
		{
			printf("%d",p[i][j]);
		}
		printf("\n");
	}
	return 0;
}
