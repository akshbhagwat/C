// Accept N from user and accept one number from user and search that number is present in our array or not

#include<stdio.h>
#include<stdlib.h>
void Search(int *,int,int);
int main()
{
	int iNo = 0,i = 0,iValue = 0;
	int * Arr = NULL;
	printf("Enter Search number\n");
	scanf("%d",&iValue);
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
	Search(Arr,iNo,iValue);
	return 0;
}
void Search(int *ptr,int iSize,int iValue1)
{
	int i = 0;
	for(i = 0 ; i < iSize ; i++)
	{
		if(ptr[i] == iValue1)
		{
			printf("[%d] ",ptr[i]);
		}
}}
