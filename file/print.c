#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL readfile(char *name)
{
	char path[100],arr[256];
	char default_path[]="Home/:akki.txt";
	sprintf(path,"%s%s",default_path,name);
	
	int fd=0,ret=0;
	fd=open(path,O_RDONLY);
	if(fd==-1)
	{
		return FALSE;
	}
	while((ret=read(fd,arr,sizeof(arr)))!=0)
	{
		printf("%s",arr);
	}
	close(fd);
	return TRUE;
}

int main()
{
	char name[100];
	BOOL ret;
	printf("enter file name\n");
	scanf("%['^\n']s",name);
	ret=readfile(name);
	if(ret==FALSE)
	{
		printf("NOT OPEN\n");
	}
	return 0;
}
