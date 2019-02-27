#include<stdio.h>
#include<stdlib.h>

void pair(int *arr,int size,int sum)
{
	int start = 0,end = size - 1;
	
	while(start < end)
	{
		if((arr[start] + arr[end]) == sum)
		{
			break;
		}
		else if((arr[start] + arr[end]) > sum)
		{
			end--;
		}
		else if((arr[start] + arr[end]) < sum)
		{
			start++;
		}
	}

	if(start < end)
		printf("\n%d + %d = %d\n",arr[start],arr[end],sum);
		
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
	int *arr = NULL;
	int size = 0,i = 0,sum = 0;
	
	printf("\nEnter size\n");
	scanf("%d",&size);
	
	printf("\nEnter sum\n");
	scanf("%d",&sum);

	arr = (int*)malloc(size * sizeof(int));
	if(arr == NULL)
	{
		printf("\nMEMORY NOT ALLOCATED\n");
		return 0;
	}
	
	printf("\nEnter %d elements\n",size);
	for(i = 0 ; i < size ; i++)
	{
		scanf("%d",&arr[i]);
	}

	sort(arr,size);

	pair(arr,size,sum);
	
	return 0;
}
