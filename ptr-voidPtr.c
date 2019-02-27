// Assigning a pointer to a void pointer
#include<stdio.h>
main()
{
int a=10;
int *iptr=&a;
void *vptr=iptr;
printf("%d %p %p",a,iptr,vptr);
}
