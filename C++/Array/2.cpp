//Write a c++ program to take 2 arrays from the user and merge them in third array
#include<iostream>
using namespace std;
int main()
{
	int a[100],b[100],c[200];
	int sizea,sizeb,i;
	cout<<"\nEnter the size of an array a = ";
	cin>>sizea;
	for(i=0;i<sizea;i++)
	{
		cout<<"\nEnter the element in a["<<i<<"] = ";
		cin>>a[i];
		c[i] = a[i];
	}
	cout<<"\nEnter the size of an array b = ";
	cin>>sizeb;
	for(i=0;i<sizeb;i++)
	{
		cout<<"\nEnter the element in b["<<i<<"] = ";
		cin>>b[i];
	}
	cout<<"\nArray a = ";
	for(i=0;i<sizea;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nArray b = ";
	for(i=0;i<sizeb;i++)
	{
		cout<<b[i]<<" ";
	}
	
	for(i=0;i<sizeb;i++)
	{
		c[sizea] = b[i];
		sizea++;
	}
	cout<<"\nArray c = ";
	for(i=0;i<sizea;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}
