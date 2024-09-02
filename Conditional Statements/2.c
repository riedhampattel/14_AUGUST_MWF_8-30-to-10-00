#include<stdio.h>
#include<math.h>
int main()
{
	int num1,num2;
	char choice;
	
	printf("\n'+'->Addition");
	printf("\n'-'->subtraction");
	printf("\n'*'->Multiplication");
	printf("\n'/'->Division");
	printf("\n'r'->Remainder");
	printf("\nEnter your choice = ");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case '+' :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe addition of %d and %d is %d",num1,num2,num1+num2);
		break;
		case '-' :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe subtraction of %d and %d is %d",num1,num2,num1-num2);
		break;
		case '*' :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe multiplication of %d and %d is %d",num1,num2,num1*num2);
		break;
		case '/' :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe division of %d and %d is %.2f",num1,num2,(float)num1/(float)num2);
		break;
		case 'r' :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe remainder of %d and %d is %d",num1,num2,num1%num2);
		break;
		default : printf("\nInvalid input!");
	}
	
	return 0;
}
