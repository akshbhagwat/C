#include"header.h"

int main()
{
	int iValue1 = 0,iValue2 = 0;
	BOOL bRet = 0;
	printf("Enter two number\n");
	scanf("%d%d",&iValue1,&iValue2);
	bRet = Equal(iValue1,iValue2);
	if(bRet == TRUE)
	{
		printf("%d and %d is EQUAL\n",iValue1,iValue2);
	}
	else
	{
		printf("%d and %d is NOT EQUAL\n",iValue1,iValue2);
	}
	return 0;
}
