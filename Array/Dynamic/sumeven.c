// Accept N from user display addition of even number

#include<stdio.h>
#include<stdlib.h>
int SumArrEven(int *,int);
int main()
{
	int iNo = 0,iRet = 0,i = 0;
	int *Arr = NULL;
	printf("Enter size\n");
	scanf("%d",&iNo);
	if(iNo <= 0)
	{
		printf("INVALID INPUT\n");
		return -1;
	}
	Arr = (int*)malloc(iNo * sizeof(int));
	if(Arr == NULL)
	{
		printf("MEMORY NOT ALLOCATE\n");
		return -1;
	}
	
	printf("Enter %d elements\n",iNo);
	for(i = 0 ; i < iNo ; i++)
	{
		printf("Enter number : %d\n",i+1);
		scanf("%d",&Arr[i]);
	}
	iRet = SumArrEven(Arr,iNo);
	printf("\b\b = %d\n",iRet);
	free(Arr);
	return 0;
}
int SumArrEven(int *ptr,int iSize)
{
	int i = 0,iSum = 0;
	for(i = 0 ; i < iSize ; i++)
	{
		if(ptr[i] % 2 == 0)
		{
			printf("%d + ",ptr[i]);
			iSum += ptr[i];
		}
	}
	return iSum;
}
