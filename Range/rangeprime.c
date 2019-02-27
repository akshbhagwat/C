// Print all prime number from that range

#include<stdio.h>
typedef char BOOL;
#define TRUE 1
#define FALSE 0
BOOL CheckPrime(int);
void Range(int,int);
int main()
{
	int iFrom = 0,iTo = 0;
	BOOL bAns = FALSE;
	printf("Enter range\n");
	scanf("%d%d",&iFrom,&iTo);
	Range(iFrom,iTo);
	return 0;
}
void Range(int iStart,int iEnd)
{
	int i = 0;
	BOOL bRet = FALSE;
	if((iStart < 0) || (iEnd < 0) || (iEnd < iStart))
	{
		printf("INVALID\n");
	}
	for(i = iStart ; i <= iEnd ; i++)
	{
		bRet = CheckPrime(i);
		if(bRet == TRUE)
		{
			printf("%d is prime\n",i);
		}
	}
}
BOOL CheckPrime(int iValue)
{
	int i = 0;
	if(iValue <= 1)
	{
		return FALSE;
	}
	for(i = 2 ; i <= (iValue/2) ; i++)
	{
		if((iValue % i == 0))
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
