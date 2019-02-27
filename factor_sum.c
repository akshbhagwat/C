// Accept number from user perform sumetion of all such number which are factors of that number as well as sumetion of all such number which are not factor of that number and return difference between both sumetion.

#include<stdio.h>
#include<math.h>
int main()
{
	int iNo = 0,iSum1 = 0,iSum2 = 0;
	int i = 0,iRslt=0;
	printf("Enter number\n");
	scanf("%d",&iNo);
	for(i = 1 ; i <= iNo ; i++)
	{
		if(iNo % i == 0)
		{
			iSum1 += i;
		}
		else
		{
			iSum2 += i;	
		}
	}
	printf("Factors of %d sum = %d\n",iNo,iSum1);
	printf("NON Factors of %d sum = %d\n",iNo,iSum2);
	iRslt=abs(iSum1-iSum2);
	printf("%d - %d = %d\n\n",iSum1,iSum2,iRslt);	
	return 0;
}
