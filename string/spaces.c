// Accept string and return count of white spaces

#include<stdio.h>
int spaces(char*);
int main()
{
	char a[100];
	int iRet=0;
	printf("Enter string \n");
	scanf("%[^'\n']",a);
	iRet=spaces(a);
	printf("Number of white spaces %d",iRet);
	return 0;
}
int spaces(char *ptr)
{
	int count=0;
	while(*ptr!='\0')
	{
		if(*ptr==' ')
		{
			count++;
		}
		ptr++;
	}
	return count;
}
