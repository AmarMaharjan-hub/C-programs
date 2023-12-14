//this is a program to enter 4 digit random number and find out the sum of all digit of the number.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,f,g;
	printf("Enter four digit number:");
	scanf("%d",&a);
	c=a%10;
	b=a/10;
	d=b%10;
	b=b/10;
	e=b%10;
	b=b/10;
	f=b%10;
	g=c+d+e+f;
	printf("\n the sum of the four digit number is %d",g);
	getch();
}
