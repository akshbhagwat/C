// String copy without using strcpy
#include<stdio.h>
main()
{
char s[50],t[50],i;
printf("enter string s :\n");
scanf("%s",s);
for(i=0;s[i]!='\0';++i)
{
t[i]=s[i];
}
t[i]='\0';
printf("string t :\n%s",t);
}
