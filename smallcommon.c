// Accept two number from user and print smallest common factor 

#include<stdio.h>
int main()
{
	int iNo1 = 0,iNo2 = 0,i = 0;
	printf("Enter two number\n");
	scanf("%d%d",&iNo1,&iNo2);
	for(i = 2 ; i < (iNo1*iNo2) ; i++)
	{
		if((iNo1 * iNo2) % i == 0)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
