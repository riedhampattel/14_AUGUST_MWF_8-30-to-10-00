//Write a c++ program to delete an element from an array, take element number from the user.
#include<iostream>
using namespace std;
int main()
{
	int size,index,element,i,a[100],count=0;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in a["<<i<<"] = ";
		cin>>a[i];
	}
	cout<<"\nEnter an element you want to delete = ";
	cin>>element;
	
	for(i=0;i<size;i++)
	{
		if(element==a[i])
		{
			count++;
			index = i;
			break;
		}
	}
	if(count==0)
	{
		cout<<"\nThis element is not present in an array";
	}
	else
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
	return 0;
}
