//Write a c++ program to insert an element in unsorted array, take position number and element from the user. 
#include<iostream>
using namespace std;
int main()
{
	int size,position,element,i,a[100];
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in a["<<i<<"] = ";
		cin>>a[i];
	}
	cout<<"\nEnter the position number on which you want to insert an element = ";
	cin>>position;
	cout<<"\nEnter the element which you want to insert in an array = ";
	cin>>element;
	
	if(position>=1 && position<=size+1)
	{
		for(i=size-1;i>=position-1;i--)
		{
			a[i+1] = a[i];
		}
		a[position-1] = element;
		cout<<"\nArray a after insering an element = ";
		for(i=0;i<=size;i++)
		{
			cout<<a[i]<<" ";
		}
	}
	else
	{
		cout<<"\nInvalid index number";
	}
	return 0;
}

