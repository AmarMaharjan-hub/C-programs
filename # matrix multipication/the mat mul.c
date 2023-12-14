#include<stdio.h>
#include<conio.h>
#define max 10
void main()
{
	int A[max][max],B[max][max],C[max][max],i,j,r1,r2,c1,c2,k;
	printf("please enter the row of matrixA:");
	scanf("%d",&r1);
	printf("please enter the column of matrixA:");
	scanf("%d",&c1);
	printf("please enter the row of matrixB:");
	scanf("%d",&r2);
	printf("please enter the column of matrixB:");
	scanf("%d",&c2);
	{
		printf("Multipication is not possible.");
	}
	else
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("please enter the elements of matrix A:");
				scanf("%d",&A[i][j]);
			}
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("please enter the elements of matrix B:");
				scanf("%d",&B[i][j]);
			}
		}
		printf("\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				C[i][j]=0;
				for(k=0;k<c1;k++)
				{
					C[i][j]=C[i][j]+A[i][k]*B[k][j];
				}
				printf("%d",C[i][j]);
			}
			printf("\n");
		}
	}
	getch();
}
