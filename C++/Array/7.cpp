//Write a c++ program to delete an element from an array, take index number from the user.  
#include<iostream>
using namespace std;
int main()
{
	int size,index,i,a[100];
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in a["<<i<<"] = ";
		cin>>a[i];
	}	
	cout<<"\nEnter the index number which you want to delete = ";
	cin>>index;
	
	if(index>=0 && index<size)
	{
		for(i=index;i<size-1;i++)
		{
			a[i] = a[i+1];
		}
		cout<<"\nArray a = ";
		for(i=0;i<size-1;i++)
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
