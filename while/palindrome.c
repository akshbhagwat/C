// Accept number from user and check whether number is palindeome or Not

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef char BOOL;
BOOL Palindrome(int);
int main()
{
	int iNo = 0;
	BOOL bRet = 1;
	printf("ENter number\n");
	scanf("%d",&iNo);
	bRet = Palindrome(iNo);
	if(bRet == 1)
	{
		printf("PALINDROME\n");
	}
	else
	{
		printf("NOT PALINDROME\n");
	}
	return 0;
}
BOOL Palindrome(int iValue)
{
	int x = iValue,iRev=0;
	int iDigit = 0;
	while(iValue != 0)
	{
		iDigit = iValue % 10;
  		iRev = iRev * 10 + iDigit;
		iValue = iValue / 10;
	}
	if(iRev == x)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
