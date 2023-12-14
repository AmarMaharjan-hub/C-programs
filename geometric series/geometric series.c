#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	a=3;
	printf("enter the nth term:");
	scanf("%d",&b);
	printf("geometric series:\n");
	do
	{
		//printf("geometric series:\n");
		printf("%d \n",a);
		a=a*(-2);
	}while(a<=b);
	getch();
}
