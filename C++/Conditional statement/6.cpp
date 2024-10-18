/*
Write a C++ program to check whether a character is an alphabet, digit or special character.
Test Data :
@
Expected Output :
This is a special character.
*/
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"\nEnter the character = ";
	cin>>ch;
	
	if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
	{
		cout<<"\nThis is an alphabet";
	}
	else if(ch>=48 && ch<=57)
	{
		cout<<"\nThis is a number";
	}
	else
	{
		cout<<"\nThis is a special character";
	}
	return 0;
}
