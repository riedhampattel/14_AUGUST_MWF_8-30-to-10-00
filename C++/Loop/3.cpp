/*
Write a program in C++ to find the last prime number that occurs before the entered number.
input := 50
output := 47
*/
#include<iostream>
using namespace std;
int main()
{
	int num,i,j,prime;
	cout<<"\nEnter the number = ";
	cin>>num;
	
	for(i=1;i<num;i++)
	{
		int count = 0;
		for(j=2;j<i/2;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==0)
		{
			prime = i;
		}
	}
	cout<<"\nLast prime number = "<<prime;
	return 0;
}
