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
	
	strupr(str1);
	
	printf("\nValue of str1 after using strupr() function = %s",str1);
	printf("\nValue of str2 after using strlwr() function = %s",strlwr(str2));
	return 0;
}