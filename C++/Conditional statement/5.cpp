//Write a C++ program to check whether a triangle can be formed with the given values for the angles.(additon of all angles should be 180 deg)
#include<iostream>
using namespace std;
int main()
{
	int a1,a2,a3;
	cout<<"\nEnter the value of angle 1 = ";
	cin>>a1;
	cout<<"\nEnter the value of angle 2 = ";
	cin>>a2;
	cout<<"\nEnter the value of angle 3 = ";
	cin>>a3;
	
	if(a1+a2+a3==180)
	{
		cout<<"\nWith given values of angle triangle is possible";
	}
	else
	{
		cout<<"\nWith given values of angle triangle is not possible";
	}
	return 0;
}
