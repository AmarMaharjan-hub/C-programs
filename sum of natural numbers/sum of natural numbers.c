#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	c=0;
	printf("Enter the nth term of the natural number:");
	scanf("%d",&b);
	for (a=1;a<=b;a++)
	{
		printf("%d \n",a);
		c=c+a;
	}
	printf("the sum of %dnth natural number is %d",b,c);
	getch();
}
