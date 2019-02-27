#include<stdio.h>
int fact(int x)
{
	if(x==1)
	return 1;
	else
	return x*fact(x-1);
}
int main()
{
	int i=0,n=0,rslt=0;
	printf("Enter number\n");
	scanf("%d",&n);
	rslt=fact(n);
	printf("%d",rslt);
	return 0;
}
