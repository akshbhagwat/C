// Binary to Octal
#include<stdio.h>
main()
{
int rem,j=1,bin,oct=0;
printf("\n Enter bin number");
scanf("%ld",&bin);
while(bin!=0)
{
rem=bin%10;
oct=oct+rem*j;
j=j*2;
bin=bin/10;
}
printf("\n Octal=%o",oct);
}
