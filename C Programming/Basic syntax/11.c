#include<stdio.h>
int main()
{
	int num1,num2,ans;
	
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	ans = num1 + num2;
	printf("\nThe addition of %d and %d is %d",num1,num2,ans);
	
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	printf("\nThe subtraction of %d and %d is %d",num1,num2,num1-num2);
	
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	printf("\nThe multiplication of %d and %d is %d",num1,num2,num1*num2);
	
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	printf("\nThe division of %d and %d is %d",num1,num2,num1/num2);
	
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	printf("\nThe remainder of %d and %d is %d",num1,num2,num1%num2);
	
	return 0;
}
