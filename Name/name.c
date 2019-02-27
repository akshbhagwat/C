// Accept name from user and print them

#include<stdio.h>
int main()
{
	char name[20];
	printf("Enter name\n");
	scanf("%[^\n]",name);
	printf("%s\n",name);
	return 0;
}
