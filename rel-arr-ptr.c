// Relation between arrays and pointers
#include<stdio.h>
main()
{
	int A[]={10,15,20};
	printf("first element of array is %p\n",A);
	printf("second element of array is %p\n",A+1);
	printf("third element of array is %p\n",A+2);
}
