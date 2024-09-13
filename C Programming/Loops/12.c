//Write a c program to take terms from the user and print fibonaci series.
#include<stdio.h>
int main()
{
	int terms,num1=0,num2=1,num3,i;
	printf("\nEnter the value of terms = ");
	scanf("%d",&terms);
	
	printf("\nFibonnaci series = %d %d",num1,num2);

	for(i=1;i<=terms-2;i++)
	{
		num3 = num1 + num2;
		printf(" %d",num3);
		num1 = num2;
		num2 = num3;
	}
	
	
	return 0;
}
