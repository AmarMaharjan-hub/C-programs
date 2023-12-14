// WAP to enter any two numbers swap those two numbers if 1st enter number is greater than 2nd number.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b,c;
	printf("enter the 1st number:");
	scanf("%d",&a);
	printf("enter the 2nd number:");
	scanf("%d",&b);
	if(a>b)
	{
	c=a;
	a=b;
	b=c;
	printf("since the first number you entered is greater than second one the both numbers have been swapped as\n num1:%d \n num2:%d",a,b);
	}
	getch();
}
