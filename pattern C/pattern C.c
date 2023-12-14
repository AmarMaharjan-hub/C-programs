/*			Pattern C
				*
			   ***
			  *****
			 *******
			*********
			 *******
			  *****
			   ***
			    *
*/
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)	//For white spaces.
		{
			printf(" ");
		}
		for(j=1;j<=i*2-1;j++)
		{						
			printf("*");
		}
		
		printf("\n");
	}
	for(i=4;i>=1;i--)
	{
		for(j=4;j>=i;j--)	//For white spaces.
		{
			printf(" ");
		}	
		for(j=1;j<=i*2-1;j++)
		{						
			printf("*");
		}

		printf("\n");
	}
}
