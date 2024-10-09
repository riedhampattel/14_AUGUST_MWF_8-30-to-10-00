#include<stdio.h>
void upper(char str1[])
{
	int i;
	for(i=0;str1[i]!='\0';i++)
	{
		str1[i] = toupper(str1[i]);
	}
	printf("\nStr1 in Upper case = %s",str1);
}
void lower(char str2[])
{
	int i;
	for(i=0;str2[i]!='\0';i++)
	{
		str2[i] = tolower(str2[i]);
	}
	printf("\nStr2 in Lower case = %s",str2);
}
int main()
{
	char str1[100];
	char str2[100];
	
	printf("\nEnter the value of str1 = ");
	gets(str1);
	printf("\nEnter the value of str2 = ");
	gets(str2);
	
	printf("\nOriginal value of str1 = %s",str1);
	printf("\nOriginal value of str2 = %s",str2);
	
	upper(str1);
	lower(str2);
	return 0;
}
