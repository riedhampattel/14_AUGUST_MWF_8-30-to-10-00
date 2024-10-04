#include<stdio.h>
int main()
{
	int arr[5] = {1,2,3,4,5};
	int *ptr = &arr;
	printf("\nAddress of array = %p",ptr);
	printf("\nAddress of element 1 = %p",&arr[0]);
	printf("\nAddress of element 2 = %p",&arr[1]);
	printf("\nAddress of element 3 = %p",&arr[2]);
	printf("\nAddress of element 4 = %p",&arr[3]);
	printf("\nAddress of element 5 = %p",&arr[4]);
	
	printf("\nValue of element 1 = %d",*(ptr+0));
	printf("\nValue of element 2 = %d",*(ptr+1));
	printf("\nValue of element 3 = %d",*(ptr+2));
	printf("\nValue of element 4 = %d",*(ptr+3));
	printf("\nValue of element 5 = %d",*(ptr+4));
	return 0;
}
