#include<stdio.h>
int length(char str[])
{
	int cnt=0,i;
	for(i=0;str[i]!='\0';i++)
	{
		cnt++;
	}
	return cnt;
}
int main()
{
	char str[100];
	printf("\nEnter the value in str = ");
	gets(str);
	
	printf("\nOriginal str = %s",str);
	
	int len = length(str);
	
	printf("\nLength of str = %d",len);
	return 0;
}
