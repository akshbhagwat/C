// Accept N and one value from user return index at which that value is occurs in array (first and last index, frequency)

#include<stdio.h>
#include<stdlib.h>
int SearchFirst(int *,int,int);
int SearchLast(int *,int,int);
int Frequency(int *,int,int);
int main()
{
	int i = 0,iSize = 0,iRet = 0,iSearch = 0;
	int *Arr = NULL;
	printf("Enter size\n");
	scanf("%d",&iSize);
	Arr = (int *)malloc(iSize * sizeof(int));
	if(Arr == NULL)
	{
		printf("MEMORY IS NOT ALLOCATED\n");
	}
	printf("Enter %d elements\n",iSize);
	for(i = 0 ; i < iSize ; i++)
	{
		printf("Enter number at %d\n",i+1);
		scanf("%d",&Arr[i]);
	}
	printf("Enter value to search\n");
	scanf("%d",&iSearch);
	iRet = SearchFirst(Arr,iSize,iSearch);
	if(iRet == -1)
	{
		printf("Search is not found\n");
	}
	else
	{
		printf("First search occure at index %d\n",iRet);
	}
	iRet = SearchLast(Arr,iSize,iSearch);
	if(iRet == 0)
	{
		printf("Search is not found\n");
	}
	else
	{
		printf("Last search occure at index %d\n",iRet);
	}
	iRet = Frequency(Arr,iSize,iSearch);
	if(iRet == -1)
	{
		printf("Search is not found\n");
	}
	else
	{
		printf("Frequency of number %d\n",iRet);
	}
	free(Arr);
	return 0;
}
int SearchFirst(int *ptr,int iLength,int iValue)
{
	int i = 0;
	for(i = 0 ; i < iLength ; i++)
	{
		if(ptr[i] == iValue)
		{
			return i;
		}
	}
	if(i == iLength)
	{
		return -1;
	}
}
int SearchLast(int *ptr,int iLength,int iValue)
{
	int i = 0;
	for(i = iLength-1 ; i >= 0 ; i--)
	{
		if(ptr[i] == iValue)
		{
			return i;
		}
	}
	if(i == iLength-1)
	{
		return -1;
	}
}
int Frequency(int *ptr,int iLength,int iValue)
{
	int i = 0,count = 0;
	for(i = 0 ; i < iLength ; i++)
	{
		if(ptr[i] == iValue)
		{
			count++;
		}
	}
		return count;
}
