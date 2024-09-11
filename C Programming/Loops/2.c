//Write a c program to take 2 numbers from the user and print all the numbers between those numbers
#include<stdio.h>
int main()
{
	int start,end,i;
	printf("\nEnter the value of start = ");
	scanf("%d",&start);
	printf("\nEnter the value of end = ");
	scanf("%d",&end);
	
	for(i=start;i<=end;i++)
	{
		printf("%d ",i);
	}
	
	return 0;
}
