#include<stdio.h>
void copy(char str1[],char str2[])
{
	int i;
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i] = str1[i];
	}
	printf("\nValue of str1 after using copy() function = %s",str1);
	printf("\nValue of str2 after using copy() function = %s",str2);
}
int main()
{
	char str1[100];
	char str2[100];
	printf("\nEnter the str1 = ");
	gets(str1);
	
	printf("\nOriginal str1 = %s",str1);
	printf("\nOriginal str2 = %s",str2);
	
	copy(str1,str2);
	return 0;
}
