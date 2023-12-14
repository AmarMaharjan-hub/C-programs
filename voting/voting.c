#include<stdio.h>
#include<conio.h>
void main()
{
	int a; 
	printf("Enter your age:");
	scanf("%d",&a);
	a>=18?printf("Congratulations! you are eligible for voting"):printf("Sorry you are not eligible for voting");
	getch();
}
