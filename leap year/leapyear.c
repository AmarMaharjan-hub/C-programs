//WAP to check a program is leap year or not.
//Leap years are those years which occur every four year.For more detail where's your google X<. such as 1600, 2000, 2400 are leap years.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("enter a year:");
	scanf("%d",&a);
	if(a%4==0&&a%100!=0||a%400==0)
	{
		printf("the number you enterd is a leapyear");
	}
	else
	{
		printf("the number you enterd is not a leapyear");
	}
	/*if(a%4==0)
	{
		if(a%100!=0)
		{
			printf("the number you enterd is a leapyear");
		}
		printf("the number you enterd is a leapyear");
		else
		{
			printf("the number you enterd is not a leapyear");	
		}
	}
	else
	{
		if(a%400==0)
		{
			printf("the number you enterd is a leapyear");
		}
		printf("the number you enterd is not a leapyear");
	}*/
	getch();
}
