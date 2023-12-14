//write any program to find the reverse number of any number.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,num,c;
	printf("enter any number:");
	scanf("%d",&a);
	c=a%10;
	while(a>0)
	{
		b=a%10;	
		a=a/10;
		num=a%10;
		if(a>0)
		{
			c=c*10+num;
		}
	}
	printf("the reverse of the number you entered is %d",c);
	getch();
}
