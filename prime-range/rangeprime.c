// Accept range from user and display all prime number in that range

#include<stdio.h>
typedef char BOOL;
#define TRUE 1
#define FALSE 0
BOOL CheckPrime(int);
void RangePrime(int,int);
BOOL CheckPrime(int iValue)
{
	int i = 0;
	if(iValue <= 1)
	{
		return FALSE;
	}
	for(i = 2 ; i <= iValue/2 ; i++)
	{
		if(iValue % i == 0)
		{
			break;
		}
	}
	if(i == (iValue/2)+1)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	int iFrom = 0,iTo = 0;
	printf("ENter Range\n");
	scanf("%d%d",&iFrom,&iTo);
	RangePrime(iFrom,iTo);
	return 0;
}
void RangePrime(int iStart,int iEnd)
{
	int i = 0;
	BOOL bRet = FALSE;
	for(i = iStart ; i <= iEnd ; i++)
	{
		bRet = CheckPrime(i);
		if(bRet == TRUE)
		{
			printf("%d is PRIME\n",i);
		}
	}
}
