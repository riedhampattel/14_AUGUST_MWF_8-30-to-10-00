#include<stdio.h>
int main()
{
	int num1,num2;
	float result;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	result = (float)num1/(float)num2;
	printf("\nThe division of %d and %d is %.2f",num1,num2,result);
	return 0;
}
