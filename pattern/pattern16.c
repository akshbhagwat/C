/* 

a b c d
A B C D
a b c d
A B C D

*/

#include<stdio.h>
void Pattern(int row,int col)
{
	int i = 0,j = 0;
	char x = 'a',y = 'A';
	for(i = 1 ; i <= row ; i++)
	{
		for(j = 1 ; j <= col ; j++)
		{
			if(i % 2 == 0)
			{
				printf("%c ",y);
				y++;
			}
			else
			{
				printf("%c ",x);
				x++;
			}
		}
		x = 'a';
		y = 'A';
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
