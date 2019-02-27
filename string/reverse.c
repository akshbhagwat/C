// Accept string from user print in reverse order

#include<stdio.h>
void Reverse(char *);
int main()
{
	char a[100];
	printf("Enter string\n");
	scanf("%[^'\n']",a);
	Reverse(a);
	return 0;
}
void Reverse(char *ptr)
{
	int count=0,i=0;
	while(*ptr!='\0')
	{
		count++;
		ptr++;
	}
	for(i=0;i<count;i++)
	{
		printf("%c",ptr[i]);
	}
}
