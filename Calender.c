#include<stdio.h>

void calculate(int day,int month,int year)
{
	char* arr[7] = {"sun","mon","tue","wed","thr","fri","sat"};
	static int t[] = {0,3,2,5,0,3,5,1,4,6,2,4};
	int val =0;
	
	if((day < 1) || (day > 31) || (month < 1) || (month > 12))
	{
		return ;
	}
	
	year -= month < 3;
	
	val = (year + (year / 4) - (year / 100) + (year / 400) + t[month - 1]+day) % 7;
	
	printf("\n\n[%s]\n",arr[val]);
}

int main()
{
	int year = 0,mnth = 0,day = 0;
	
	printf("Enter day\n");
	scanf("%d",&day);
	
	printf("Enter month\n");
	scanf("%d",&mnth);
	
	printf("Enter year\n");
	scanf("%d",&year);
	
	calculate(day,mnth,year);	
	
	return 0;
}
