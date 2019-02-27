//write a C program to find sum of n elements entered by user.To perform this program, allocate memory dynamically using malloc() function.


#include<stdio.h>
#include<stdlib.h>
int main()
	int n,i,*ptr,sum=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("enter element\n");
	for(i-0;i<n;i++)
	{
		scanf("%d",&ptr[i]);
	}
printf("%d",ptr[i]);
return 0;
}
