// Accept number from user and print all prime number

#include<stdio.h>
void Prime(int *,int);
int main()
{
	int iNo = 0,i = 0;
	int iArr[10]={0};
	printf("Enter element\n");
	for(i = 0 ; i < 10 ; i++)
	{
		printf("Enter number : %d\n",i+1);
		scanf("%d",&iArr[i]);
	}
	Prime(iArr,10);
	return 0;
}
void Prime(int *iptr,int iSize)
{
	int i = 0,j = 0;
	for(i = 0 ; i < iSize ; i++)
	{
		for(j = 2 ; j < *iptr ; j++)
		{
			if(*iptr % j == 0)
			{
				break;
			}
		}
		if(j == *iptr)
		{
			printf("[%d] ",*iptr);
		}
		iptr++;
	}
}
