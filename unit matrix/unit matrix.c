//WAP to display a unit matrix of size 3*3.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,u[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				u[i][j]=1;
			}
			else
			{
				u[i][j]=0;
			}
			printf("%d \t",u[i][j]);
		}
		printf("\n");
	}
	getch();
}
