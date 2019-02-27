#include<stdio.h>
#include<string.h>

void fun(char *ptr)
{
	char ch = 'a';
	int i = 0;

	for(ch = 'a' ; ch <= 'z' ; ch++)
	{
		i = 0;

		while(ptr[i])
{
		if((ptr[i] >= 'A') && (ptr[i] <= 'Z'))
		{
			ptr[i] += 32;

			if(ptr[i] != ch)
			{
				break;
			}
			else
			{
				i++;
			}
		}
		else if((ptr[i] >= 'a') && (ptr[i] <= 'z'))
		{
			if(ptr[i] != ch)
			{
				break;
			}
			else
			{
				i++;
			}

		}
}	}

	if(ch == '(')
	{
		printf("A - Z character are present in string\n");
	}
	else
	{
		printf("Not present\n");
	}
}

int main()
{
	char ptr[200];
	printf("Enter string\n");
	scanf("%[^'\n']s",ptr);
	fun(ptr);
	return 0;
}
