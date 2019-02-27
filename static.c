#include<stdio.h>

void fun(int);

static int i = 5;

int main()
{
	while(i--) fun(i);
	printf("%d\n",i);
	return 0;
}

void fun(int i)
{
	static int i = 0;

	for(; i < 5 ; i++)
		printf("%d\n",i);
}
