//Write a c++ program to insert an element in unsorted array, take index number and element from the user. 
#include<iostream>
using namespace std;
int main()
{
	int size,index,element,i,a[100];
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in a["<<i<<"] = ";
		cin>>a[i];
	}
	cout<<"\nEnter the index number on which you want to insert an element = ";
	cin>>index;
	cout<<"\nEnter the element which you want to insert in an array = ";
	cin>>element;
	
	if(index>=0 && index<=size)
	{
		for(i=size-1;i>=index;i--)
		{
			a[i+1] = a[i];
		}
		a[index] = element;
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
