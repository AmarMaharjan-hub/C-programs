#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c[a],d=0,i,e;
	printf("enter the nth number:");
	scanf("%d",&a);
	for(b=0;b<a;b++)
	{
		d=d+1;
		printf("Enter the %d number:",d);
		scanf("%d",&c[a]);
	}
	
		for(i=b;i<a;i++)
		{
			
		
			if(c[i]>c[b])
			{
				printf("the largest number is %d",c[2]);
				
			}
		//	else
		//	{
		//		continue;
		//		
		//	}
			b=b-1;
		}
	
	
	
	getch();
}
