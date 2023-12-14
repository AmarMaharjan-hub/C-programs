#include<stdio.h>
#include<conio.h>
void main()
{
	int na[2][2],nb[2][2],i,j,k,nm[2],vm[2][2];
	printf("enter the elements of the matrix A(2 x 2):\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter the elements of the matrix:");
			scanf("%d",&na[i][j]);
		}
	}
	printf("enter the elements of the matrix B(2 x 2):\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter the elements of the matrix:");
			scanf("%d",&nb[i][j]);
		}
	}
	printf("multiplying the matrix.\n");
	for(k=0;k<2;k++)
	{
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			nm[j]=na[k][j]*nb[j][i];
			
		}
		vm[k][i]=nm[0]+nm[1];
	}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d \t",vm[i][j]);
		}
		printf("\n");
	}	
	getch();
}
