#include"header.h"

BOOL CheckDivisible(int iNo1,int iNo2)
{
	if(iNo2 > iNo1)
	{
		return FALSE;
	}
	if(iNo1 % iNo2 == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
