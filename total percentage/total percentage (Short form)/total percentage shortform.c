//WAP a program to enter the marks of 5 subjects. Find and display total percentage and result.
#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c,d,e,total,p1,p2,p3,p4,p5,see;
	printf("enter the marks of the 1st subject:");
	scanf("%f",&a);
	printf("enter the marks of the 2nd subject:");
	scanf("%f",&b);
	printf("enter the marks of the 3rd subject:");
	scanf("%f",&c);
	printf("enter the marks of the 4th subject:");
	scanf("%f",&d);
	printf("enter the marks of the 5th subject:");
	scanf("%f",&e);
	p1=a*100.0/100.0;
	p2=b*100.0/100.0;
	p3=c*100.0/100.0;
	p4=d*100.0/100.0;
	p5=e*100.0/100.0;
	if(p1>=40 && p2>=40 && p3>=40 && p4>=40 && p5>=400)
	{
		printf("you have passed");
			total=p1+p2+p3+p4+p5;
						see=total*100.0/500.0;
						printf("\n the total percentage is %f",see);
	}
	else
	{
		printf("you have failed");
	}
		getch();
}
