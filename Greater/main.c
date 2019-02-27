#include"header.h"

int main()
{
	int iValue = 0;
	BOOL bRet = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	bRet = greater(iValue);
	if(bRet == -1)
	{
		printf("Number is EQUAL\n");
	}
	else if(bRet == TRUE)
	{
		printf("%d is GREATER than 100\n",iValue);
	}
	else
	{
		printf("%d is LESS than 100\n",iValue);
	}
	return 0;
}
