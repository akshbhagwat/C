// copy contents of one string into another string

#include<stdio.h>
void copy(char*,char*);
int main()
{
	char a[100],b[100];
	printf("Enter string\n");
	scanf("%[^'\n']",a);
	copy(a,b);
	printf("First string\t%s",a);
	printf("\nSecond string\t%s\n",b);
	return 0;
}
void copy(char *p,char *q)
{
	int i=0;
	while(p[i]!='\0')
	{
		q[i]=p[i];
		i++;
	}
}
