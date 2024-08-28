#include<stdio.h>
int main()
{
	int num1 = 10,num2 = 20,num3 = 30;
	long int ln1 = 45000,ln2 = 55000, ln3 = 65000;
	float f1 = 54.7,f2 = 85.65,f3 = 45.632;
	char ch1 = '@',ch2 = 'A',ch3 = '4001';
	
	printf("Integer data type :=");
	printf("\nValue of num1 = %d",num1);
	printf("\nValue of num2 = %d",num2);
	printf("\nValue of num3 = %d",num3);
	
	printf("\nLong Integer data type :=");
	printf("\nValue of ln1 = %ld",ln1);
	printf("\nValue of ln2 = %ld",ln2);
	printf("\nValue of ln3 = %ld",ln3);
	
	printf("\nFloat data type :=");
	printf("\nValue of f1 = %.2f",f1);
	printf("\nValue of f2 = %.3f",f2);
	printf("\nValue of f3 = %.1f",f3);
	
	printf("\nCharacter data type :=");
	printf("\nValue of ch1 = %c",ch1);
	printf("\nValue of ch2 = %c",ch2);
	printf("\nValue of ch3 = %c",ch3);
	
	return 0;
}
