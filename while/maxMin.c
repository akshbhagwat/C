// Accept number from user and return difference between maximum and minimum digit

#include<stdio.h>
int Max(int);
int Min(int);
int main()
{
	int iNo = 0,iMax = 0,iMin = 0;
	printf("Enter number\n");
	scanf("%d",&iNo);
	iMax = Max(iNo);
	iMin = Min(iNo);
	printf("%d - %d = %d\n",iMax,iMin,iMax-iMin);
	return 0;
}
int Max(int iValue)
{
	int iDigit = 0,iMax = 0;
	while((iValue != 0) && (iMax != 9))
	{
		iDigit = iValue % 10;
		if(iMax < iDigit)
		{
			iMax = iDigit;
		}
		iValue = iValue / 10;
	}
	return iMax;
}
int Min(int iValue)
{
	int iDigit = 0,iMin = 9;
	while((iValue != 0) && (iMin != 0))
	{
		iDigit = iValue % 10;
		if(iMin > iDigit)
		{
			iMin = iDigit;
		}
		iValue = iValue / 10;
	}
	return iMin;
}
