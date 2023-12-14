#include<stdio.h>
#include<conio.h>
int sml();
void main()
{
	int c;
	sml();
	printf("\n\t\t\t\t\t\t\t PROGRAM CLOSED");
	getch();
}
int sml()
{	
	int a,b,d;
		printf("please enter the first number:");
		scanf("%d",&a);
		printf("please enter the second number:");
		scanf("%d",&b);
		if(a>b)
		{
			printf("the smallest number is %d",b);
		}
		else
		{
			printf("the smallest number is %d",a);
		}
}
