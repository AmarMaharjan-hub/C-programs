#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
	int num,f;
	printf("please enter the nth term:");
	scanf("%d",&num);
	f=fact(num);
	printf("the summation of the %dth natural number is %d",num,f);
	getch();
}
int fact(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return n+fact(n-1);
	}
}
