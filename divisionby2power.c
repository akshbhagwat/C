// Division by 2 power
#include<stdio.h>
int DivisionBy2power(int no,int power)
{
return no>>power;
}
int main()
{
int no,power;
printf("Enter number");
scanf("%d",&no);
printf("Enter power");
scanf("%d",&power);
printf("number %d of power %d is %d ",no,power,DivisionBy2power);
}
