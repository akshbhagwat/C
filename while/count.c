// Accept number from user print such digit of number which occure maximum time

#include<stdio.h>
void NumberCount(int);
int main()
{
	int iNo = 0;
	printf("Enter number\n");
	scanf("%d",&iNo);
	NumberCount(iNo);
	return 0;
}
void NumberCount(int iValue)
{
	int iDigit = 0,iCount = 0,iMax = 0;
	while(iValue != 0)
	{
		iDigit = iDigit % 10;
}
