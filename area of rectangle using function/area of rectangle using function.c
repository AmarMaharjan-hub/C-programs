#include<stdio.h>
#include<conio.h>
void area(int,int);
void main()
{
	int a,b;
	printf("enter hte length of the rectangle:");
	scanf("%d",&a);
	printf("enter hte breadth of the rectangle:");
	scanf("%d",&b);
	area(a,b);
	getch();
}
void area(int a,int b)
{
	int c;
	c=a*b;
	printf("the area of the rectangle is %d",c);
}
