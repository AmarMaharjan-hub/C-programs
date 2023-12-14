#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	FILE *st,*li;
	int i;
	char adr[10][20],adr2[10][20],captal[10][20],fn[5],rn[5];
	st=fopen("lim.txt","w");
	for(i=0;i<10;i++)
	{
		printf("Enter the %dth address:",i+1);
		scanf("%s",adr[i]);
		fprintf(st,"%s \n",adr[i]);
	}
	fclose(st);
	li=fopen("mil.txt","w");

	for(i=0;i<10;i++)
	{	
		strcpy(captal[i],adr[i]);
		strupr(captal[i]);
	
		if(strcmp(captal[i],"KATHMANDU")==0)
		{
			strcpy(adr[i],"Kastamandap");
		}
	//	else
	//	{
			strcpy(adr2[i],adr[i]);
			fprintf(li,"%s \n",adr2[i]);
			printf(" %s",adr2[i]);
	//	}
	}
	fclose(li);
//	strcpy(fn,"st");
//	if(remove(fn)==0)
//	{
//		printf("file deleted");
//	}
//	else
//	{
//		printf("error");
//	}
//	strcpy(rn,"li");
//	if(rename(rn,fn)==0)
//	{
//		printf("kjhdfg");
//	}
//	else
//	{
//		printf("shfgl");
//	}
	printf("if there was kathmandu made Kastamandap.");
	getch();
}
