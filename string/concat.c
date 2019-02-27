// concat second string at he end of first string with n number of parameter
#include<stdio.h>
void concat(char*,char*,int);
int main()
{
	char a[100],b[100];
	int n=0;
	printf("Enter string\n");
	scanf("%s",a);
	printf("Enter string\n");
	scanf("%s",b);
	printf("Enter number\n");
	scanf("%d",&n);
	concat(a,b,n);
	printf("%s",a);
	return 0;
}
void concat(char *src,char *dest,int icnt)
{
	if((src==NULL)||(src==NULL)||(icnt<=0))
	{
		return ;
	}
	while(*src!='\0')
	{
		src++;
	}
	while((*dest!='\0')&&(icnt!=0))
	{
		*src=*dest;
		src++;
		dest++;
		icnt--;
	}
	*src='\0';
}
