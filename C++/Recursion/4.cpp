//Write a c++ program to find addition of all the elements present in an array using recursion
#include<iostream>
using namespace std;
int arrsum(int arr[],int size)
{
	if(size>0)
	{
		return arr[size-1] + arrsum(arr,size-1);
	}	
	else
	{
		return 0;
	}
}
int main()
{
	int a[100],size,i;
	cout<<"\nEnter the size of an array = ";
	cin>>size;//5
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter an element in a["<<i<<"] = ";
		cin>>a[i];
	}
	int ans = arrsum(a,size);
	cout<<"\nThe sum of all the elements of an array is = "<<ans;
	return 0;
}
