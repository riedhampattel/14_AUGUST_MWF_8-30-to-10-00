//Write a c++ program to take index number as an input from the user and print the element present on that index number.
#include<iostream>
using namespace std;
int main()
{
	int size,a[100],i,index;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in a["<<i<<"] = ";
		cin>>a[i];
	}
	cout<<"\nEnter the index number = ";
	cin>>index;
	if(index<size && index>=0)
	{
		cout<<"\nElement on "<<index<<" is = "<<a[index];
	}
	else
	{
		cout<<"\nInvalid index number";
	}
	return 0;
}
