/* 

a a a a
b b b b
c c c c
d d d d

*/

#include<stdio.h>
void Pattern(int row,int col)
{
	int i = 0,j = 0;
	char x = 'a';
	for(i = 1 ; i <= row ; i++)
	{
		for(j = 1 ; j <= col ; j++)
		{
			printf("%c ",x);
		}
		x++;
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
