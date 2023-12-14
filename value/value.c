#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,p1;
	printf("enter any two number \n");
	printf("a:");
	scanf("%d",a);
	printf("b:");
	scanf("%d",b);
	p1=a>b?a+b:a-b;
	printf("the value you are finding is %d",p1);
	getch();
	
}
