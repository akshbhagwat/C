// Accept 10 number from user print all prime number

#include<stdio.h>
int main()
{
	int arr[10] = {0};
	int i = 0,j = 0;
	printf("Enter elements\n");
	for(i = 0 ; i < 10 ; i++)
	{
		printf("Enter number %d\n",i+1);
		scanf("%d",&arr[i]);
	}
	for(i = 0 ; i < 10 ; i++)
	{
		for(j = 2 ; j < arr[i/2] ; j++)
		{
			if(arr[i]%j==0)
			{
				break;
			}
		}
		if(j == (arr[i/2]))
		{
			printf("[%d] ",arr[i]);
		}
	}
	return 0;
}
