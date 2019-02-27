// Accept number from user and return reverse number

#include<stdio.h>
int Reverse(int);
int main()
{
	int iNo = 0,iRet = 0;
	printf("ENter number\n");
	scanf("%d",&iNo);
	iRet = Reverse(iNo);
	return 0;
}
int Reverse(int iValue)
{
	int iDigit = 0;
	while(iValue != 0)
	{
		iDigit = iValue % 10;
		printf("%d",iDigit);
		iValue = iValue / 10;
	}
	return iDigit;
}
