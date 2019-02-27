// Accept 10 number from user print all perfect number
#include<stdio.h>
int main()
{
	int arr[10] = {0};
	int i = 0,j = 0,iSum = 0;
	printf("Enter elements\n");
	for(i = 0 ; i < 10 ; i++)
	{
		printf("Enter number %d\n",i+1);
		scanf("%d",&arr[i]);
	}
	for(i = 0 ; i < 10 ; i++)
	{
		for(j = 1 ; j < arr[i] ; j++)
		{
			if((arr[i]%j==0) && (iSum <= arr[i]))
			{
				iSum += j;
			}
		}
		if(iSum == arr[i])
		{
			printf("%d is perfect number\n",arr[i]);
		}
		iSum = 0;
	}
	return 0;
}
