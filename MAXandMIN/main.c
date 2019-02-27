#include"header.h"
int main()
{
	int iElements[20],iNum = 0,i = 0,iMax = 0,iMin = 0;
	printf("Enter number of element in the set\n");
	scanf("%d",&iNum);
	printf("Enter the elemets\n");
	for(i = 0 ; i < iNum ; i++)
	scanf("%d",&iElements[i]);
	MAXIMUM(iElements[20],int iMax,int iNum);
	MINIMUM(iElements[20],int iMin,int iNum);
	printf("%d",MAXIMUM);
	printf("%d",MINIMUM);
	return 0;
}
