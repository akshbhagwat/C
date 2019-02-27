#include<stdio.h>
int main()
{
	int i = 1,n = 0,a[100],min = 0;
	printf("Enter number\n");
	scanf("%d",&n);
	printf("Enter elements\n");
	for(i = 1 ; i <= n ; i++)
	scanf("%d",&a[i]);
	for(i = 1 ; i <= n ;i++)
	{
		if(a[i] < a[i+1])
		min = a[i];
		a[i] = a[i+1];
		a[i+1] = min;
	}
	printf("%d",min);
	return 0;
}
