//Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,i,GCD;
	cout<<"\nEnter the num1 to find GCD = ";
	cin>>num1;
	cout<<"\nEnter the num2 to find GCD = ";
	cin>>num2;
	
	int temp = num1>num2 ? num2:num1;
	
	for(i=1;i<=temp;i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			GCD = i;
		}
	}
	cout<<"\nGCD of "<<num1<<" and "<<num2<<" is = "<<GCD;
	return 0;
}
