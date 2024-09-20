//Write a c program to take size of an array and elements from the user and print array in reverse order.
#include<stdio.h>
int main()
{
	int a[100],i,size;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nArray a in reverse order = ");
	for(i=size-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
