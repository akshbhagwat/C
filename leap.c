// Leap Year
#include<stdio.h>
main()
{
int year;
printf("\n Enter year");
scanf("%d",&year);
if(year%400==0||year%100==0||year%4==0)
{
printf("It is leap year");
}
else
{
printf("It is not leap year");
}
}
