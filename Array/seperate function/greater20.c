// Accept number from user which is greater than 20 and less than 40

#include<stdio.h>
void Great(int *,int);
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
	Great(iArr,10);
	return 0;
}
void Great(int *iptr,int iSize)
{
	i = 0;
	for(i = 0 ; i < 10 ; i++)
	{
		if((*iptr > 20) && (*iptr <40))
		{
			printf("[%d] ",*iptr);
		}
		iptr++;
	}
}
