// WAP to enter names of 10 persons and dispaly those names in dictonary(Alphabetical) order.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name[10][20],temp[20];
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("please enter the name of %d person:",i+1);
		scanf(" %[^\n]",name[i]);
	}
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(strcmp(name[i],name[j])>0)
			{
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
		}
	}
	printf("Displaying names in dictonary order");
	for(i=0;i<10;i++)
	{
		printf("\n %s",name[i]);
	}
	getch();
}

