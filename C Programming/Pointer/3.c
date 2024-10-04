#include<stdio.h>
int main()
{
	int arr[100],size,i;
	int *ptr = &arr;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<size;i++)
	{
		printf("\nAddress of element %d = %p",i+1,&arr[i]);
	}
	
	printf("\n");
	
	for(i=0;i<size;i++)
	{
		printf("\nValue of element %d = %d",i+1,*(ptr+i));
	}
	return 0;
}
