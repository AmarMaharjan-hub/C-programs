#include<stdio.h>
#include<conio.h>
void main()
{
	int length, breadth, height, area;
	printf("enter length, beradth and height of a room");
	scanf("\n %d %d %d",&length,&breadth,&height);
	area=2*height*(length+breadth);
	printf("area=%d",area);
	getch();
}
