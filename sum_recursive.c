#include<stdio.h>
int sum(int);
main()
{
	int n,result;
	printf("Enter number\n");
	scanf("%d",&n);
	result=sum(n);
	printf("sum of %d is %d\n",n,result);
}
int sum(int n)
{
	if(n!=0)
	return n + sum(n-1);
	else
	return n;
}

