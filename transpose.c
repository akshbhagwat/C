// Transpose of Matrix
#include<stdio.h>
main()
{
int m,n,c,d,matrix[10][10],transpose_matrix[10][10];
printf("\n Enter number of rows and columns");
scanf("%d %d",&m,&n);
printf("\n Enter element of matrix");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
scanf("%d",&matrix[c][d]);
}
}
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
transpose_matrix[d][c]=matrix[c][d];
}
}
printf("\n Transpose of matrix");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
printf("%d\t",transpose_matrix[c][d]);
}
printf("\n");
}
return 0;
}
