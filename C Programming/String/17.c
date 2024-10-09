#include<stdio.h>
void concat(char str1[],char str2[],char str3[])
{
	int i,length=0;
	for(i=0;str1[i]!='\0';i++)
	{
		str3[i] = str1[i];
		length++;
	}
	for(i=0;str2[i]!='\0';i++)
	{
		str3[length] = str2[i];
		length++;
	}
	printf("\nValue of concated string = ");
	for(i=0;str3[i]!='\0';i++)
	{
		printf("%c",str3[i]);
	}
}
int main()
{
	char str1[100];
	char str2[100];
	char str3[200];
	
	printf("\nEnter the str1 = ");
	gets(str1);
	printf("\nEnter the str2 = ");
	gets(str2);
	
	printf("\nOriginal value of str1 = %s",str1);
	printf("\nOriginal value of str2 = %s",str2);
	
	concat(str1,str2,str3);
	return 0;
}
