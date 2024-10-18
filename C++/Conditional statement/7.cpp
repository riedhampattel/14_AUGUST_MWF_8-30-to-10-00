//Write a c++ program to swap values of 2 variables using third variable.
#include<iostream>
using namespace std;
int main()
{
	int num1=10;
	int num2=20;
	int temp;
	
	cout<<"\nValue of num1 before swapping = "<<num1;
	cout<<"\nValue of num2 before swapping = "<<num2;
	
	temp = num1;
	num1 = num2;
	num2 = temp; 
	
	cout<<"\nValue of num1 after swapping = "<<num1;
	cout<<"\nValue of num2 after swapping = "<<num2;
	return 0;
}
