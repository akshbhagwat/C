// To find power of given number

#include<stdio.h>
long int Power(int,int);
int main()
{
	int x = 0,y = 0;
	long int lRslt = 0;
	printf("Enter x and y\n");
	scanf("%d%d",&x,&y);
	lRslt = Power(x,y);
	printf("%d",lRslt);
	return 0;
}
long int Power(int a,int b)
{
	int i = 0;
	long int lMul = 1;
	if((a <= 0) || (b < 0))
	{
		return -1;
	}
	for(i = 1 ; i <= b ; i++)
	{
		lMul *= a;
	}
	return lMul;
}
