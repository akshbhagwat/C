// Accept single digit from user and print it into word


#include<stdio.h>
int main()
{
	char *arr[9] = {"one","two","three","four","five","six","seven","eight","nine"};
	int n = 0;
	printf("Enter number\n");
	scanf("%d",&n);
	printf("%s",arr[n-1]);
	return 0;
}
