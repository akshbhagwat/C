// Accept string and return first occurnce

#include<stdio.h>
int occurence(char*,char);
int main()
{
	char a[100],search;
	int iRet=0;
	printf("Enter string \n");
	scanf("%c",a);
	printf("Enter search\n");
	scanf("%s",&search);
	iRet=occurence(a,search);
	printf("first occurence %d",iRet);
	return 0;
}
int occurence(char *ptr,char search)
{
	int count=0;
	while(*ptr!='\0')
	{
		count++;
		if(*ptr==search)
		{
			break;
		}
		ptr++;
	}
	return count;
}
