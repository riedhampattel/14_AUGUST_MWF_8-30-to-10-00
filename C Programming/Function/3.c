#include<stdio.h>
//without return type with argument
void multi(int a,int b);
int main()
{
	int num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	multi(num1,num2);
	return 0;
}
void multi(int a,int b)
{
	int ans;
	ans = a * b;
	printf("\nThe multiplication of %d and %d is = %d",a,b,ans);
}
