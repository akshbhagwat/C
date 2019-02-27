#include<stdio.h>
main()
{
	char a[20];
	int i=0,capital=0,small=0;
	printf("Enter string\n");
	scanf("%s",&a);
	while(a[i]!='\0')
	{
		if(a[i]>=97 && a[i]<=122)
		{
			small++;
		}
		else if(a[i]>=65 && a[i]<=90)
		{
			capital++;
		}
	i++;
	}
	printf("%d %d",capital,small);
}
