//write a program to reverse any four digit number. 
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,value1,value2,value3,a,b,c,d,final;
	printf("Enter a four digit number:");
	scanf("%d",&num);
	a=num%10;
	value1=num/10;
	b=value1%10;
	value2=value1/10;
	c=value2%10;
	value3=value2/10;
	d=value3%10;
	final=a*1000+b*100+c*10+d;
	printf("the reverce of the number you entered is %d",final);
	getch();
}
