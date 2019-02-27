// Return addition of even number from that range

#include<stdio.h>
typedef char BOOL;
#define TRUE 1
#define FALSE 0
void Range(int,int);
BOOL CheckEven(int);
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
	for(i = iStart ; i <= iEnd ; i++)
	{
		bRet = CheckEven(i);
		if(bRet == TRUE)
		{
			printf("%d + ",i);
			iSum += i;
		}
	}
	printf("\b\b = %d ",iSum);
}
BOOL CheckEven(int iValue)
{
	if(iValue <= 1)
	{
		return FALSE;
	}
	else if(iValue % 2 == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
