#include<stdio.h>
#include<conio.h>
void main()
{
	int a,c,b;
	c=1;
	printf("enter a factorial value:");
	scanf("%d",&a);
	for (b=0;a>=1;a--)
	{
		c=c*a;
	}
	printf ("the factorial value is %d",c );
	getch();
}
