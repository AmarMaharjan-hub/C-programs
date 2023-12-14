#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],size, i, num, flag=1;
	printf("enter the no of elements:");
	scanf("%d",&size);
	printf("enter numbers of the array :\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter the number to search \t");
	scanf("%d",&num);
	for (i=0;i<size;i++)
	{
		if(a[i]==num)
		{
			flag=1;
			printf("\n %d is found at %dth term",num,i+1);
			break;
		}
		flag=0;
	}
	if(flag==0)
	{
		printf("\n %d is not found in the array",num);
	}
	getch();
}
