#include<stdio.h>
#include<stdlib.h>
int main()
{
	int count = 0,iWord = 0,k = 0;
	int **p = NULL,count1 = 0;
	int i = 0,num = 0,j = 0,ch = 0;
	printf("Enter linear code (k) : \n");
	scanf("%d",&iWord);
	printf("Enter number of digit (n)\n");
	scanf("%d",&num);
	p = (int **)malloc(iWord * sizeof(int*));
	for(i = 0 ; i < iWord ; i++)
	{
		p[i] = (int *)malloc(iWord * sizeof(int));
	}
	if(p == NULL)
	{
		printf("MEMORY NOT ALLOCATED\n");
	}
	for(i = 0 ; i < iWord ; i++)
	{
		printf("Enter %d word\n",i+1);
		for(j = 0 ; j < num ; j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
               while(1)
	{
		printf("1 WEIGHT\n2 DISTANCE\n3 EXIT\n");
		printf("Enter choice\n");
		scanf("%d",&ch);
		count1 = 0;
		switch(ch)
		{
			case 1 :
		printf("C = {");
		{
			for(i = 0 ; i < iWord ; i++)
			{
				for(j = 0 ; j < num ; j++)
				{
					printf("%d",p[i][j]);
				}
				printf(",");			
			}
		}	
		printf("\b}\n");
		for(i = 0 ; i < iWord ; i++)
		{
			for(j = 0 ; j < num ; j++)
			{
				while(p[i][j])
				{
					p[i][j] = p[i][j] / 10;
					count++;
		
				}

			}
			printf("Weight of c%d = %d\n\n\n",k+1,count);
			count=0;
		}
			
		break;
	
			case 2 :
		for(i = 0 ; i < 2 ; i++)
		{
			printf("Enter %d word\n",i+1);
			for(j = 0 ; j < num ; j++)
			{
				scanf("%d",&p[i][j]);
			}
		}
		printf("Distance between two iWord\n");
		for(i = 0 ; i < 2 ; i++)
		{
			for(j = 0 ; j < num ; j++)
			{
				printf("%d",p[i][j]);
			}
			printf("\t");
		}
		for(i = 0 ; i < iWord ; i++)
		{
			for(k=1 ; k < num ; k++)
			{
				for(j = 0 ; j < num ; j++)
				{
					if(p[i][j] != p[k][j])
					{
						count1++;
					}
				}break;
			}break;
		}
		printf(" = %d\n\n\n",count1);
		break;
	
			case 3 :
		return 0;
		}
	}
}
