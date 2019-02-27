// Accept number from user which is divisible by 5 and greater than 50

#include<stdio.h>
void Divisible(int *,int);
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
	Divisible(iArr,10);
	return 0;
}
void Divisible(int *iptr,int iSize)
{
	int i = 0;
	for(i = 0 ; i < 10 ; i++)
	{
		if((*iptr % 5 == 0) && (*iptr > 50))
		{
			printf("[%d] ",*iptr);
		}
		iptr++;
	}
}
