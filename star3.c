#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			if(j>=4-i && j<=i+2)
			printf("*");
			else
			printf(" ");
		/*}
		printf("\n");	
	}
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{*/
			 if(j>=i-2 && j<=8%i)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
