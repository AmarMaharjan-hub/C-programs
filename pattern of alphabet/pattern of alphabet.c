#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d=1;
	for(a=1;a<=7;a++)
	{
		b=65;
		printf("%c \t",b);
		for(c=d;c<=6&&c>=1;c++)
		{
			b=b+1;
			printf("%c \t",b);
		}
		printf("\n");
		d=d+1;
	}
	getch();
}
