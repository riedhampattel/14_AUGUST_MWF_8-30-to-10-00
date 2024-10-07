#include<stdio.h>
int main()
{
	char string[100] = "Hello world!";
	int i;
//	printf("%c",string[6]);
//	printf("\n%c",string[0]);
	for(i=0;string[i]!='\0';i++)
	{
		printf("%c",string[i]);
	}
	return 0;
}
