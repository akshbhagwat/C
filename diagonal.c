#include<stdio.h>

int main()
{
	unsigned int arr[3][3],brr[3][3],crr[3][3]={{0,0,0},{0,0,0},{0,0,0}};
	int i,j;
	printf("ENter matrix 1\n");
	for(i = 1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	printf("ENter matrix 2\n");
	for(i = 1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			scanf("%d",&brr[i][j]);
		}
	}

	printf("Display matrix 1\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("\t%d\t",brr[i][j]);
		}
		printf("\n");
	}

	printf("display matrix 2\n");
	for(i = 1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("\t%d\t",brr[i][j]);
		}
		printf("\n");
	}

	printf("Addition of diagonal\n");
	for(i = 0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				crr[i][j] = arr[i][j] + brr[i][j];
			}
		}
	}
	for(i = 1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("\t%d\t",crr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
