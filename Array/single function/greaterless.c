// Accept 10 number from user print all number which are greater than 20 and less than 40

#include<stdio.h>
int main()
{
	int arr[10] = {0};
	int i = 0,iSum = 0;
	printf("Enter elements\n");
	for(i = 0 ; i < 10 ; i++)
	{
		printf("Enter number %d\n",i+1);
		scanf("%d",&arr[i]);
	}
	for(i = 0 ; i < 10 ; i++)
	{
		if((arr[i] > 20) && (arr[i] < 40))
		{
			printf("[%d] ",arr[i]);
		}
	}
	return 0;
}
