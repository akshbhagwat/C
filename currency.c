////////////////////////////////////////////////////////////////
//
// Name  - Akshay Bhagwat
// City  - Pune (Maharshtra)
// Email - akshay.bhagwat1003@gmail.com
//
///////////////////////////////////////////////////////////////

void Count(int amt)
{
	int notes[10] = {2000,500,200,100,50,20,10,5,2,1};
	int max[10] = {0};
	int i = 0;

	if(amt <= 0)
	{
		printf("ENTER VALID AMOUNT\n");
	}

	for (i = 0 ; i < 10 ; i++) 
	{
		if(amt >= notes[i]) 
		{
			max[i] = amt / notes[i];
			amt = amt - max[i] * notes[i];
		}
	}

	printf("\n\n");
     
	for (i = 0 ; i < 10 ; i++) 
	{
		if(max[i] != 0) 
		{
			printf("%d Note = %d times\n",notes[i],max[i]);
		}
	}
}

int main()
{
	int amt = 0;
	
	printf("Enter amount\n");
	scanf("%d",&amt);

	Count(amt);
	return 0;
}






