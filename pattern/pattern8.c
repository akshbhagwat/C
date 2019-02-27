/* 1 1 1 1
   2 2 2 2
   3 3 3 3 
   4 4 4 4
*/

#include<stdio.h>
void Pattern(int row,int col)
{
	int i = 0,x = 1,j = 0;
	for(i = 1 ; i <= row ; i++)
	{
		for(j = 1 ; j <= col ; j++)
		{
			printf("%d ",i);
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
