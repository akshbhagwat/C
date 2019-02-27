	#include<stdio.h>
	void display(int x[20][20],int y,int z);
	void main()
	{
	  int a[20][20],i,j,n,k;
	 printf("\n Enter the number of vertices in graph");
	 scanf("%d",&n);
	printf("Enter number of edges of graph G");
	scanf("%d",&k);

	printf("Please input incidence matrix for G");
	for(i=0;i<n;i++)
	{
	  for(j=0;j<k;j++)
	   {
	      ip: printf("\nEnter element a%d%d : ",i,j);
	      scanf("%d",&a[i][j]);
	   }

	}
	printf("\nThe incidence Matrix for G is:\n");
	display(a,n,k);
	}
        void display(int x[20][20],int y,int z)
	{

	 int i,j;
	for(i=0;i<y;i++)
	   {
	for(j=0;j<z ;j++)
	{ 
	printf("%d\t",x[i][j]);
	}
	printf("\n");
	  }
         }


