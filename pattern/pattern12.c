/* 

1  2   3   4 
5  6   7   8
9  10  11  12 
13 14  15  16

*/

#include<stdio.h>
void Pattern(int row,int col)
{
	int i = 0,j = 0,x = 1;
	for(i = 1 ; i <= row ; i++)
	{
		for(j = 1 ; j <= col ; j++)
		{
			printf("%d ",x);
			x++;
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
