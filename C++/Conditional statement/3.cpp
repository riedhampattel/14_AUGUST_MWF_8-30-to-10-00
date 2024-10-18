/*
Write a C++ program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
Test Data : 7 9
Expected Output :
The coordinate point (7,9) lies in the First quadrant.
*/
#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"\nEnter the value of x = ";
	cin>>x;
	cout<<"\nEnter the value of y = ";
	cin>>y;
	
	if(x==0 && y==0)
	{
		cout<<"\nThis is on origin point";
	}
	else if(x>0 && y>0)
	{
		cout<<"The coordinate point ("<<x<<","<<y<<") lies in the First quadrant.";
	}
	else if(x<0 && y>0)
	{
		cout<<"The coordinate point ("<<x<<","<<y<<") lies in the Second quadrant.";
	}
	else if(x<0 && y<0)
	{
		cout<<"The coordinate point ("<<x<<","<<y<<") lies in the Third quadrant.";
	}
	else
	{
		cout<<"The coordinate point ("<<x<<","<<y<<") lies in the Fourth quadrant.";
	}
	return 0;
}
