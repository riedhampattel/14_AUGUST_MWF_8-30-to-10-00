#include<stdio.h>
int main()
{
	int n = 1;
	up :
	printf("\nHello %d times",n);
	n++;
	if(n==6)
	{
		goto down;
	}
	goto up;
	down :
	return 0;
}
