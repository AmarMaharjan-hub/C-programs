#include<stdio.h>
#include<conio.h>
void main()
{
	int a,l1,c,l2,e,l3,g,l4,total;
	printf("Enter num:");
	scanf("%d",&a);
	l1=a%10;
	c=a/10;
	l2=c%10;
	e=c/10;
	l3=e%10;
	g=e/10;
	l4=g%10;
	total=l1+l2+l3+l4;
	printf("sum is %d",total);
	getch();
}
