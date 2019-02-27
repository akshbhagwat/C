#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int adj_mat[50][50];
int deg,i,j,n;
printf("\n How many vertices ");
scanf("%d",&n);
 int read_graph(int adj_mat,int n);
printf("\n vartex \t degree");
for( i=1;i<=n;i++)
{
 deg=0;
for(j=1;j<=n;j++)
{
 if(adj_mat[i][j]==1)
deg++;
}
printf("\n\n %5d \t\t %d\n\n",i,deg);
}
return 0;
{
int read_graph (int adj_mat[50][50],int n)
{
int i,j;
char reply;
for(i=1;i<=n;i++)
{
 for(j=1 ;j<=n;j++)
{
if (i==j)
{
   adj_mat[i][j]=0;
  continue;
}
}
}
printf("\n %dvertices %d & %d are adjacent (Y/N) :");
scanf("%d",&reply);
if(reply=='y'|| reply=='Y')
 adj_mat[i][j]=1;
else
adj_mat[i][j]=0;
}
}
return 0;
}


