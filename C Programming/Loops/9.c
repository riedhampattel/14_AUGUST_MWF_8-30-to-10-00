//Write a c program to take one input from the user and check whether the number is perfect or not?
#include<stdio.h>
int main()
{
	int num,i,sum=0;
	printf("\nEnter the value of num = ");
	scanf("%d",&num);
	
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum = sum + i;
		}
	}
	if(num==sum)
	{
		printf("\n%d is a perfect number",num);
	}
	else
	{
		printf("\n%d is not a perfect number",num);
	}
	return 0;
}
