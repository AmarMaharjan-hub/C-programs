//WAP to make a transpose of matrix of size 3*4.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,m[3][4];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("enter the elements of the matrix:");
			scanf("%d",&m[i][j]);
		}
	}
	printf("\n Matrix form \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d \t",m[i][j]);
		}
		printf("\n");
	}
	printf("\n transpose of the matrix \n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",m[j][i]);
		}
		printf("\n");
	}
	getch();
}
