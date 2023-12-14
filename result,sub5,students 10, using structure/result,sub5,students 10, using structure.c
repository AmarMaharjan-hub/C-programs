#include<stdio.h>
#include<conio.h>
#include<string.h>
struct result{
	char name[20],remarks[5];
	int marks[5],total;
	float percent;
};
void main()
{
	struct result student[10],temp;
	int i,j;
	for(i=0;i<10;i++)
	{
		student[i].total=0;
	}
	for(i=0;i<10;i++)
	{
		printf("please enter the detail of the %d student:\n",i+1);
		printf("name of the student:");
		scanf(" %[^\n]",student[i].name);
		for(j=0;j<5;j++)
		{
			printf("marks of %dth subject",j+1);
			scanf("%d",&student[i].marks[j]);
			student[i].total=student[i].total+student[i].marks[j];
		}
		student[i].percent=(float)student[i].total/5.0;
		if(student[i].marks[0]>=40&&student[i].marks[1]>=40&&student[i].marks[2]>=40&&student[i].marks[3]>=40&&student[i].marks[4]>=40)
		{
			strcpy(student[i].remarks,"PASS");
		}
		else
		{
			strcpy(student[i].remarks,"FAIL");
		}
	}
		for(i=0;i<9;i++)
		{
			for(j=0;j<10;j++)
			{
				if(student[i].percent<student[j].percent)
				{
					temp=student[i];
					student[i]=student[j];
					student[j]=temp;
				}
			}
		}
	
	printf("Report of student \n\n");
	printf("S.No.\t name\t sub1\t sub2\t sub3\t sub4\t sub5\t total\t percent\t remarks \n");
	for(i=0;i<10;i++)
	{
		printf("%d \t %s\t",i+1,student[i].name);
		for(j=0;j<5;j++)
		{
			printf("%d \t",student[i].marks[j]);
		}
		printf("%d \t %f\t %s \n",student[i].total,student[i].percent,student[i].remarks);
	}
	
	getch();
}
