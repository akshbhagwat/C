// A program to check if strings are rotations of each other or not.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL rotation(char *str1,char *str2)
{
	if(strlen(str1) != strlen(str2)) 
	{
		return 0;
	}
  
	char* temp = NULL;
	char *ptr = NULL;
	int i = 0, j = 0;

	temp = (char *)malloc(sizeof(char) * (strlen(str1) * 2 + 1)); 
	if(temp == NULL)
		return -1;

	strcat(temp,str1);
	strcat(temp,str1);

	ptr = strstr(temp, str2); 

	free(temp);

	if (ptr != NULL) 
		return 1; 
	else
		return 0; 
}

int main()
{
	char arr[] = "abcd";
	char brr[] = "cdab";
	BOOL rslt;

	rslt = rotation(arr,brr);

	if(rslt == 1)
	{
		printf("\nYES, IT IS ROTATION\n");
	}
	else
	{
		printf("\nNO, IT IS NOT ROTATION\n");
	}
	
	return 0;
}
