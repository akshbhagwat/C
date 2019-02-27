// Accept N number from user and return largest prime number

#include<stdio.h>
int main()
{
	int iNum = 0,i = 0,j = 0;
	printf("Enter number\n");
	scanf("%d",&iNum);
	for(i = iNum ; i > 0 ; i--)
	{
		for(j = 2 ; j <= iNum ; j++)
		{
			if(i % j == 0)
			{
				break;
			}
		}
		if(i == j)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
