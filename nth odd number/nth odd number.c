#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	c=0;
	printf("Enter the nth term of the natural odd number:");
	scanf("%d",&b);
	for (a=1;a<=b;a=a+2)
	{
		//a=a+1;
		//c=c+a;
		printf("%d \n",a);
		c=c+a;
	}
	printf("the sum of the odd natural numbers is %d",c);
	getch();
}
