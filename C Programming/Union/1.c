#include<stdio.h>
union Demo
{
	int x;
	char ch;
};
int main()
{
	union Demo u1;
	u1.x=68;
	printf("\nValue of x = %d",u1.x);
	printf("\nValue of ch = %c",u1.ch);
	u1.ch='A';
	printf("\nValue of x = %d",u1.x);
	printf("\nValue of ch = %c",u1.ch);
	
	return 0;
}
