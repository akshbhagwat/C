// Find a majority element in an array of size 'n'

#include<stdio.h>
#include<stdlib.h>

void majority(int *ptr,int size)
{
	int i = 0,max = 0,count = 1,pos = 0;
	
	
	
	
	
	
	for(i = 0 ; i < size - 1 ; i++)
	{
		if(ptr[i] == ptr[i + 1])
		{
			count++;
			
			if(count > max)
			{
				max = count;
				pos = i;
			}
		}
	}	
	
	if(max > (size / 2))
	{
		printf("\nELEMENT = %d\tCOUNT = %d\n",ptr[pos],max);
	}
	else
	{
		printf("\nNO MAJORITY ELEMENT\n");
	}
}

void sort(int *arr,int size)
{
	int i = 0,j = 0;
	
	for(i = 0 ; i < size - 1 ; i++)
	{
		for(j = i + 1 ; j < size ; j++)
		{
			if(arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	int *ptr = NULL;
	int i = 0,size = 0;
	
	printf("\nEnter size\n");
	scanf("%d",&size);
	
	ptr = (int*)malloc(size * sizeof(int));
	if(ptr == NULL)
	{
		printf("\nMEMORY NOT ALLOCATED\n");
	}
	
	printf("\nEnter %d elements\n",size);
	for(i = 0 ; i < size ; i++)
	{
		scanf("%d",&ptr[i]);
	}

	sort(ptr,size);
		
	majority(ptr,size);
	
	return 0;
}
