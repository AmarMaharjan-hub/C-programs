#include<stdio.h>
#include<conio.h>
void main()
{
	int sec,min,hr,rsec;
	printf("please enter the time in second:\n");
	scanf("%d",&sec);
	hr=sec/3600;
	rsec=sec%3600;
	min=rsec/60;
	sec=rsec%60;
	printf("%dhour,%dminute,%dsecond %d",hr,min,sec,rsec);
	getch();
}
