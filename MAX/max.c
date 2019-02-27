#include"header.h"
void max(int iValue)
{
	if(iValue < 50)
	{
		printf("small\n");
	}
	else if((iValue > 50) && (iValue < 100))
	{
		printf("Medium\n");
	}
	else
	{
		printf("large\n");
	}
}
