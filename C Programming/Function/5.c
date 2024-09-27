#include<stdio.h>
int arrsum(int arr[],int size);
int main()
{
	int size,i;
	int a[100];
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	int sum = arrsum(a,size);
	printf("\nThe addition of an array elements = %d",sum);
	return 0;
}
int arrsum(int arr[],int size)
{
	int i,sum=0;
	printf("\nArray = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
		sum = sum + arr[i];
	}
	return sum;
}
