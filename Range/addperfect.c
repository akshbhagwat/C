// Return addition of perfect number from that range

#include<stdio.h>
typedef char BOOL;
#define TRUE 1
#define FALSE 0
void Range(int,int);
BOOL CheckPerfect(int);
int main()
{
	int iFrom = 0,iTo = 0;
	printf("Enter range\n");
	scanf("%d%d",&iFrom,&iTo);
	Range(iFrom,iTo);
	return 0;
}
void Range(int iStart,int iEnd)
{
	int i = 0,iSum = 0;
	BOOL bRet = FALSE;
	if((iStart < 0) || (iEnd < 0) || (iStart > iEnd))
	{
		printf("INVALID\n");
	}
	for(i = iStart ; i <= iEnd ; i++)
	{
		bRet = CheckPerfect(i);
		if(bRet == TRUE)
		{
			printf("%d + ",i);
			iSum += i;
		}
	}
	printf("\b\b = %d",iSum);
}
BOOL CheckPerfect(int iValue)
{
	int i = 0,iSum = 0;
	if(iValue < 1)
	{
		return FALSE;
	}
	for(i = 1 ; i <= (iValue/2)&&(iSum<=iValue) ; i++)
	{
		if(iValue % i == 0)
		{
			iSum += i;
		}
	}
	if(iSum == iValue)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
