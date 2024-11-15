#include<iostream>
using namespace std;
int main()
{
	string food = "Pizza";
	string &item = food;
	item = "Burger";
	cout<<"Value of food = "<<food;
	cout<<"\nAddress of food = "<<&food<<endl;
	cout<<"\nValue of item = "<<item;
	cout<<"\nAddress of item = "<<&item;
	return 0;
}
