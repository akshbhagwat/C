////////////////////////////////////////////////////////////////
//
// Name	 - Akshay Bhagwat
// City	 - Pune (Maharashtra)
// Email - akshay.bhagwat1003@gmail.com
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void evenOdd(int no)
{
	((no <= 0) && printf("INVALID INPUT\n")) || (((no & 1) && printf("ODD\n")) || printf("EVEN\n"));
}

int main()
{
	int no = 0;

	printf("Enter number\n");
	scanf("%d",&no);

	evenOdd(no);

	return 0;
}
