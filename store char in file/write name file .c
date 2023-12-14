#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	FILE *frl;
	char name[20],re[20];
	int len;
	printf("Please enter your name:");
	scanf(" %s",name);
	frl=fopen("pro.txt","w");
	fputs(name,frl);
	fclose(frl);
	fopen("pro.txt","r");
	len=strlen(name);
	if(frl==NULL)
	{
		printf("An error occured.");
	}
	else
	{
		fgets(re,len+1,frl);

	}
		fclose(frl);
			printf("%s",re);
	
	getch();
}
