#include<stdio.h>
main()
{
int binary,decimal=0,j=1,rem;
printf("\n Enter binary number");
scanf("%d",&binary);
while(binary!=0)
{
rem=binary%10;
decimal=decimal+rem*j;
j=j*2;
binary=binary/10;
}
printf("\n Decimal=%d",decimal);
}
