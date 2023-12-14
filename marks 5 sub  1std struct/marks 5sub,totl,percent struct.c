//WAP to enter the name & marks of 5 subjects and find the total & percentage.
#include<stdio.h>
#include<conio.h>
struct record{
	char name[15];
	int marks[5],total;
	float percent;
};
void main()
{
	struct record student;
	int i;
	printf("please enter name:");
	scanf(" %[^\n]",student.name);
	printf("\n please enter marks of 5 subjects:");
	for(i=0;i<5;i++)
	{
		printf("\n enter marks of %dth subjects:",i+1);
		scanf("%d",&student.marks[i]);
	}
	student.total=student.marks[0]+student.marks[1]+student.marks[2]+student.marks[3]+student.marks[4];
	student.percent=(float)student.total/5.0;
	printf("\n the total marks obtained is %d",student.total);
	printf("\n the percentage of the student is %f",student.percent);
	getch();
}
