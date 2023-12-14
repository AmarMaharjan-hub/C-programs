/*			Pattern B
				*
			   ***
			  *****
			 *******
			*********
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
		for(j=1;j<=i*2-1;j++)	//For the pattern B. here 1*2-1=1,  2*2-1=3,  3*2-1=5 ...and  so on.
		{						//Which is the required no of stars needed for the star at each level.
			printf("*");
		}
		printf("\n");
	}
}
