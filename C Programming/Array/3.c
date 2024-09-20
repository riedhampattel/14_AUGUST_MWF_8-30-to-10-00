#include<stdio.h>
int main()
{
	int a[5],i;
	
	//input
	for(i=0;i<5;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	//output
	printf("\nArray a = ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
