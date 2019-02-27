// Accept N from user and return minimum number

#include<stdio.h>
#include<stdlib.h>
int Min(int *,int);
int main()
{
	int iNo = 0,i = 0,iRet = 0;
	int *arr = NULL;
	printf("Enter number\n");
	scanf("%d",&iNo);
	arr = (int *)malloc(iNo * sizeof(int));
	if(arr == NULL)
	{
		printf("MEMORY IS NOT ALLOCATED\n");
	}
	printf("Enter %d elements\n",iNo);
	for(i = 0 ; i < iNo ; i++)
	{
		printf("Enter number : %d\n",i+1);
		scanf("%d",&arr[i]);
	}
	iRet = Min(arr,iNo);
	printf("Min = %d",iRet);
	return 0;
}
int Min(int *ptr,int iSize)
{
	int i = 0,min = 0;
	min = ptr[i];
	for(i = 0 ; i < iSize ; i++)
	{
		if(ptr[i] < min)
		{
			min = ptr[i];
		}
	}
	return min;
}
