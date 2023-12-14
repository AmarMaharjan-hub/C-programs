#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,i;
	a=1;
	b=2;
	c=3;
	for(d=1;d<=27;d++)
	{
		printf("%d%d%d\n",a,a,a);
		i=a;
		a=b;
	}
	getch();
}
