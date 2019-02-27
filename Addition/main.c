// Program of Addition

#include"header.h"

int main()
{
	int iNo1 = 0,iNo2 = 0,iResult = 0;
	printf("Enter two number\n");
	scanf("%d %d",&iNo1,&iNo2);
	iResult = Addition(iNo1,iNo2);
	printf("%d",iResult);
	return 0;
}
