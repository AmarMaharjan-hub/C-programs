//WAP to display days of a week selecting 1 as sunday, 2as monday & so on 7 as saturday.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("Enter a number of a day:");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("\n sunday");
			break;
		case 2:
			printf("\n monday");
			break;
		case 3:
			printf("\n tuesday");
			break;
		case 4:
			printf("\n wednesday");
			break;
		case 5:
			printf("\n thursday");
			break;
		case 6:
			printf("\n Friday");
			break;
		case 7:
			printf("\n saturday");
			break;
		default:
			printf("\n there are only 7 days in a week.");
	}
	getch();
	
}
