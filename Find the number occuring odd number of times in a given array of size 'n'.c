// Find the number occuring odd number of times in a given array of size 'n'

#include<stdio.h>

int oddOccurrence(int *arr,int size)
{
	int i = 0,j = 0,count = 0;
	
	while(i < size - 1)
	{
		j = i + 1;
		
		while(j < size)
		{
			if(arr[i] == arr[j])
			{
				count++;
			}
		}
		
		if(count % 2 != 0)
		{
			return arr[i];
		}
		else
		{
			count = 0;
		}
	}
	
	return 0;
}

int main()
{
	int arr[] = {10,4,10};
	int size = (sizeof(arr) / sizeof(arr[0]));
	int rslt = 0;
	
	rslt = oddOccurrence(arr,size);
	
	printf("\nOdd Occurence number = %d\n",rslt);
	
	return 0;
}
