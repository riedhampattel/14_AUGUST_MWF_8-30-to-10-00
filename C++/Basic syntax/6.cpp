//Write a c++ program to swap values of 2 variables without using third variable(use + and - operators).
#include<iostream>
using namespace std;
int main()
{
	int num1=10;
	int num2=20;
	
	cout<<"\nValue of num1 before swapping = "<<num1;
	cout<<"\nValue of num2 before swapping = "<<num2;
	
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	
	cout<<"\nValue of num1 after swapping = "<<num1;
	cout<<"\nValue of num2 after swapping = "<<num2;
	return 0;
}
