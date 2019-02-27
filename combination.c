#include<stdio.h>
main()
{
int i,j,k,l;
for(i=1;i<=4;i++)
	
		for(j=1;j<=4;j++)
		
			for(k=1;k<=4;k++)
			
				for(l=1;l<=4;l++)
	
(!((i==j)||(i==k)||(i==l)||(j==k)||(j==l)||(k==l)));		
printf("%d %d %d %d",i,j,k,l);
}
