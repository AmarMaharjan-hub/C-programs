//write a program to check weather a enter number is odd or even. 
#include<stdio.h>
#include<conio.h>
void main()
{
	int num1,value;
	printf("enter the number:");
	scanf("%d",&num1);
	num1%2==0?printf("the value you entered is even"):printf("the value you entered is odd");
	getch();
		
}
