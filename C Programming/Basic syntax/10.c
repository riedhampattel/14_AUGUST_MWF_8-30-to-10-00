//swap two values using third variable
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c;
	
	printf("\nValue of a before swapping = %d",a);
	printf("\nValue of b before swapping = %d",b);
	
	c = a;
	a = b;
	b = c;

	printf("\nValue of a after swapping = %d",a);	
	printf("\nValue of b after swapping = %d",b);
	
	return 0;
}
