#include<stdio.h>

int x;

int fun1()
{
	x = x + 10;
	return x;
}

int fun2()
{
	int x;
	x = 1;
	return x;
}

int fun3()
{
	x = x + 10;
	return x;
}

int main()
{
	x = 10;

	printf("%d\n",x);
	printf("%d\n",fun1());
	printf("%d\n",fun2());
	printf("%d\n",fun3());

	return 0;
}
