#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=5;
	printf("please enter the nth term of the arthimetic series:");
	scanf("%d",&a);
	printf("the arthimetic series of the %dth term with common difference is given below:\n",a);
	for(b=0;b<a;b++)
	{
		printf("%d \n",c);
		c=c+4;
	}
	getch();
}
