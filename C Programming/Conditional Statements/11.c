#include<stdio.h>
int main()
{
	char ch;
	
	printf("\nEnter the value of ch = ");
	scanf(" %c",&ch);
	
	if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
	{
		printf("\n%c is an alphabet",ch);
	}
	else if(ch>=48 && ch<=57)
	{
		printf("\nInput is a number");
	}
	else
	{
		printf("\n%c is a special character",ch);
	}
	
	return 0;
}
