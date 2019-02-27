// Accept 10 number from user print all number which are divisible by 5 and greater than 50

#include<stdio.h>
int main()
{
	int arr[10] = {0};
	int i = 0;
	printf("Enter elements\n");
	for(i = 0 ; i < 10 ; i++)
	{
		printf("Enter number %d\n",i+1);
		scanf("%d",&arr[i]);
	}
	for(i = 0 ; i < 10 ; i++)
	{
		if((arr[i] % 5 == 0) && (arr[i] > 50))
		{
			printf("[%d] ",arr[i]);
		}
	}
	return 0;
}
