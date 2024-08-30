#include<stdio.h>
int main()
{
	int a = 10;
	int b = a;
	printf("\nValue of a after pre decrement = %d",--a);
	printf("\nValue of b after post decrement = %d",b--);
	printf("\nValue of b after post decrement = %d",b);
	return 0;
}
