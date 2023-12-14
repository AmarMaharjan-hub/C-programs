#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	FILE *ale;
	char address[20],add[20];
	printf("enter your address:");
	scanf("%s",address);
	ale=fopen("adres.txt","w");
	fprintf(ale,"%s",address);
	fclose(ale);
	ale=fopen("adres.txt","r");
	fscanf(ale,"%s",add);
	fclose(ale);
	printf("the address you entered in the file is %s",add);
	getch();
}
