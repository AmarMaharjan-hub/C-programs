#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	c=1;
	for(a=1;a<=5;a++)
	{
		printf("*\t");
		for(b=c;b<=4&&b>=1;b++)
		{
			printf("*\t");
		}
		printf ("\n");
		c=c+1;
	}
	getch();
}
