////////////////////////////////////////////////////////////////////
//
// Name  - Akshay Bhagwat
// City  - Pune (Maharashtra)
// Email - akshay.bhagwat1003@gmail.com
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void LCM(int *ptr,int size)
{
	int i = 0,j = 0,lcm = 1,min = 0;
	
	for(i = 0 ; i < size ; i++)
	{
		min = ptr[0];

		if((ptr[i] == 0) || (ptr[i] < 0))
		{
			lcm = 0;
			printf("\nLCM = %d\n",lcm);
			return ;
		}

		lcm *= ptr[i];
		
		if(ptr[i] < min)
		{
			min = ptr[i];
		}
	}

	for(i = min ; i <= lcm ; i++)
	{
		for(j = 0 ; j < size ; j++)
		{
			if(i % ptr[j] == 0)
			{
				if(j == (size - 1))
				{
					printf("\nLCM = %d\n",i);
					return ;
				}
			}
			else
			{
				break;
			}
		}
	}
}

int main()
{
	int size = 0,i = 0;
	int *ptr = NULL;

	printf("Enter size\n");
	scanf("%d",&size);

	if(size <= 0)
	{
		printf("Enter valid size\n");
		return 0;
	}

	ptr = (int*)malloc(size * sizeof(int));
	if(ptr == NULL)
	{
		printf("MEMORY NOT ALLOCATED\n");
		return 0;
	}

	printf("Enter %d elements\n",size);
	for(i = 0 ; i < size ; i++)
	{
		scanf("%d",&ptr[i]);
	}

	LCM(ptr,size);

	free(ptr);
	return 0;
}
