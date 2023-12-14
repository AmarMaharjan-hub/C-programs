// WAP to find SI per annum.
#include<stdio.h>
#include<conio.h>
void main()
{
	float P,T,R,upper;
	printf("Enter the principle:");
	scanf("%f",&P);
	printf("\nEnter the time:");
	scanf("%f",&T);
	printf("\nEnter the Rate:");
	scanf("%f",&R);
	upper=(P*T*R)/100;
	printf("\n the Simple Interest of the number you entered is %f",upper);
	getch();
}
