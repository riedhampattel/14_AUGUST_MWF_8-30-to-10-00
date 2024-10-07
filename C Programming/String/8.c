#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	char str2[100];
	
	printf("\nEnter the value of str1 = ");
	gets(str1);
	printf("\nEnter the value of str2 = ");
	gets(str2);
	
	printf("\nOriginal str1 = %s",str1);
	printf("\nOriginal str2 = %s",str2);
	
	strrev(str1);
	strrev(str2);
	
	printf("\nReversed string = %s",str1);
	printf("\nReversed string = %s",str2);
	return 0;
}
