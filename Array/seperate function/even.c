// Accept number from user return addition of all even number

#include<stdio.h>
int Even(int *,int);
int main()
{
	int iNo = 0,i = 0,iRet = 0;
	int iArr[10]={0};
	printf("Enter element\n");
	for(i = 0 ; i < 10 ; i++)
	{
		printf("Enter number : %d\n",i+1);
		scanf("%d",&iArr[i]);
	}
	iRet = Even(iArr,10);
	printf("\b\b = %d\n",iRet);
	return 0;
}
int Even(int *iptr,int iSize)
{
	int iSum = 0,i = 0;
	for(i = 0 ; i < 10 ; i++)
	{
		if(*iptr % 2 == 0)
		{
			printf("%d + ",*iptr);
			iSum = iSum + (*iptr);
		}
		iptr++;
	}
	return iSum;
}
