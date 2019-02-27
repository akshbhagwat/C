#include"header.h"

int main()
{
	int iValue1 = 0,iValue2 = 0;
	BOOL bRet = TRUE;
	printf("Enter two values\n");
	scanf("%d%d",&iValue1,&iValue2);
	bRet = CheckDivisible(iValue1,iValue2);
	if(bRet == TRUE)
	{
		printf("DIVISIBLE\n");
	}
	else
	{
		printf("NOT DIVISIBLE\n");
	}
	return 0;
}
