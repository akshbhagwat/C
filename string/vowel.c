// Print the length of vowels

Input - aaaaeeeaaiuaaiii
Output - 0

Input - aeiouaei
Output - 1

Input - aaaaeieeeeaaaooooooouaaa
Output - 14

#include<stdio.h>

int check(char *);

int main()
{
	char arr[100];
	int rslt = 0;
	printf("Enter any vowel string\n");
	scanf("%s",&arr);
	rslt = check(arr);
	printf("Length = %d\n",rslt);
	return 0;
}

int check(char *arr)
{
	char *brr = "aeiou";
	int count = 0;

	while(*arr != '\0')
	{
		if(*arr == *brr)
		{
			while((*arr != 'e')&&(*arr != '\0'))
			{
				if(*arr == *brr)
				{
					count++;
					arr++;
				}
				else
				{
					arr++;
				}
			}
			brr++;
			if(*arr == *brr)
			{
				while((*arr != 'i')&&(*arr != '\0'))
				{
					if(*arr == *brr)
					{
						count++;
						arr++;
					}
					else
					{
						arr++;
					}
				}
				brr++;
				if(*arr == *brr)
				{
					while((*arr != 'o')&&(*arr != '\0'))
					{
						if(*arr == *brr)
						{
							count++;
							arr++;
						}
						else
						{
							arr++;
						}
					}
					brr++;
					if(*arr == *brr)
					{
						while((*arr != 'u')&&(*arr != '\0'))
						{
							if(*arr == *brr)
							{
								count++;
								arr++;
							}
							else
							{
								arr++;
							}
						}
						brr++;
						if(*arr == *brr)
						{
							while((*brr != '\0')&&(*arr != '\0'))
							{
								if(*arr == *brr)
								{
									count++;
									arr++;
								}
								else
								{
									arr++;
								}
							}
							brr++;
						}
					}
				}
			}
		}
		arr++;
	}

	if(*brr == '\0')
	{
		return count;
	}
	else
	{
		return 0;
	}
}
