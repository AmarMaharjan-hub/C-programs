#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
 int a;
 clrscr();
 printf("\t\t\t\t\tMenu");
 printf("\n1.Momo\n2.Pizza\n3.Noodles\n4.Burger\n5.Fry Rice\n6.Exit\n");
 printf("Enter a number to order the menu:");
 scanf("%d",&a);
 switch(a)
 {
	case 1:

		printf("\n\n\t\t\t\t\tSub menu\n");
		printf("1.veg Momo\n2.buff momo\n3.chicken momo\n");
		printf("enter a nummber from 1-3 to order the menu:");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				printf("veg momo orderd");
			break;

			case 2:
				printf("buff momo ordered");
			break;

			case 3:
				printf("chicken momo ordered");
			break;

			default:

				printf("Invalid number\nPlease enter a number from 1-3");

		}
	break;


	case 2:
	{
		printf("\n\n\t\t\t\t\tSub menu\n");
		printf("1.mushroom pizza\n2.chicken pizza\n3.cheese pizza\n");
		printf("Enter a number from 1-3 to order the menu:");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				printf("mushroom pizza orderd");
			break;

			case 2:
				printf("chicken pizza ordered");
			break;

			case 3:
				printf("cheese pizza ordered");
			break;

			default:
			{
				printf("Invalid number\nPlease enter a number from 1-3");
			}

		}
	}
	break;

	case 3:
	{
		printf("\n\n\t\t\t\t\tSub menu\n");
		printf("1.soup noodles\n2.fried noodles\n3.chicken noodles\n");
		printf("Enter a number from 1-3 to order the menu:");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				printf("soup noodles orderd");
			break;

			case 2:
				printf("fried noodles ordered");
			break;

			case 3:
				printf("chicken noodles ordered");
			break;

			default:
			{
				printf("Invalid number\nPlease enter a number from 1-3");
			}

		}
	}
	break;

	case 4:
	{
		printf("burger ordered");
	}
	break;

	case 5:
	{
		printf("fry rice ordered");
	}
	break;

	case 6:
		exit(0);
	default:
	{
		printf("Invalid character\n Please enter a number from 1-6");
	}
 }



 getch();
}