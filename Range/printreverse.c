// Print all number in reverse order

#include<stdio.h>
void PrintRange(int,int);
int main()
{
	int iFrom = 0,iTo = 0;
	printf("Enter range\n");
	scanf("%d%d",&iFrom,&iTo);
	PrintRange(iFrom,iTo);
	return 0;
}
void PrintRange(int iStart,int iEnd)
{
	int i = 0;
	if((iStart <0) || (iEnd < 0) || (iEnd < iStart))
	{
		printf("INVALID\n");
	}
	else
	{
		for(i = iEnd ; i >= iStart ; i--)
		{
			printf("%d ",i);
		}
	}
}
