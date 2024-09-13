//Write a c program to take 2 numbers from the user and print all the prime numbers and not prime numbers between them.(Use switch case)
#include<stdio.h>
int main()
{
	int start,end,i,choice,j,count;
	printf("\nEnter the starting value = ");
	scanf("%d",&start);
	printf("\nEnter the ending value = ");
	scanf("%d",&end);
	
	printf("\n1.Prime numbers");
	printf("\n2.Not Prime numbers");
	printf("\nEnter the choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\nPrime numbers = ");
			for(i=start;i<=end;i++)
			{
				count = 0;
				for(j=2;j<i;j++)
				{
					if(i%j==0)
					{
						count++;
					}
				}
				if(count==0)
				{
					printf("%d ",i);
				}
			}
		break;
		case 2:
			printf("\nNot prime numbers = ");
			for(i=start;i<=end;i++)
			{
				count = 0;
				for(j=2;j<i;j++)
				{
					if(i%j==0)
					{
						count++;
					}
				}
				if(count!=0)
				{
					printf("%d ",i);
				}
			}
		break;
		default : printf("\nInvalid input!");
	}
	
	return 0;
}
