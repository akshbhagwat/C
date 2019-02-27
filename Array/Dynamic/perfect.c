// Accept N from user and print all perfect number

#include<stdio.h>
#include<stdlib.h>
void Perfect(int *,int);
int main()
{
	int iNo = 0,i = 0;
	int * Arr = NULL;
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
		printf("MEMORY IS NOT ALLOCATED\n");
		return -1;
	}
	printf("Enter %d elements\n",iNo);
	for(i = 0 ; i <  iNo ; i++)
	{
		printf("Enter number : %d\n",i+1);
		scanf("%d",&Arr[i]);
	}
	Perfect(Arr,iNo);
	return 0;
}
void Perfect(int *ptr,int iSize)
{
	int j = 0,i = 0,iSum = 0;
	for(i = 0 ; i < iSize ; i++)
	{
		for(j = 1 ; j <= ptr[i]/2 ; j++)
		{
			if(ptr[i] % j == 0)
			{
				iSum += j;
			}
		}
		if(iSum == ptr[i])
		{
			printf("[%d] ",ptr[i]);
		}
	iSum = 0;
	}
}
