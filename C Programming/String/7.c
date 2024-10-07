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
	
	int length = strlen(str1);
	
	printf("\nLength of str1 = %d",length);
	printf("\nLength of str2 = %d",strlen(str2));
	return 0;
}
