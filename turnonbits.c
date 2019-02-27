// Write program turn on bits
#include<stdio.h>
int TurnOnBits(int number,int position,int noofbits)
{
int x=x<<noofbits-1;
x=x<<(position-noofbits);
return number|x;
}
int main()
{
printf("Enter number");
scanf("%d",&number);
printf("Enter position");
scanf("%d",&position);
printf("Enter bits");
scanf("%d",&noofbits);
printf("%d",TurnOnBits);
}
