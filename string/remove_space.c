// accept string from user and accept number of words

#include<stdio.h>
void copy(char*,char*);
int main()
{
	char a[100],b[100];
	int iRet=0;
	printf("Enter string\n");
	scanf("%[^'\n']",a);
	printf("string %s",a);
	copy(a,b);
	printf("result %s",b);
	return 0;
}
void copy(char *p,char *q)
{
	int count=0;
	if(p==NULL)
	{
		return;
	}
	while((*p!='\0'))
	{
		while(*p==' ')
		{
			p++;
		}
		if(*p=='\0')
		{
			break;
		}
		*q=*p;
		while((*p!=' ')&&(*p!='\0'))
		{
			p++;
		}
	}
}
