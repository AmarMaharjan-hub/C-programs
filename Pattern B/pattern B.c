/*			Pattern B
				*
			   ***
			  *****
			 *******
			*********
			
			pattern B.1
			*
		   **
	      ***
		 ****
		*****
		
			pattern B.2
			
			*
			**
			***
			****
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
		for(j=1;j<=i;j++)	//For the pattern B.1
		{
			printf("*");
		}
		for(j=2;j<=i;j++)	//For the pattern B.2
		{
			printf("*");
		}
		printf("\n");
	}
}
