// Accept N from user and return largest and smallest number

#include<stdio.h>
#include<stdlib.h>
int Max(int *,int);
int Min(int *,int);
int main()
{
	int iNo = 0,i = 0,iRet = 0,iRef = 0,iAns = 0;
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
	iRef = Max(arr,iNo);
	iRet = Min(arr,iNo);
	iAns = iRef - iRet;
	printf("%d - %d = %d\n",iRef,iRet,iAns);
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
}int Min(int *ptr,int iSize)
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

