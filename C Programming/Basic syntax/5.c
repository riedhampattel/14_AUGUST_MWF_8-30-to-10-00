#include<stdio.h>
int main()
{
	int a = 10;
	int b = a;
	printf("\nValue of a after pre increment = %d",++a);
	printf("\nValue of b after post increment = %d",b++);
	printf("\nValue of b after post increment = %d",b);
	return 0;
}
