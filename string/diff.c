// Accept string and return difference between capital and small character

#include<stdio.h>
int small(char*);
int capital(char*);
int main()
{
	char a[100];
	int iRet1=0,iRet2=0;
	printf("Enter string \n");
	scanf("%[^'\n']",a);
	iRet1=small(a);
	iRet2=capital(a);
	printf("%d - %d =  %d\n",iRet1,iRet2,iRet1-iRet2);
	return 0;
}
int small(char *ptr)
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
int capital(char *ptr)
{
	int count=0;
	while(*ptr!='\0')
	{
		if((*ptr>='A')&&(*ptr<='Z'))
		{
			count++;
		}
		ptr++;
	}
	return count;
}
