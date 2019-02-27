// 1 2 3 4 1 2 3 4 1 2

#include<stdio.h>
void Pattern(int iNo)
{
	int i = 0,x = 1;
	for(i = 1 ; i <= iNo ; i++)
	{
		if(x == 5)
		{
			x = 1;
		}
		printf("%d ",x);
		x++;
	}
}
int main()
{
	int iNo = 0;
	printf("Enter number\n");
	scanf("%d",&iNo);
	Pattern(iNo);
	return 0;
}
