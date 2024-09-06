//Write a c program to take a number from the user and check whether it is positive, negative or nuetral
#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter the value of num = ");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("\n%d is the positive number",num);
	}
	else if(num<0)
	{
		printf("\n%d is the negative number",num);
	}
	else
	{
		printf("\n%d is the neutral number",num);
	}
	
	return 0;
}
