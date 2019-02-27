#include"header.h"

int main()
{
	int iValue1 = 0,iValue2 = 0,iRet = 0;
	printf("Enter two number\n");
	scanf("%d%d",&iValue1,&iValue2);
	iRet = difference(iValue1,iValue2);
	printf("%d - %d = %d\n",iValue1,iValue2,iRet);
	return 0;
}
