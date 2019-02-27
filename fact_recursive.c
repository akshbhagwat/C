#include<stdio.h>
int fact(int n)
{
	if(n==1)
	return 1;
	else
	return n*fact(n-1);
}
main()
{
	int n,factorial;
	printf("Enter number\n");
	scanf("%d",&n);
	factorial=fact(n);
	printf("Factorial of %d is %d\n",n,factorial);
}
