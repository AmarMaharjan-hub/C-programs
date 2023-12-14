/*			Pattern A
		*
		@@
		##@
*/
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==1)
			{
				printf("*");
			}
			else if(i==2)
				{
					printf("@");
				}
				else if(i==3&&j==3)
					{
						printf("@");
					}
					else{
						printf("#");
					}
		}
		printf("\n");
	}
}
