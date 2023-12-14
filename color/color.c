#include<stdio.h>
#include<conio.h>
void main()
{
	char color;
	printf("enter r for red \n enter g for green \n enter b for blue \n");
	scanf("%c",&color);
	switch(color)
	{
	case 'r':
		printf("red");
		break;
	case 'g':
		printf("green");
		break;
	case 'b':
		printf("blue");
		break;
		default:
			printf("this character is not defined");
	}
	getch();
}
