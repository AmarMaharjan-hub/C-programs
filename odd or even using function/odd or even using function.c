#include<stdio.h>
#include<conio.h>
void ooe();
void main()
{
	ooe();
	printf("\n program closed");
	getch();
}
void ooe()
{
	int a,b;
	printf("please enter a number:");
	scanf("%d",&a);
	b=a%2;
	if(b==0)
	{
		printf("the number you entered is even.");
	}
	else
	{
		printf("the number you entered is odd.");	
	}
}
