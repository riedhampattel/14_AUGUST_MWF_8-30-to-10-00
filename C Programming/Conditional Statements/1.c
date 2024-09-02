#include<stdio.h>
#include<math.h>
int main()
{
	int num1,num2,choice;
	
	printf("\n1.Addition");
	printf("\n2.subtraction");
	printf("\n3.Multiplication");
	printf("\n4.Division");
	printf("\n5.Remainder");
	printf("\n6.Square root");
	printf("\n7.Power");
	printf("\n8.Square");
	printf("\n9.Cube");
	printf("\nEnter your choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe addition of %d and %d is %d",num1,num2,num1+num2);
		break;
		case 2 :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe subtraction of %d and %d is %d",num1,num2,num1-num2);
		break;
		case 3 :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe multiplication of %d and %d is %d",num1,num2,num1*num2);
		break;
		case 4 :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe division of %d and %d is %.2f",num1,num2,(float)num1/(float)num2);
		break;
		case 5 :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe remainder of %d and %d is %d",num1,num2,num1%num2);
		break;
		case 6 :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			int result = sqrt(num1);
			printf("\nSquare root of %d is %d",num1,result);
		break;
		case 7 :
			printf("\nEnter the value of base = ");
			scanf("%d",&num1);
			printf("\nEnter the value of exponent = ");
			scanf("%d",&num2);
			result = pow(num1,num2);
			printf("\nPower of base %d and exponent %d is %d",num1,num2,result);
		break;
		case 8 :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nThe square of %d is %d",num1,num1*num1);
		break;
		case 9 :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nThe cube of %d is %d",num1,num1*num1*num1);
		break;
		default : printf("\nInvalid input!");
	}
	
	return 0;
}
