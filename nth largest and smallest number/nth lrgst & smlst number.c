//nth geratest and smallest
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,a[i],b,j;
	printf("enter the nth number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the number:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
				if(a[i]<=a[j])
				{
					b=0;
				}
				else
				{
					b=1;
					break;
				}
				
		}
		if(b==0)
		{
			printf("the smallest number is %d\n",a[i]);
		}
	}	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
				if(a[i]>=a[j])
				{
					b=0;
				}
				else
				{
					b=1;
					break;
				}
				
		}
		if(b==0)
		{
			printf("the largest number is %d\n",a[i]);
		}
	}	
	getch();
}

