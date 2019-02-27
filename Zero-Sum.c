/////////////////////////////////////////////////////////
//
// Name  - Akshay Bhagwat
// City	 - Pune (Maharashtra)
// Email - akshay.bhagwat1003@gmail.com
//
////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef char BOOL;

#define TRUE 1
#define FALSE 0

static int a = 0, b = 0, c = 0;

BOOL ZeroSum(int *ptr,int size)
{
	for(a = 0 ; a < (size - 2) ; a++)
	{
		for(b = (a+ 1) ; b < (size - 1)  ; b++)
		{
			for(c = (b + 1) ; c < size ; c++)
			{
				if((ptr[a] + ptr[b] + ptr [c]) == 0)
				{
					return 1;
				}
			}
		}
	}

	return 0;
}

int main()
{
	int i = 0,size = 0;
	int *ptr = NULL;
	BOOL rslt = 0;	

	printf("Enter size\n");
	scanf("%d",&size);

	ptr = (int*)malloc(size * sizeof(int));

	if(ptr == NULL)
	{
		printf("MEMORY NOT ALLOCATED\n");
	}

	printf("Enter %d elements\n",size);

	for(i= 0 ; i < size ; i++)
	{
		scanf("%d",&ptr[i]);
	}

	rslt = ZeroSum(ptr,size);

	if(rslt == 1)
	{
		printf("[%d] + [%d] + [%d] = 0\n",ptr[a],ptr[b],ptr[c]);
	}
	
	return 0;
}
