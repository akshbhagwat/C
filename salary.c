// Employee basic sallary
#include<stdio.h>
main()
{
int id;
float amt,hr,da,pt,th;
printf("enter employee id\n"); 
scanf("%d",&id);
printf("enter basic sallary\n");
scanf("%f",&amt);
hr=0.1*amt;
da=0.3*amt;
pt=0.05*amt;
th=amt+hr+da-pt;
printf("take home sallary is %f\n",th);
}
