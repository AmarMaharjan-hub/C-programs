// WAp to enter marks of 5 subjects of students and find total percentage, result and division.
#include<stdio.h>
#include<conio.h>
void main()
{
	int total[10],marks[10][5],i,j;
	float percent[10];
	for(i=0;i<10;i++)
	{
		printf("please enter the marks of %dth student:\n",i+1);
		for(j=0;j<5;j++)
		{
			printf("please enter the marks of %d subject:",j+1);
			scanf("%d",&marks[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<10;i++)
	{
		total[i]=0;
		for(j=0;i<5;j++)
		{
			total[i]=total[i]+marks[i][j];
		}
		//percent[i]=(float)total[i]/5.0;
		percent[i]=total[i].0/5.0;
	}
	printf("\n\nresult of students:\n\n");
	for(i=0;i<10;i++)
	{
		printf("\n student %d \n total:%d \n percent:%f",i+1,total[i],percent[i]);
		
		if(marks[i][0]>=40&&marks[i][1]>=40&&marks[i][2]>=40&&marks[i][3]>=40&&marks[i][4]>=40)
		{
			printf("\nresult:pass");
			if(percent[i]==75.0)
			{
				printf("\n division:Distinction");
			}
			else if(percent[i]==60.0)
			{
				printf("\n division:First");
			}
			else if(percent[i]==45.0)
			{
				printf("\n division:Second");
			}
			else
			{
				printf("\n division:Third");
			}
		}
		else
		{
			printf("\n result:Fail \n division:N/A\n");
		}
	}
	getch();
}
