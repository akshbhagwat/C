#include<stdio.h>
main()
{
	unsigned long int a=1;
	begin:
	printf("%ul",a);
	a++;
	goto begin; 
}
