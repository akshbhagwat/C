// Sum of Digit
#include<stdio.h>
main()
{
int i,j,n,sum=0,cnt=0;
printf("\n Enter number");
scanf("%d",&n);
while(n>0)
{
i=n%10;
n=n/10;
sum=sum+i;
cnt++;
}
printf("\n sum of digit is %d",sum);
printf("\n count of number is %d",cnt);
}
