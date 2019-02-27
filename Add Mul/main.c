#include"header.h"

int main()
{
	int iValue1 = 0,iValue2 = 0,iValue3 = 0,iRslt = 0;
	printf("Enter three numbers\n");
	scanf("%d %d %d",&iValue1,&iValue2,&iValue3);
	iRslt = Addition(iValue1,iValue2,iValue3);
	printf("%d + %d + %d = %d\n",iValue1,iValue2,iValue3,iRslt);
	iRslt = Multiplication(iValue1,iValue2,iValue3);
	printf("%d x %d x %d = %d\n",iValue1,iValue2,iValue3,iRslt);
	return 0;
}
