//WAP to find average temperature of a week using array.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	float b[7],c=0.0,avg;
	for(a=1;a<=7;a++)
	{
		printf("Enter the %d day of week:",a);
		scanf("%f",&b[a]);
		c=c+b[a];
	}
	avg=c/7;
	printf("the average temmperature of the week is %f",avg);
	getch();
}
