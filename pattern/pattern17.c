/* 

* * * *
* 0 0 *
* 0 0 *
* * * *

*/

#include<stdio.h>
void Pattern(int row,int col)
{
	int i = 0,j = 0;
	for(i = 1 ; i <= row ; i++)
	{
		for(j = 1 ; j <= col ; j++)
		{
			if((i > 1) && (i < col) && (j > 1) && (j < col))
			{
				printf("0 ");
			}
			else
			{
				printf("* ");
			}
		}
		printf("\n");
	}
}
int main()
{
	int row = 0,col = 0;
	printf("Enter row and col\n");
	scanf("%d%d",&row,&col);
	Pattern(row,col);
	return 0;
}
