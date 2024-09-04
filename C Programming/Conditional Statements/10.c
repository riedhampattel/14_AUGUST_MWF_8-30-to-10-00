#include<stdio.h>
int main()
{
	char ch;
	
	printf("\nEnter the value of ch = ");
	scanf(" %c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("\n%c is in capital case",ch);
	}
	else if(ch>='a' && ch<='z')
	{
		printf("\n%c is in lower case",ch);
	}
	else
	{
		printf("\n%c is not an alphabet",ch);
	}
	
	return 0;
}
