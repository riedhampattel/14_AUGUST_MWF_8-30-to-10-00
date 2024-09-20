//Write a c program to take size of an array and elements from the user and print the sum and average of all the elements
#include<stdio.h>
int main()
{
	int a[100],size,i,sum=0;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}

	for(i=0;i<size;i++)
	{
		sum = sum + a[i];
	}
	
	printf("\nArray a = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nAddition of all the elements is = %d",sum);
	printf("\nAverage of all the elements is = %.2f",(float)sum/(float)size);
	return 0;
}
