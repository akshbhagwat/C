// Find a maximum occurring character in the input string

#include<stdio.h>
#include<string.h>

void occurence(char *str)
{
	int max = 0,i = 0;
	char ch = 0;
	int arr[256] = {0};
	int len = strlen(str);
		
	for(i = 0 ; i < len ; i++)
	{
		arr[str[i]]++;
		if(arr[str[i]] > max)
		{
			max = arr[str[i]];
			ch = str[i];
		}
	}

	printf("\n%d = %c\n",max,ch);
}

int main()
{
	char *str = "hsufh2131w34@##@@########";
	
//	printf("\nEnter string\n");
//	scanf("[^'\n']",&str);
	
	occurence(str);
	
	return 0;
}
