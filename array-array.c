// Assignment of an array to anather array
#include<stdio.h>
main()
{
	int a[3],b[3]={10,20,30},i;
	printf("Assignment of an array to anather array\n");
	for(i=0;i<3;i++)	
	a[i]=b[i];
	printf("elements of array 'a' are\n");
	printf("%d %d %d",a[0],a[1],a[2]);
}
