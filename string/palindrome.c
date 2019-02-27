#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL Palindrome(char *str)
{
	char *temp = str;
	while(*temp != '\0')
	{
		temp++;
	}
	temp--;
	while(str < temp)
	{
		if(*str != *temp)
		{
			break;
		}
		str++;
		temp--;
	}
	if(str < temp)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}
int main()
{
	char arr[100];
	BOOL bret;
	printf("Enter string\n");
	scanf("%[^'\n']",&arr);
	bret = Palindrome(arr);
	if(bret == TRUE)
	{
		printf("PALINDROME\n");
	}
	else
	{
		printf("NOT PALINDROME\n");
	}
	return 0;
}
