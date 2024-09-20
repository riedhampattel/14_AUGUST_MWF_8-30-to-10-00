#include<stdio.h>
int main()
{
	int a[100],size,i;
	
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	//input
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	//output
	printf("\nArray a = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
