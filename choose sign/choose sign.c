#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,add,sub,mul,div;
	char sign;
	printf("enter your first number:");
	scanf("%d",&a);
	printf("enter your second number:");
	scanf("%d",&b);
	printf("enter your operator:");
	scanf("%c",&sign);
	switch(sign)
	{
		case '+' :
			add=a+b;
			printf("the addition of those number is %d",add);
			break;
		case '-' :
			sub=a-b;
			printf("the subtraction of those number is %d",sub);
			break;
		case '*' :
			mul=a*b;
			printf("the multipication of those number is %d",mul);
			break;
		case '/' :
			div=a/b;
			printf("the division of those number is %d",div);
			break;
		default:
			printf("\n you have entered an unidentified character");
	}
	getch();
}
