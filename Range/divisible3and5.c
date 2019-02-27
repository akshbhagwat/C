// Print all number which are divisible by 3 and 5 from that range

#include<stdio.h>
void CheckDivisible(int);
void Range(int,int);
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
	int i = 0;
	if((iStart < 0) || (iEnd < 0) || (iEnd < iStart))
	{
		printf("INVALID\n");
	}
	for(i = iStart ; i <= iEnd ; i++)
	{
		CheckDivisible(i);
	}
}
void CheckDivisible(int iValue)
{
	if((iValue % 3 == 0) && (iValue % 5 == 0))
	{
		printf("%d is divisible by 3 and 5\n",iValue);
	}
}
