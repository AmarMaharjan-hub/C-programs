//WAP a program to enter a monthly sales of a sales man and find out his commission amt.
#include<stdio.h>
#include<conio.h>
void main()
{
	float a,co;
	printf("Enter your monthly sales amount:");
	scanf("%f",&a);
	if(a<1000.0)
	{
		co=5.0/100.0*a;
	}
	else
	{
		if(a<=10000.0)
		{
			co=10.0/100.0*a;
		}
		else
		{
				co=15.0/100.0*a;
		}
	}
	printf("the commission amount of your monthly sales is %f",co);
	
	getch();
	
}
