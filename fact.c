// Factorial using recursion
#include<stdio.h>
long factorial(int);
int main()
{
int n;
long f;
printf("\n Enter integer");
scanf("%d",&n);
if(n<0)
printf("\n Negative integer are not allowed");
else
{
f=factorial(n);
printf("%d!=%ld",n,f);
}
return 0;
}
long factorial(int n)
{
if(n==0)
return 1;
else
return (n*factorial(n-1));
}
