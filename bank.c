// Create structure to specify data of customers in a bank.There are 10 customers in bank. 
#include<stdio.h>
	struct customer
	{
	int accountno;
	char name[50];
	float balance;
	}cust[10];
main()
	{
	set_data();
	low_balance();
	with_dep();
	deposit();
	withdrawl();	
	}
set_data()
	{
	int i;
	for(i=0;i<10;i++)
		{
		printf("enter customer details");
		scanf("%d",&cust[i].accountno);
		gets(cust[i].name);
		scanf("%f",&cust[i].balance);
		}
	}
low_bal()
	{
	int i;
	for(i=0;i<10;i++)
		{
		if(cust[i].balance<100)
			{
			printf("%d",cust[i].accountno);
			puts(cust[i].name);
			}
		else
		printf("sufficient balance");
		}
	}
with_dep()
{
	int choice;
	printf("enter 1 for deposit\t 2 for withdrawl");
	scanf("%d",&choice);
	switch(choice)
		{
		case 1:deposit(accountno,amount);	
			break;
		case 2:withdrawl(accountno,amount);
			break;
		default:printf("enter wrong choice");
		}
deposit()
	{
	int i;
	for(i=0;i<10;i++)
		{
		if(cust[i].accountno==accountno)
		(cust[i].balance+amount=balance);
		printf("deposit succesfully");
		scanf("%f",&balance);
		else
		printf("Account no. is wrong");
		}
	}
withdrawl()
	{
	int i;
	for(i=0;i<10;i++)
		{
		if(cust[i].accountno==accountno)
		(cust[i].balance-amount<100);
		printf("withdrawl not possible");
		else
		cust[i].balance=cust[i].balance-amount;
		printf("%f",cust[i].balance);
		}
	}
}

