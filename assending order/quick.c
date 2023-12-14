//WAP to enter nth number in assending number.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i=0,j=0,n,t;
	printf("\n enter the no elements:");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("\n enter the %dth element:",i+1);
		scanf("%d",&a[i]);
	}
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-1;i++)
		{
			if(a[1+i]<a[i])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d \t",a[i]);
	}
	getch();
}
