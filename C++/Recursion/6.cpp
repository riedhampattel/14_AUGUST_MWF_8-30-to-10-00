//Write a c++ program to find nth element of fibonnaci series using recursion
#include<iostream>
using namespace std;
int fibo(int num)
{
	if(num==0)
	{
		return 0;
	}
	else if(num==1)
	{
		return 1;
	}
	else
	{
		return fibo(num-1) + fibo(num-2);
	}
}
int main()
{
	int num;
	cout<<"\nEnter the value of num = ";
	cin>>num;
	int ans = fibo(num);
	cout<<"\nnth element of an series = "<<ans;
	return 0;
}
