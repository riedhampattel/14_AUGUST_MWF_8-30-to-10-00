#include<stdio.h>
int main()
{
	int age;
	printf("\nEnter the age = ");
	scanf("%d",&age);
	
	switch(age>18)
	{
		case 1 :
			printf("\nYou are eligible for voting");
		break;
		case 0 :
			printf("\nYou are not eligible for voting");
		break;
	}
	
	return 0;
}
