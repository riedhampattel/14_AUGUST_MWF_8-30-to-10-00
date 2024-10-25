//Write a c++ program to take element from the user as an input from the user and print the index number of that element.
#include<iostream>
using namespace std;
int main()
{
	int size,a[100],element,i,count=0;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in a["<<i<<"] = ";
		cin>>a[i];
	}
	cout<<"\nEnter the element = ";
	cin>>element;
	for(i=0;i<size;i++)
	{
		if(element==a[i])
		{
			count++;
		}
	}
	if(count!=0)
	{
		for(i=0;i<size;i++)
		{	
			if(element==a[i])
			{
				cout<<"\n"<<element<<" is present on index number = "<<i;
			}
		}		
	}
	else
	{
		cout<<"\nElement is not present in an array";
	}
	return 0;
}
