#include<stdio.h>
#include<conio.h>
void back();
void main()
{
	int c;
	back();
	getch();
}
void back()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d \t",j*i);
		}
		printf("\n");
	}
}
