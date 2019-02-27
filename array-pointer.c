// Arrays and pointers relationship
#include<stdio.h>
main()
{
	int A[]={10,15,20};
	printf("Elements are %d %d %d \n",A[0],A[1],A[2]);
	printf("Elements are %d %d %d \n",*(A+0),*(A+1),*(A+2));
	printf("Elements are %d %d %d \n",0[A],1[A],2[A]);
}
