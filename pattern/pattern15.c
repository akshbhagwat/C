/* 

10 20 30 40
*  *  *  *
10 20 30 40
*  *  *  *

*/

#include<stdio.h>
void Pattern(int row,int col)
{
	int i = 0,j = 0,x = 0;
	for(i = 1 ; i <= row ; i++)
	{
		for(j = 1 ; j <= col ; j++)
		{
			if(i % 2 == 0)
			{
				printf(" * ");
			}
			else
			{
				x = x + 10;
				printf(" %d ",x);
			}
		}
		x = 0;
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
