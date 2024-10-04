#include<stdio.h>
int main()
{
	int num = 10;
	int *ptr =  &num;
	printf("\nValue of num = %d",num);
	printf("\nValue of num = %d",*ptr);
	printf("\nAddress of num = %p",ptr);
	printf("\nAddress of num = %p",&num);
	return 0;
}
