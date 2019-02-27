// Accept two number from user and print largest common factor 

#include<stdio.h>
int main()
{
	int iNo1 = 0,iNo2 = 0,i = 0,j = 0;
	printf("Enter two number\n");
	scanf("%d%d",&iNo1,&iNo2);
	for(i = (iNo1 * iNo2) ; i > 0 ; i--)
	{
		if((iNo1 % i == 0)&&(iNo2 % i == 0))
		{
			printf("GREATEST COMMON FACTOR : %d\n",i);
			break;
		}
	}
	for(j = 2 ; j < (iNo1*iNo2) ; j++)
	{
		if((iNo1 * iNo2) % j == 0)
		{
			printf("SMALLEST COMMON FACTOR : %d\n",j);
			break;
		}
	}
	printf("ADDITION = %d\n",i+j);
	return 0;
}
