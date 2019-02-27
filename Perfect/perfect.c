// Accept number from user and check number is perfect or not

#include<stdio.h>
typedef char BOOL;
#define TRUE 1
#define FALSE 0
BOOL Perfect(int);
int main()
{
	int iNo = 0,bRet = TRUE;
	printf("Enter number\n");
	scanf("%d",&iNo);
	bRet = Perfect(iNo);
	if(bRet == TRUE)
	{
		printf("PERFECT\n");
	}
	else
	{
		printf("NOT PERFECT\n");
	}
	return 0;
}
BOOL Perfect(int iValue)
{
	int icnt = 0,iSum = 0;
	if(iValue<0)
	{
		return FALSE;
	}
	for(icnt = 1 ; icnt <= (iValue/2) ; icnt++)
	{
		if((iValue % icnt == 0) && (iSum <= iValue))
		{
			iSum += icnt;
		}
	}
	if(iValue == iSum)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
