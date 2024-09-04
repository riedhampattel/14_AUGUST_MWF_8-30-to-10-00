#include<stdio.h>
int main()
{
	char ch;
	
	printf("\nEnter the value of ch = ");
	scanf(" %c",&ch);
	
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	{
		printf("\n%c is an alphabet",ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("\nInput is a number");
	}
	else
	{
		printf("\n%c is a special character",ch);
	}
	
	return 0;
}
