// print pattern z to a
#include<stdio.h>
int main()
{
	//char str='Z';
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
//			printf("%c\t",((str+(j-i))));
printf("%c\t",'Z' - j+1);
		}
		printf("\n");
	}
return 0;
}
