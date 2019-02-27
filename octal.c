#include<stdio.h>
main()
{
int binary,octal=0,j=1,rem;
printf("\n Enter binary number");
scanf("%d",&binary);
while(binary!=0)
{
rem=binary%10;
octal=octal+rem*j;
j=j*2;
binary=binary/10;
}
printf("Octal=%o",octal);
}
