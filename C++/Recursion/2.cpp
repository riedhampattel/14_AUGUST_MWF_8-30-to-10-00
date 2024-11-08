//Write a c++ program to find factorial of given number using recursion
#include<iostream>
using namespace std;
int fact(int num)
{
	if(num!=0)
	{
		return num * fact(num-1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int num;
	cout<<"\nEnter the number = ";
	cin>>num;
	int ans = fact(num);
	cout<<"\nFactorial of "<<num<<" is = "<<ans;
	return 0;
}
