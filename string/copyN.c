// copy n number of character

#include<stdio.h>
void copy(char*,char*,int);
int main()
{
	char a[100],b[100];
	int size=0;
	printf("Enter string\n");
	scanf("%[^'\n']",a);
	printf("ENter size\n");
	scanf("%d",&size);
	printf("First string\t%s",a);
	copy(a,b,size);
	printf("\nSecond string\t%s\n",b);
	return 0;
}
void copy(char *p,char *q,int value)
{
	int i=0;
	for(i=0;i<value;i++)
	{
		q[i]=p[i];
	}
}
