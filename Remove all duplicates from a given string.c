// Remove all duplicates from a given string.

#include<stdio.h>

void dublicate(char* ptr,int n)
{
	int i = 0,index = 0,j = 0;
	
	for(i = 0 ; i < n ; i++)
	{
		for(j = 0 ; j < i ; j++)
		{
			if(ptr[i] == ptr[j])
			{
				break;
			}			
		}
		
		if(i == j)
		{
			ptr[index] = ptr[i];
			index++;
		}
	}
	
	ptr[index] = '\0';
	
	printf("%s\n",ptr);
}

int main()
{
	char ptr[] = "akshay";
	int len = sizeof(ptr)/sizeof(ptr[0]);
	
	dublicate(ptr,len);		

	return 0;
}
