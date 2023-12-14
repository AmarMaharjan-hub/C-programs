#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	for(x=1;x<=5;x++)
	{
		if(x==3)
		continue;
		printf("%d\n",x);
	}
	printf("finished loop\n");
	getch();
}
