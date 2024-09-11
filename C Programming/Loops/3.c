//Write a c program to take 2 numbers from the user and if user enteres number 1 bigger than number 2 then print all the numbers in reverse order else print in normal order
#include<stdio.h>
int main()
{
	int start,end,i;
	printf("\nEnter the value of start = ");
	scanf("%d",&start);
	printf("\nEnter the value of end = ");
	scanf("%d",&end);
	
	if(start>end)
	{
		for(i=start;i>=end;i--)
		{
			printf("%d ",i);
		}
	}
	else
	{
		for(i=start;i<=end;i++)
		{
			printf("%d ",i);
		}
	}
	
	return 0;
}
