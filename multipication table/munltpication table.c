#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,i,n;
	printf("nth term of multipicatyion:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d=\t",i);
		for(a=1;a<=10;a++)
		{
			b=a*i;
			printf("%d\t",b);
		}
		printf("\n");
	}
	getch();
}
