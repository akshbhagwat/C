// Program to find number if ODD or EVEN

#include"header.h"

int main()
{
	int iValue = 0;
	BOOL bRet = TRUE;
	printf("Enter number\n");
	scanf("%d",&iValue);
	bRet = OddEven(iValue);
	if(bRet == TRUE)
	{
		printf("EVEN\n");
	}
	else
	{
		printf("ODD\n");
	}
	return 0;
}
