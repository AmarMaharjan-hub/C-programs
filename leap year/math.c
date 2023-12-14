#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,add,sub,mul,div;
	char sign;
	printf("n1:");
	scanf("%d",&a);
	printf("n2:");
	scanf("%d",&b);
	printf("char:");
	scanf("%c",&sign);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	switch(sign)
	{
		case '+':
			printf("result:",add);
			break;
		case '-':
			printf("result:",sub);
			break;
		case '*':
			printf("result:",mul);
			break;
		case '/':
			printf("result",div);
			break;
			default:
			printf("there is no such character");
	}
	getch();
}
