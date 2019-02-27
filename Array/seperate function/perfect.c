// Accept number from user and print all perfect number

#include<stdio.h>
void Perfect(int *,int);
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
	Perfect(iArr,10);
	return 0;
}
void Perfect(int *iptr,int iSize)
{
	int i = 0,j = 0;
	int iSum = 0;
	for(i = 0 ; i < iSize ; i++)
	{
		for(j = 1 ; j < *iptr ; j++)
		{
			if((*iptr % j == 0) && (iSum <= *iptr))
			{
				iSum += j;
			}
		}
		if(iSum == *iptr)
		{
			printf("[%d] ",*iptr);
		}
		iptr++;
	iSum = 0;
	}
}
