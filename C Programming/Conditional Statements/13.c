#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter the alphabet = ");
	scanf(" %c",&ch);
	
	if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("\n%c is a vowel",ch);
	}
	else
	{
		printf("\n%c is a consonant",ch);
	}
	
	return 0;
}
