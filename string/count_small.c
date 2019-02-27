// Accept string and return small character

#include<stdio.h>
int Small(char*);
int main()
{
	char a[100];
	int iRet=0;
	printf("Enter string \n");
	scanf("%[^'\n']",a);
	iRet=Small(a);
	printf("Number of small character %d",iRet);
	return 0;
}
int Small(char *ptr)
{
	int count=0;
	while(*ptr!='\0')
	{
		if((*ptr>='a')&&(*ptr<='z'))
		{
			count++;
		}
		ptr++;
	}
	return count;
}
