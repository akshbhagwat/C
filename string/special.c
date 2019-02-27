// Accept string and return special character

#include<stdio.h>
int Special(char*);
int main()
{
	char a[100];
	int iRet=0;
	printf("Enter string \n");
	scanf("%[^'\n']",a);
	iRet=Special(a);
	printf("Number of special character %d",iRet);
	return 0;
}
int Special(char *ptr)
{
	int count=0;
	while(*ptr!='\0')
	{
		if((*ptr=='$')||(*ptr=='#')||(*ptr=='.'))
		{
			count++;
		}
		ptr++;
	}
	return count;
}
