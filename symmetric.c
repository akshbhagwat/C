// Symmetric Matrix
#include<stdio.h>
main()
{
int i,j,order,matrix[10][10],matrix_transpose[10][10],unequal=0;
printf("\n Enter order of square matrix");
scanf("%d",&order);
printf("\n Enter element of matrix");
for(i=0;i<order;i++)
{
for(j=0;j<order;j++)
scanf("%d",&matrix[i][j]);
}
for(i=0;i<order;i++)
for(j=0;j<order;j++)
matrix_transpose[i][j]=matrix[j][i];
for(i=0;i<order;i++)
{
for(j=0;j<order;j++)
if(matrix_transpose[i][j]!=matrix[j][i])
{
unequal=1;
break;
}
if(unequal==1)
break;
}
if(unequal==0)
printf("\n Matrix is symmetric");
else
printf("\n Matrix is not symmetric");
return 0;
}
