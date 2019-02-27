// Heterogenous Array

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size = 0;
	void* arr[size];
	int a = 10;
	char b = 'A';
	int c = 3;
	const char* d = "akshay";
	float f = 3.14f;

	arr[0] = (void *)a;
	arr[1] = (void *)b;
	arr[2] = (void *)c;
	arr[3] = (void *)d;
//	arr[4] = (float *)f;

	printf("%d ",arr[0]);
	printf("%c ",arr[1]);
	printf("%d ",arr[2]);
	printf("%s \n",arr[3]);
//	printf("%f\n",arr[4]);

	return 0;
}
