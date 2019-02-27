// Area of Triangle
#include<stdio.h>
#include<math.h>
main()
{
int ch;
float a,b,c,area,ht,bs,ag,s;
printf("\n 1.Using base and height formula");
printf("\n 2.Using Heroin formula");
printf("\n 3.Using sine formula"); 
printf("\n Enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\n Enter base and height");
scanf("%f %f",&bs,&ht);
area=0.5*bs*ht;
printf("\n Area=%f",area);
break;
case 2:
printf("\n Enter value of side a b c of triangle");
scanf("%f %f %f",&a,&b,&c);
s=(a+b+c)/2.0;
area=(float)sqrt(s*(s-a)*(s-b)*(s-c));
printf("Area=%f",area);
break;
case 3:
printf("\n Enter side of a b of triangle");
scanf("%f %f",&a,&b);
printf("\n Enter angle between a and b");
scanf("%f",&ag);
area=(float)(0.5*a*b*sin(ag));
printf("\n Area=%f",area);
break;
default:{break;}
}
}
