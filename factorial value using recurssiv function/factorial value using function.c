#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
	int a,num;
	printf("Enter the nth factorial number:");
	scanf("%d",&num);
	a=fact(num);
	printf("the %dth factorial value is %d",num,a);
	getch();
}
int fact(int n)
{
	if (n==0)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
