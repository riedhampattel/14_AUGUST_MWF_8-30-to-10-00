#include<stdio.h>
//with return type without argument
float div();
int main()
{
	printf("\nThe division is = %.2f",div());
	return 0;
}
float div()
{
	int num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	return num1/num2;
}
