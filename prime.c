// Prime or Not
#include<stdio.h>
main()
{
int i=2,n;
printf("\n Enter nuber");
scanf("%d",&n);
while(i<n-1)
{
if(n%i==0)
{
printf("It is not prime");
break;
}
else
{
i++;
}
printf("It is prime");
}
}
