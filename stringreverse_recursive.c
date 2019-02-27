#include<stdio.h>
#include<string.h>
void reverse(char[],int,int);
main()
{
	char a[20];
	int size;
	printf("Enter string------------>");
	scanf("%s",a);
	size=strlen(a);
	reverse(a,0,size-1);
	printf("Reverse strinng is------>%s\n",a);
}
void reverse(char a[],int index,int size)
{
	char temp;
	temp=a[index];
	a[index]=a[size-index];
	a[size-index]=temp;
	if(index==size/2)
	return;
	reverse(a,index+1,size);
}
