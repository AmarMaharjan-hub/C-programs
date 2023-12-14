#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[10];
	for(i=0;i<10;i++)
	{
		printf("enter the number:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("the number you entered are:%d\n",a[i]);
	}
	getch();
}
