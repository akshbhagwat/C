#include<stdio.h>
float percentage(int Marks)
{
	return (float)(Marks*100)/1000;
}
void result(float fRslt)
{
	if(fRslt > 70)
	{
		printf("Didtinction\n");
	}
	else if(fRslt > 60)
	{
		printf("First class\n");
	}
	else if(fRslt > 50)
	{
		printf("Second class\n");
	}
	else if(fRslt > 40)
	{
		printf("Pass\n");
	}
	else
	{
		printf("Fail\n");
	}
}
int main()
{
	int iMarks = 0;
	float fRslt = 0.0;
	printf("Enter marks\n");
	scanf("%d",&iMarks);
	fRslt = percentage(iMarks);
	printf("%f\n",fRslt);
	result(fRslt);
	return 0;
}
