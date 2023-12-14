#include<stdio.h>
void main()
{
	int x=5,y=0,a=5,b=0;
	y=x++ + ++x;/*here the value of y is 12 because x++ returns 5 then add it if x is used again, so infirst condition y=5.
	Again ++a immediately increases the value of a, so insecond condiotion the x++ has already increased its value to 6 so 
	now the ++a increases the 6 to 7. so basically the operation is 5+7. 
	Again x is calculated by adding 1 in first operator and adding 1 in second operator.*/
	printf("%d",x);
	printf("\n%d",y);
	/*b=++a + ++a + a-- + a++ + --a;*/
	b=a++ + ++a + ++a;
	printf("\n%d",a);
	printf("\n%d",b);
}
