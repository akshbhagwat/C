#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0,b = 0,c = 0,d = 0;
	int i = 0,j = 0,k = 0,l = 0;
	int ****p = NULL;
	printf("Enter 4 dim\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	p = (int****)malloc(a * sizeof(int***));
	if(p == NULL)
	printf("Memory is not allocated\n");
	for(i = 0 ; i < a ; i++)
	{
		p[i] = (int***)malloc(b * sizeof(int**));
	}
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < b ; j++)
		{
			p[i][j] = (int**)malloc(c * sizeof(int*));
		}
	}
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < b ; j++)
		{
			for(k = 0 ; k < c ; k++)
			{
				p[i][j][k] = (int*)malloc(d * sizeof(int));
			}
		}
	}
	printf("Enter elements\n");
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < b ; j++)
		{
			for(k = 0 ; k < c ; k++)
			{
				for(l = 0 ; l < d ; l++)
				{
					scanf("%d",&p[i][j][k][l]);
				}
			}
		}
	}
	printf("Elements are\n");
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < b ; j++)
		{
			for(k = 0 ; k < c ; k++)
			{
				for(l = 0 ; l < d ; l++)
				{
					printf("%d ",p[i][j][k][l]);
				}
			}
		}
	}
	for(i = 0 ; i < a ; i++)
	{
		free(p[i]);
	}
	free(p);
	return 0;
}
