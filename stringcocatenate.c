// Concateante string without using strcat
#include<stdio.h>
main()
{
	char a[50],b[50];
	int i=0,j=0;
	printf("enter first string\n");
	gets(a);
	printf("enter second string\n");
	gets(b);
	while(a[i]!='\0')
	i++;
	while(b[j]!='\0')
	{
		a[i]=b[j];
		j++;
		i++;
	}
	a[i]='\0';
	printf("\nconcatenated string is : %s",a);
}
