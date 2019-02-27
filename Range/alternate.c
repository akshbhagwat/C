// Print alternate number from that range

#include<stdio.h>
void Range(int,int);
int main()
{
	int iFrom = 0,iTo = 0;
	printf("Enter range\n");
	scanf("%d%d",&iFrom,&iTo);
	Range(iFrom,iTo);
	return 0;
}
void Range(int iFrom,int iTo)
{
	int i = 0;
	for(i = iFrom ; i <= iTo ; i++)
	{
		printf("%d ",i);
		i++;
	}
}
