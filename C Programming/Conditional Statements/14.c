//Write a c program to take two numbers from the user and display biggest number using ternary operator
#include<stdio.h>
int main()
{
	int n1,n2;
	printf("\nEnter the value of n1 = ");
	scanf("%d",&n1);
	printf("\nEnter the value of n2 = ");
	scanf("%d",&n2);
	
	int big = n1>n2 ? n1:n2;
	
	printf("\n%d is the biggest number",big);
	
	return 0;
}
