// fibonacci 
#include<stdio.h>
main()
{
	int a=0,b=1,c,i,n;
	printf("enter number");
	scanf("%d",&n);
	printf("SErise is : \n");
	printf("%d\t %d\t",a,b);
	for(i=0;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\t",c);
	}
}
