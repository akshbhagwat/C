// Turn on set of bits
#include<stdio.h>
int turnonbit(int number,int position)
{
int x=1;
x=x<<(position-1);
x=~x;
return number&x;
}
int main()
{
int no,pos;
printf("Enter number");
scanf("%d",&no);
printf("Enter position");
scanf("%d",&pos);
printf("Result after turning on %d position of %d is %d",pos,no,turnonbit);
return 0;
}
