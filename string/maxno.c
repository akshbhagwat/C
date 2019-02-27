 // Accept string and return such character which occurencde max. no. of time. No need to consider case of character.

#include<stdio.h>
int maxcount(char*);
int main()
{
	char a[100];
	char iRet;
	printf("enter string\n");
	scanf("%s",a);
	iRet=maxcount(a);
	printf("%c",iRet);
	return 0;
}
int maxcount(char *str)
{
	int i=0,imax=0,ipos=0;
	int arr[26]={0};
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			arr[*str-'A']++;
		}
		else if((*str>='a')&&(*str<='z'))
		{
			arr[*str-'a']++;
		}
		str++;
	}
	for(i=0;i<26;i++)
	{
		if(arr[i]>imax)
		{
			imax=arr[i];
			ipos=i;
		}
	}
	return ipos+'A';
}
