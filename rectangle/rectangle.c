#include<stdio.h>
#include<conio.h>
void main()
{
	int a,p,l,b;
	printf("enter the value of length:");
	scanf("%d",&l);
	printf("enter the value of breadth:");
	scanf("%d",&b);
	if(l>20)
	{
		p=2*l+2*b;
		printf("the perimeter of the rectangle is:%d",p);
	}
	else
	{
		a=l*b;
		printf("the area of rectangle is:%d",a);
	}
	getch();
}
