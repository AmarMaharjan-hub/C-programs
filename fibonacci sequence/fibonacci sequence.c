// WAP to display fibonacci sequence.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e;
	printf("enter the fibonacci nth term:");
	scanf("%d",&a);
	b=1;
	c=1;
	d=b;
	printf("%d",b);
	do
	{
		e=c+d;
		d=c;
		c=e;
		printf("\t %d \t",d);
	} while(a>e);
	getch();
}
