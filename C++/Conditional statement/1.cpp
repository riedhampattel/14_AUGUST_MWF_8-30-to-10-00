//Write a C++ program to find whether a given year is a leap year or not.
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"\nEnter the year = ";
	cin>>year;
	
	if(year%4==0)
	{
		cout<<"\nThis is a leap year";
	}
	else
	{
		cout<<"\nThis is not a leap year";
	}
	return 0;
}
