// To check number is prime or not

#include<stdio.h>
typedef char BOOL;
#define TRUE 1
#define FALSE 0
BOOL Prime(int);
int main()
{
	int iNo = 0;
	BOOL bRet = TRUE;
	printf("ENter number\n");
	scanf("%d",&iNo);
	bRet = Prime(iNo);
	if(bRet == TRUE)
	{
		printf("NOT PRIME\n");
	}
	else
	{
		printf("PRIME\n");
	}
	return 0;
}
BOOL Prime(int iValue)
{
	int i = 0;
	if(iValue <= 1)
	{
		return FALSE;
	}
	for(i = 2 ; i <= (iValue/2) ; i++)
	{
		if(iValue % i == 0)
		{
			return TRUE;
		}
	}
	return FALSE;
}
