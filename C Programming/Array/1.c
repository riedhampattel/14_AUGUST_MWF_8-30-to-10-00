#include<stdio.h>
int main()
{
	int a[5] = {101,102,103,104,105};
	float b[5] = {56.32,78.56};
	char c[5] = {'A','B','C','D','E'};

	printf("\nInt array = ");
	printf("%d ",a[0]);
	printf("%d ",a[1]);
	printf("%d ",a[2]);
	printf("%d ",a[3]);
	printf("%d ",a[4]);
	
	printf("\nFloat array = ");
	printf("%.2f ",b[0]);
	printf("%.2f ",b[1]);
	
	printf("\nChar array = ");
	printf("%c ",c[0]);
	printf("%c ",c[1]);
	printf("%c ",c[2]);
	printf("%c ",c[3]);
	printf("%c ",c[4]);
	
	return 0;
}
