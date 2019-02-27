// Accept number from user print smallest perfect number

#include<stdio.h>
int main()
{
	int iNo = 0,i = 0,iSum = 0,j = 0;
	printf("Enter number\n");
	scanf("%d",&iNo);
	for(i = 1 ; i <= iNo ; i++)
	{
		for(j = 1 ; j < i ; j++)
		{
			if((i % j == 0)&&(iSum <= i))
			{
				iSum += j;
			}
		}
		if(iSum == i)
		{
			printf("MINIMUM PERFECT NUMBER : %d\n",i);
		}
	iSum = 0;
	}
	return 0;
}
