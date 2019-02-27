// Accept N from user and return maximum number

#include<stdio.h>
#include<stdlib.h>
int Max(int *,int);
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
	iRet = Max(arr,iNo);
	printf("Max = %d\n",iRet);
	return 0;
}
int Max(int *ptr,int iSize)
{
	int i = 0,max = 0;
	for(i = 0 ; i < iSize ; i++)
	{
		if(ptr[i] > max)
		{
			max = ptr[i];
		}
	}
	return max;
}
