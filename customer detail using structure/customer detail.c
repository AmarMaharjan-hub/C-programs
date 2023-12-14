#include<stdio.h>
#include<conio.h>
struct{
	int cust_id;
	char cust_name[20];
	float dr,cr,balance;
}customer1,customer2;
void main()
{
	printf("please enter the details of the customer1:\n");
	printf("please enter id:");
	scanf("%d",&customer1.cust_id);
	printf("please enter the name:");
	scanf(" %[^\n]",customer1.cust_name);
	printf("please enter the debit amount:");
	scanf("%f",&customer1.dr);
	printf("please enter the credit amount:");
	scanf("%f",&customer1.cr);
	printf("\n\n");
	printf("please enter the details of the customer2:\n");
	printf("please enter id:");
	scanf("%d",&customer2.cust_id);
	printf("please enter the name:");
	scanf(" %[^\n]",customer2.cust_name);
	printf("please enter the debit amount:");
	scanf("%f",&customer2.dr);
	printf("please enter the credit amount:");
	scanf("%f",&customer2.cr);
	printf("\n\n");
	printf("customer1:\n");
	printf("ID=%d \n name=%s \n debit=%f \n cerdit=%f \n",customer1.cust_id,customer1.cust_name,customer1.dr,customer1.cr);
	if(customer1.dr>customer1.cr)
	{
		customer1.balance=customer1.dr-customer1.cr;
		printf("balance=%f dr \n",customer1.balance);
	}
	else
	{
		customer1.balance=customer1.cr-customer1.dr;
		printf("balance=%f cr \n",customer1.balance);
	}
	printf("\n\n");
	printf("customer2:\n");
	printf("ID=%d \n name=%s \n debit=%f \n cerdit=%f \n",customer2.cust_id,customer2.cust_name,customer2.dr,customer2.cr);
	if(customer2.dr>customer2.cr)
	{
		customer2.balance=customer2.dr-customer2.cr;
		printf("balance=%f dr \n",customer2.balance);
	}
	else
	{
		customer2.balance=customer2.cr-customer2.dr;
		printf("balance=%f cr \n",customer2.balance);
	}
	getch();
}
