#include<stdio.h>
void reverse(char str[])
{
	int i,len=0;
	char rev[100];
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	for(i=0;str[i]!='\0';i++)
	{
		rev[len-1] = str[i];
		len--;
	}
	printf("\nReversed string = ");
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",rev[i]);
	}
}
int main()
{
	char str[100];
	printf("\nEnter the value of str = ");
	gets(str);
	
	printf("\nOriginal value of str = %s",str);
	
	reverse(str);
	return 0;
}
