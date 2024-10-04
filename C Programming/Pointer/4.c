#include<stdio.h>
int main()
{
	int a=10,b=20,temp;
	int *ptr1=&a,*ptr2=&b,*ptr3=&temp;
	
	printf("\nValue of a before swapping = %d",*ptr1);
	printf("\nAddress of a before swapping = %p",ptr1);
	printf("\nValue of b before swapping = %d",*ptr2);
	printf("\nAddress of b before swapping = %p",ptr2);
	
	ptr3 = ptr1;
	ptr1 = ptr2;
	ptr2 = ptr3;
	
	printf("\nValue of a after swapping = %d",*ptr1);
	printf("\nAddress of a after swapping = %p",ptr1);
	printf("\nValue of b after swapping = %d",*ptr2);
	printf("\nAddress of b after swapping = %p",ptr2);
	
	return 0;
}
