#include<stdio.h>

void fun()
{
	extern int y;
	y = y + 10;
}

int main()
{
	extern int y;
	y = 10;
	fun();
	return 0;
}

int y;
