#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,num2,large;
	printf("please enter the first number:");
	scanf("%d",&num1);
	printf("please enter the second number:");
	scanf("%d",&num2);
	large=(num1>num2)?num1:num2;
	printf("the largest number is %d", large);
	getch();
}
