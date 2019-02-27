// Print all perfect number from that range

#include<stdio.h>
typedef char BOOL;
#define TRUE 1
#define FALSE 0
void Range(int,int);
BOOL CheckPerfect(int);
int main()
{
	int iStart = 0,iEnd = 0;
	printf("Enter range\n");
	scanf("%d%d",&iStart,&iEnd);
	Range(iStart,iEnd);
	return 0;
}
void Range(int iStart,int iEnd)
{
	int i = 0;
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
			printf("%d is PERFECT\n",i);
		}
	}
}
BOOL CheckPerfect(int iValue)
{
	int i = 0,iSum = 0;
	for(i = 1 ; i <= (iValue/2)&&(iSum<=iValue); i++)
	{
		if(iValue % i == 0)
		{
			iSum = iSum + i;
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
