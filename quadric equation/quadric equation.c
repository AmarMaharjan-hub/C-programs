#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
void main()
{
	int a,b,c,det;
	float x1,x2,sq;
	printf("please enter the value of a:");
	scanf("%d",&a);
	printf("please enter the value of b:");
	scanf("%d",&b);
	printf("please enter the value of c:");
	scanf("%d",&c);
	if(a==0)
	{
		printf("value of a should not be zero.");
		exit(0);	
	}
	det=b*b-4*a*c;
	if(det<0)
	{
		printf("value of x1 & x2 is in complex form.");
	}
	else{
			sq=sqrt(det);
			x1=(-b+sq)/(2*a);
			x2=(-b-sq)/(2*a);
			printf("value of x1 is %f",x1);
			printf("value of x2 is %f",x2);
		}
		getch();
}
