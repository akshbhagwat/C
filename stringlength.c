// Find length of string (strlen function)
#include<stdio.h>
int stringLength(char*);
int main()
{
char str[100];
printf("enter any string\n");
gets(str);
printf("string length is %d",stringLength(str));
return 0;
}
int stringLength(char*txt)
{
int i=0,count=0;
while(txt[i++]!='\0')
count++;
return count;
}
