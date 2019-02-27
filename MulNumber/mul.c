#include<stdio.h>
int main()
{
	int i = 0,m = 0,n = 0;
	printf("Enter m\n");
	scanf("%d",&m);
	printf("Enter n\n");
	scanf("%d",&n);
	for(i = 1 ; i <= n ; i++)
	{
		printf(" %d ",m*i);
	}
	return 0;
}
