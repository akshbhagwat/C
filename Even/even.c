#include<stdio.h>
int main()
{
	int i = 1,n = 0;
	printf("Enter number\n");
	scanf("%d",&n);
	for(i = 1 ; i <= n ; i++)
	{
		if((i % 2) == 0)
		printf(" %d ",i);
	}
	return 0;
}
