// Use single of dimensional array
#include<stdio.h>
main()
{
	int marks[200],i,studs,sum=0;
	float average;
	printf("enter number of students in the class \t");
	scanf("%d",&studs);
	printf("enter marks of students\n");
	for(i=0;i<studs;i++)
	{
	printf("enter marks of students%d\n",i+1); 
	scanf("%d",&marks[i]);
	}
	for(i=0;i<studs;i++)
	sum=sum+marks[i];
	average=(float)sum/studs;
	printf("average marks of the class is %f",average);
}	
