#include<stdio.h>
#include<conio.h>
void main()
{
	int num,flag=1,i,rem;
	printf("please enter a number:");
	scanf("%d",&num);
	a=num/2;
	for(i=2;i<=num/2;i++)
	{
		rem=num%i;
		if(rem==0)
		{
			flag=0;
			break;
		}
	}
		if(flag==1)
		{
			printf("%d is a prime number.",num);
		}
		else
		{
			printf("%d is a composit number",num);
		}
	getch();
}
