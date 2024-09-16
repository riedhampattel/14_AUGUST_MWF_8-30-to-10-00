/*Write a c program to take row numbers from the user and print the following pyramid pattern.
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
#include<stdio.h>
int main()
{
	int row,i,j;
	printf("\nEnter the row count = ");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	
	return 0;
}
