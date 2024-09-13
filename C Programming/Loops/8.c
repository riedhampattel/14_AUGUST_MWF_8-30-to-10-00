//Write a c program to take one input from the user and check whether the number is Armstrong or not?
#include<stdio.h>
#include<math.h>
int main()
{
	int num,i,digit=0,rem,sum=0,power;
	
	printf("\nEnter the value of num = ");
	scanf("%d",&num);
	int temp = num;
	int copy = num;
	
	while(num!=0)
	{
		num = num / 10;
		digit++;
	}
	for(i=1;i<=digit;i++)
	{
		rem = temp%10;
		power = pow(rem,digit);
		sum = sum + power;
		temp = temp/10;
	}
	
	if(sum==copy)
	{
		printf("\n%d is an armstrong number",copy);
	}
	else
	{
		printf("\n%d is not an armstrong number",copy);
	}
	
	return 0;
}
