// print longest substring in given string

#include<stdio.h>
void substring(char *,char *);
int main()
{
	char arr[100],brr[50];
	printf("Enter main string\n");
	scanf(" %[^'\n']",&arr);
	printf("Enter substring to find\n");
	scanf(" %[^'\n']",&brr);
	substring(arr,brr);
	return 0;
}

void substring(char *src1,char *src2)
{
	char *temp = src2,*start = NULL,*ptr = NULL;
	int count = 0,max = 0;
	
	while(*src1 != '\0')
	{
		if(*src1 == *src2)
		{
			start = src1;
			count = 0;
			while((*src1 != '\0') && (*src2 != '\0'))
			{
				if(*src1 != *src2)
				{
					break;
				}
				src1++;
				src2++;
				count++;
			}
			if(count > max)
			{
				max = count;
				ptr = start;
			}
			src2 = temp;
		}
		else
		{
			src1++;
		}
	}

	printf("\n\t\tSubstring\t==>>\t[");
	while(max != 0)
	{
		printf("%c",*ptr);
		ptr++;
		max--;
	}
	printf("]\n");
}
