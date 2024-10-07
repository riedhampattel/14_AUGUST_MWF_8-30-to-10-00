#include<stdio.h>
int main()
{
	char str[100];
	printf("\nEnter the string = ");
	fgets(str,100,stdin);
	printf("\nString = %s",str);
	return 0;
}
