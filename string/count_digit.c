// Accept string and return count of digit

#include<stdio.h>
int Digit(char*);
int main()
{
	char a[100];
	int iRet=0;
	printf("Enter string \n");
	scanf("%[^'\n']",a);
	iRet=Digit(a);
	printf("Number of digit %d",iRet);
	return 0;
}
int Digit(char *ptr)
{
	int count=0;
	while(*ptr!='\0')
	{
		if((*ptr>='0')&&(*ptr<='9'))
		{
			count++;
		}
		ptr++;
	}
	return count;
}
