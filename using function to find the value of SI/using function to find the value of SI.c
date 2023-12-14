#include<stdio.h>
#include<conio.h>
int value(int,int,int);
void main()
{
	int a,b,c;
	float d;
	printf("Please enter the principle:");
	scanf("%d",&a);
	printf("Please enter the time:");
	scanf("%d",&b);
	printf("Please enter the rate:");
	scanf("%d",&c);
	d=value(a,b,c);
	printf("The SI of the value you entered is %f",d);
	getch();
}
int value(int a,int b,int c)
{
	float d;
	d=(a*b*c)/100.0;
	return d;
}
