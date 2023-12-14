#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	for(a=1;a<=499;a++)
	{
		c=1;
		for(b=2;b<=a/2;b++)
		{
			d=a%b;
			if(d==0)
			{
				c=0;
				break;
			}
		}
			if(c==1)
			{
				printf("%d\n",a);
			}
			else
			{
				continue;
			}
			
	}
	getch();
}
