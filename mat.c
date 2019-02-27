#include<stdio.h>
int main()
{
	int ch = 0;
	int i = 0,j = 0;
	int p[5][10];
	int q[5][5];
	int transpose[5][5];
	while(1)
	{
		printf("1 Matrix\n2 G' = I5\n3 G' = X\n4 H'\n5 EXIT\n");
		printf("Enter choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
				case 1 :
			printf("\nGiven matrix G is\n\n");
			int p[5][10] = {{1,0,2,0,0,2,0,1,0,2},
					{0,0,0,1,0,1,0,0,0,1},
					{0,0,0,0,1,0,0,2,0,0},
					{0,0,0,0,0,0,1,0,0,1},
					{0,0,0,0,0,0,0,0,1,2},
					};
			for(i = 0 ; i < 5; i++)
			{
				for(j = 0 ; j < 10 ; j++)
				{
					printf("%d ",p[i][j]);
				}
				printf("\n");
			}
			printf("\n\n");
			break;
				case 2 :
			printf("\nG' = I5\n\n");
			for(i = 0 ; i < 5 ; i++)
			{
				for(j = 0 ; j < 5 ; j++)
				{
					if(i == j)
					{
						printf("1 ");
					}
					else
					{
						printf("0 ");
					}
				}
				printf("\n");
			}
			printf("\n\n");
			break;
				case 3 :
			printf("\nG' = X\n\n");
			int q[5][5] = {{0,2,2,1,2},
				   {0,0,1,0,1},
				   {0,0,0,2,0},
				   {0,0,0,0,1},
				   {0,0,0,0,2}
				   };
			for(i = 0 ; i < 5 ; i++)
			{
				for(j = 0 ; j < 5 ; j++)
				{
					if(q[i][j] == 2)
					{
						q[i][j] = q[i][j] - 1;
					}
					else if(q[i][j] == 1)
					{
						q[i][j] = q[i][j] + 1;
					}
					else
					{
						q[i][j] = 0;
					}
				}
			}
			for(i = 0 ; i < 5 ; i++)
			{
				for(j = 0 ; j < 5 ; j++)
				{
					transpose[i][j] = q[j][i];
					printf("%d ",transpose[i][j]);
				}
				printf("\n");
			}
			printf("\n\n");
			break;
				case 4 :
			printf("\nH' = \n\n");
			for(i = 0 ; i < 5 ; i++)
			{
				for(j = 0 ; j < 5 ; j++)
				{
					transpose[i][j] = q[j][i];
					printf("%d ",transpose[i][j]);
				}
				printf("\n");
			}
			printf("\n\n");
			for(i = 0 ; i < 5 ; i++)
			{
				for(j = 0 ; j < 5 ; j++)
				{
					if(i == j)
					{
						printf("1 ");
					}
					else
					{
						printf("0 ");
					}
				}
				printf("\n");
			}
			printf("\n\n");
			break;
				case 5 :
				return 0;
		}
	}
}
