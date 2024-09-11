//Write a c program to take one input from the user and check whether the number is prime or not?
#include<stdio.h>
int main()
{
	int num,count=0,i;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("\n%d is the prime number",num);
	}
	else
	{
		printf("\n%d is not the prime number",num);
	}
	
	return 0;
}
