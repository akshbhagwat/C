#include<stdio.h>
void display(int ar1[20][20]);
void multi(int ar1[20][20],int ar2[20][20]);
void copy(int ar1[20][20],int ar2[20][20]);
void add(int ar1[20][20],int ar2[20][20]);
int b[20][20],c[20][20];
int n;
void main()
{
int a[20][20],i,j,f=2;

printf("\n Enter the number of vertices in graph G:");
scanf("%d",&n);
printf("\n Input an adjacency matrix of graph G:");
for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	{
		ip:printf("\n Enter a %d%d :",i,j);
		scanf("%d",&a[i][j]);
		if(a[i][j]<0)goto ip;
	}
	}
copy(a,b);
printf("\n Entered matrix A is:\n");
display(a);
for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	{
		c[i][j]=0;
	}
	}
for(i=1;i<n;i++)

	{
		add(c,b);
		multi(b,a);
	}
printf("\n Matrix B is:\n");
display(c);
for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	{
		if(i!=j && c[i][j]==0)
		f=1;
	}
	}
if(f==1)
printf("\n G is not connected");
else
printf("\n G is connected");
}
void display(int ar1[20][20])
{
int i,j;
for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	{
		printf("%d\t",ar1[i][j]);
	}printf("\n");	
	}
}
void multi(int ar1[20][20],int ar2[20][20])
{
int d[20][20],i,j,k,l;
for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	{
		d[i][j]=0;
	}
	}
//A*A
for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	{
		for(k=0;k<n;k++)
	{
		d[i][j]=d[i][j]+ar1[i][j]*ar2[i][j];
	}
	}
	}
copy(d,b);
}
void copy(int ar1[20][20],int ar2[20][20])
{
int d[20][20],i,j,k,l;
for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	{
		ar2[i][j]=ar1[i][j];
	}
	}
}
void add(int ar1[20][20],int ar2[20][20])
{
int i,j;
for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	{
		ar1[i][j]=ar1[i][j]+ar2[i][j];
	}
	}
}


