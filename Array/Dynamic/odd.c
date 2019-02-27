// Accept N from user and display odd number

#include<stdio.h>
#include<stdlib.h>
void Odd(int *,int);
int main()
{
	int iNo = 0,i = 0;
	int *Arr = NULL;
	printf("Enter Size\n");
	scanf("%d",&iNo);
	if(iNo <= 0)
	{
		printf("INVALID INPUT\n");
		return -1;
	}
	Arr = (int *)malloc(iNo * sizeof(int));
	if(Arr == NULL)
	{
		printf("MEMORY IS NOT ALLOCATED\n");
	}
	printf("Enter %d elements\n",iNo);
	for(i = 0 ; i < iNo ; i++)
	{
		printf("Enter number : %d\n",i+1);
		scanf("%d",&Arr[i]);
	}
	Odd(Arr,iNo);
	return 0;
}
void Odd(int * ptr,int iSize)
{
	int i = 0;
	for(i = 0 ; i < iSize ; i++)
	{
		if(ptr[i] % 2 == 1)
		{
			printf("[%d] ",ptr[i]);
		}
	}
}
