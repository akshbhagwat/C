// accept string from user and accept number of words

#include<stdio.h>
int countWord(char*);
int main()
{
	char a[100];
	int iRet=0;
	printf("Enter string\n");
	scanf("%[^'\n']",a);
	iRet = countWord(a);
	printf("Number of words %d\n",iRet);
	return 0;
}
int countWord(char *ptr)
{
	int count=0;
	if(ptr==NULL)
	{
		return -1;
	}
	while((*ptr!='\0'))
	{
		while(*ptr==' ')
		{
			ptr++;
		}
		if(*ptr=='\0')
		{
			break;
		}
		count++;
		while((*ptr!=' ')&&(*ptr!='\0'))
		{
			ptr++;
		}
	}
	return count;
}
