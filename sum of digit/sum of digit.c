//WAp to enter any number & find the sum of digit of that number.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	c=0;
	printf("enter any digit number:");
	scanf("%d",&a);
	while(a>0)
	{
		b=a%10;
		a=a/10;
		c=c+b;
	}
	printf("the sum of the digit of the  numbers is %d",c);
	getch();
}
