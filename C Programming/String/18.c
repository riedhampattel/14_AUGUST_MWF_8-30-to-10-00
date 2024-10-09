#include<stdio.h>
int compare(char str1[],char str2[])
{
	int i,count=0;
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]!=str2[i])
		{
			count++;
		}
	}
	if(count==0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
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
	
	int result = compare(str1,str2);
	
	if(result==0)
	{
		printf("\nBoth strings are same");
	}
	else
	{
		printf("\nBoth strings are different");
	}
	return 0;
}
