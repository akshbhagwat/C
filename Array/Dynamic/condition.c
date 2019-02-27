// Accept N from user and print all such number which are greater than 50 and less than 70

#include<stdio.h>
#include<stdlib.h>
void Condition(int *,int);
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
	Condition(Arr,iNo);
	return 0;
}
void Condition(int *ptr,int iSize)
{
	int i = 0;
	for(i = 0 ; i < iSize ; i++)
	{
		if((ptr[i] > 50) && (ptr[i] < 70))
		{
			printf("[%d] ",ptr[i]);
		}
	}
}
