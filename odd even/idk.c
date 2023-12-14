//odd or even?
#include<stdio.h>
#include<conio.h>
void  main()
{
	int a,b,c;
	printf("enter a number:");
	scanf("%d",&a);
/*	b=a/2;
	if(b+b==a)
	{
		printf("+ve");
	}
	else
	{
		printf("-ve");
	}*/
	if(a%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	getch();
}
