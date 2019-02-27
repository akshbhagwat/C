// Calculate TAX

#include<stdio.h>

float Tax(long int);

int main()
{
	long int amt = 0;
	float tax = 0;
	
	printf("Enter amount\n");
	scanf("%ld",&amt);

	tax = Tax(amt);
	printf("\nTAX = [%f]\n",tax);

	return 0;
}

float Tax(long int amt)
{
	float tax = 0.0f;
	
	if(amt <= 250000)
	{
		tax = 0.0;
		return tax;
	}
	else if((amt >= 250000) && (amt <= 500000))
	{
		tax = (amt / 100) * 10;
		return tax;
	}
	else if((amt >= 500000) && (amt <= 1000000))
	{
		tax = (amt / 100) * 20;
		return tax;
	}
	else if(amt >= 1000000)
	{
		tax = (amt / 100) * 30;
		return tax;
	}
}




