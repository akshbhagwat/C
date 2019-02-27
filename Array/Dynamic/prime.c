// Accept N from user and print all prime number

#include<stdio.h>
#include<stdlib.h>
void Prime(int *,int);
int main()
{
	int i = 0,iNo = 0;
	int *Arr = NULL;
	printf("Enter size\n");
	scanf("%d",&iNo);
	if(iNo <= 0)
	{
		printf("INVALID INPUT\n");
	}
	Arr = (int *)malloc(iNo * sizeof(int));
	if(Arr == NULL)
	{
		printf("MEMORY IS NOT ALLOCATED\n");
	}
	printf("Enter %d elements",iNo);
	for(i = 0 ; i < iNo ; i++)
	{
		printf("ENter Number : %d\n",i+1);
		scanf("%d",&Arr[i]);
	}
	Prime(Arr,iNo);
	return 0;
}
void Prime(int *ptr,int iSize)
{
	int i = 0,j = 0;
	for(i = 0 ; i < iSize ; i++)
	{
		for(j = 2 ; j < ptr[i] ; j++)
		{
			if(ptr[i] % j == 0)
			{
				break;
			}
		}
		if(j == ptr[i])
		{
			printf("[%d] ",ptr[i]);
		}
	}
}
