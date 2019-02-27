// Accept 10 number from user return addition of all even number

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
		if(arr[i] % 2 == 0)
		{
			printf("%d + ",arr[i]);
			iSum += arr[i];
		}
	}
	printf("\b\b = %d\n",iSum);
	return 0;
}
