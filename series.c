// Calculate x^y, x and y are input
#include<stdio.h>
int main()
{
int x;
unsigned int y;
printf("\n Enter value of x and y");
scanf("%d %u",&x,&y);
printf("%d",power(x,y));
return 0;
}
int power(int x,unsigned int y)
{
if(y==0)
return 1;
else if (y%2==0)
return power(x,y/2)*power(x,y/2);
else
return x*power(x,y/2)*power(x,y/2);
}
