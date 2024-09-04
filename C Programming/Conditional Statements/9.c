#include<stdio.h>
int main()
{
	char ch;
	
	printf("\nEnter the value of ch = ");
	scanf(" %c",&ch);
	
	if(ch>=65 && ch<=90)
	{
		printf("\n%c is in capital case",ch);
	}
	else if(ch>=97 && ch<=122)
	{
		printf("\n%c is in lower case",ch);
	}
	else
	{
		printf("\n%c is not an alphabet",ch);
	}
	
	return 0;
}
