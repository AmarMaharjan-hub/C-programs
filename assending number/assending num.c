//WAP to enter the nth number in assending order.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,a[i],b,j,k=0,l,m;
	printf("enter the nth number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the %d number:",i+1);
		scanf("%d",&a[i]);
	}
//	for(m=1;m<=n;m++)
//	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
					if(a[i]<=a[j])
					{
						b=0;
						l=a[i];
						a[i]=k;
						k=l;
					}
					else
					{
						b=1;
						break;
					}
					
			}
			if(b==0)
			{
				printf("%d\n",k);
				//a[i]=0;
				//i=0;
			//	printf("%d",a[2]);
			}
		}
//	}
	getch();
}

