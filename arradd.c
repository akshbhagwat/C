// Accept number from user and print addition of two number of array equal to number

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p = NULL,i = 0,iNo = 0,j = 0,iSize = 0;
	printf("Enter number\n");
	scanf("%d",&iNo);
	printf("Enter size\n");
	scanf("%d",&iSize);
	p = (int *)malloc(iSize * sizeof(int));
	printf("Enter %d elements\n",iSize);
	for(i = 0 ; i < iSize ; i++)
	scanf("%d",&p[i]);
	for(i = 0 ; i < iSize ; i++)
	{
		for(j = 1 ; j < iSize ; j++)
		{
			if(p[i]+p[j]==iNo)
			{
				printf("%d + %d = %d\n",p[i],p[j],iNo);
			}
		}
	}
	return 0;
}
