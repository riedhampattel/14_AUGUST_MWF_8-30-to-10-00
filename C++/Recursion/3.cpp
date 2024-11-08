//Write a c++ program to find sum of n natural numbers using recursion
#include<iostream>
using namespace std;
int sum(int num)
{
	if(num!=0)
	{
		return num + sum(num-1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int num;
	cout<<"\nEnter the number = ";
	cin>>num;
	int ans = sum(num);
	cout<<"\nThe sum is = "<<ans;
	return 0;
}
