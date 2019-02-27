#include<stdio.h>
#include<stdlib.h>
void one_dim()
{
	int a = 0;
	int i = 0;
	int *p = NULL;
	printf("Enter 1 dim\n");
	scanf("%d",&a);
	p = (int*)malloc(a * sizeof(int));
	if(p == NULL)
	printf("Memory is not allocated\n");
	printf("Enter elemts\n");
	for(i = 0 ; i < a ; i++)
	scanf("%d",&p[i]);
	printf("Elemts are\n");
	for(i = 0 ; i < a ; i++)
	printf("%d",p[i]);
	free(p);
}
void two_dim()
{
	int a = 0,b = 0;
	int i = 0,j = 0;
	int **p = NULL;
	printf("Enter 2 dim\n");
	scanf("%d %d",&a,&b);
	p = (int**)malloc(a * sizeof(int*));
	if(p == NULL)
	printf("Memory is not allocated\n");
	for(i = 0 ; i < a ; i++)
	{
		p[i] = (int*)malloc(b * sizeof(int));
	}
	printf("Enter elemts\n");
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < b ; j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	printf("Elemts are\n");
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < b ; j++)
		{
			printf("%d",p[i][j]);
		}
	}
	for(i = 0 ; i < a ; i++)
	{
		free(p[i]);
	}	
	free(p);
}
void three_dim()
{
	int a = 0,b = 0,c = 0;
	int i = 0,j = 0,k = 0;
	int ***p = NULL;
	printf("Enter 3 dim\n");
	scanf("%d %d %d",&a,&b,&c);
	p = (int***)malloc(a * sizeof(int**));
	if(p == NULL)
	printf("Memory is not allocated\n");
	for(i = 0 ; i < a ; i++)
	{
		p[i] = (int**)malloc(b * sizeof(int*));
	}
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < b ; j++)
		{
				p[i][j] = (int*)malloc(c * sizeof(int));
		}
	}
	printf("Enter elements\n");
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < b ; j++)
		{
			for(k = 0 ; k < c ; k++)
			{
					scanf("%d",&p[i][j][k]);
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
					printf("%d ",p[i][j][k]);
			}
		}
	}
	for(i = 0 ; i < a ; i++)
	{
		free(p[i]);
	}
	free(p);
}
void four_dim()
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
}
void five_dim()
{
	int a = 0,b = 0,c = 0,d = 0,e = 0;
	int i = 0,j = 0,k = 0,l = 0,m = 0;
	int *****p = NULL;
	printf("Enter 5 dim\n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	p = (int*****)malloc(a * sizeof(int****));
	if(p == NULL)
	printf("Memory is not allocated\n");
	for(i = 0 ; i < a ; i++)
	{
		p[i] = (int****)malloc(b * sizeof(int***));
	}
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < b ; j++)
		{
			p[i][j] = (int***)malloc(c * sizeof(int**));
		}
	}
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < b ; j++)
		{
			for(k = 0 ; k < c ; k++)
			{
				p[i][j][k] = (int**)malloc(d * sizeof(int*));
			}
		}
	}
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < b ; j++)
		{
			for(k = 0 ; k < c ; k++)
			{
				for(l = 0 ; l < d ; l++)
				{
					p[i][j][k][l] = (int*)malloc(d * sizeof(int));
				}
			}
	}	}
	printf("Enter elements\n");
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < b ; j++)
		{
			for(k = 0 ; k < c ; k++)
			{
				for(l = 0 ; l < d ; l++)
				{
					for(m = 0 ; m < e ; m++)
					{
						scanf("%d",&p[i][j][k][l][m]);
					}
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
					for(m = 0 ; m < e ; m++)
					{
						printf("%d ",p[i][j][k][l][m]);
					}
				}
			}
		}
	}
	for(i = 0 ; i < a ; i++)
	{
		free(p[i]);
	}
	free(p);
}
void six_dim()
{
	int a = 0,b = 0,c = 0,d = 0,e = 0,f = 0;
	int i = 0,j = 0,k = 0,l = 0,m = 0,n = 0;
	int ******p = NULL;
	printf("Enter 6 dim\n");
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	p = (int******)malloc(a * sizeof(int*****));
	if(p == NULL)
	printf("Memory is not allocated\n");
	for(i = 0 ; i < a ; i++)
	{
		p[i] = (int*****)malloc(b * sizeof(int****));
	}
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < b ; j++)
		{
			p[i][j] = (int****)malloc(c * sizeof(int***));
		}
	}
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < b ; j++)
		{
			for(k = 0 ; k < c ; k++)
			{
				p[i][j][k] = (int***)malloc(d * sizeof(int**));
			}
		}
	}
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < b ; j++)
		{
			for(k = 0 ; k < c ; k++)
			{
				for(l = 0 ; l < d ; l++)
				{
					p[i][j][k][l] = (int**)malloc(d * sizeof(int*));
				}
			}
		}	
	}
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < b ; j++)
		{
			for(k = 0 ; k < c ; k++)
			{
				for(l = 0 ; l < d ; l++)
				{
					for(m = 0 ; m < e ; m++)
					p[i][j][k][l][m] = (int*)malloc(d * sizeof(int));
				}
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
					for(m = 0 ; m < e ; m++)
					{
						for(n = 0 ; n < f ; n++)
						{
							scanf("%d",&p[i][j][k][l][m][n]);
						}
					}
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
					for(m = 0 ; m < e ; m++)
					{
						for(n = 0 ; n < f ; n++)
						{
							printf("%d ",p[i][j][k][l][m][n]);
						}
					}
				}
			}
		}
	}
	for(i = 0 ; i < a ; i++)
	{
		free(p[i]);
	}
	free(p);
}
void seven_dim()
{
	int a = 0,b = 0,c = 0,d = 0,e = 0,f = 0,g = 0;
	int i = 0,j = 0,k = 0,l = 0,m = 0,n = 0,o = 0;
	int *******p = NULL;
	printf("Enter 7 dim\n");
	scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g);
	p = (int*******)malloc(a * sizeof(int******));
	if(p == NULL)
	printf("Memory is not allocated\n");
	for(i = 0 ; i < a ; i++)
	{
		p[i] = (int******)malloc(b * sizeof(int*****));
	}
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < b ; j++)
		{
			p[i][j] = (int*****)malloc(c * sizeof(int****));
		}
	}
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < b ; j++)
		{
			for(k = 0 ; k < c ; k++)
			{
				p[i][j][k] = (int****)malloc(d * sizeof(int***));
			}
		}
	}
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < b ; j++)
		{
			for(k = 0 ; k < c ; k++)
			{
				for(l = 0 ; l < d ; l++)
				{
					p[i][j][k][l] = (int***)malloc(d * sizeof(int**));
				}
			}
		}	
	}
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < b ; j++)
		{
			for(k = 0 ; k < c ; k++)
			{
				for(l = 0 ; l < d ; l++)
				{
					for(m = 0 ; m < e ; m++)
					{
						p[i][j][k][l][m] = (int**)malloc(d * sizeof(int*));
					}
				}
			}
		}	
	}
	for(i = 0 ; i < a ; i++)
	{
		for(j = 0 ; j < b ; j++)
		{
			for(k = 0 ; k < c ; k++)
			{
				for(l = 0 ; l < d ; l++)
				{
					for(m = 0 ; m < e ; m++)
					{
						for(n = 0 ; n <f ; n++)
						{
							p[i][j][k][l][m][n] = (int*)malloc(d * sizeof(int));
						}
					}
				}
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
					for(m = 0 ; m < e ; m++)
					{
						for(n = 0 ; n < f ; n++)
						{
							for(o = 0 ; o < g ; o++)
							{
								scanf("%d",&p[i][j][k][l][m][n][o]);
							}
						}
					}
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
					for(m = 0 ; m < e ; m++)
					{
						for(n = 0 ; n < f ; n++)
						{
							for(o = 0 ; o < g ; o++)
							{
								printf("%d ",p[i][j][k][l][m][n][o]);
							}
						}
					}
				}
			}
		}
	}
	for(i = 0 ; i < a ; i++)
	{
		free(p[i]);
	}
	free(p);

}
int main()
{	
	char ch;
	printf("1.ONE Dimension\n2.TWO Dimension\n3.THREE Dimension\n4.FOUR Dimension\n5.FIVE Dimension\n6.SIX Dimension\n7.SEVEN Dimension\n");
	printf("Enter choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
			case 1:
		one_dim();	break;
			case 2:
		two_dim();	break;
			case 3:
		three_dim();	break;
			case 4:
		four_dim();	break;
			case 5:
		five_dim();	break;
			case 6:
		six_dim();	break;
			case 7:
		seven_dim();	break;
			default:
		printf("INVALID CHOICE");
	}

	return 0;
}
