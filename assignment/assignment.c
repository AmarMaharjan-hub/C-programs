#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,result;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	result=a>b?a+b:b-a;
	printf("the final value is %d",result);
	getch();
}
