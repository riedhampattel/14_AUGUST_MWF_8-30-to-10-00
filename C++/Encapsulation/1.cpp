//Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.
#include<iostream>
using namespace std;
class Person
{
	private :
		string name,country;
		int age;
	public :
		void set(string n,int a,string c)
		{
			name = n;
			age = a;
			country = c;
		}
		void get()
		{
			cout<<"\nName = "<<name;
			cout<<"\nAge = "<<age;
			cout<<"\nCountry = "<<country<<endl;
		}
};
int main()
{
	Person p1;
	p1.set("Rohan",25,"India");
	Person p2;
	p2.set("Steven",18,"USA");
	p1.get();
	p2.get();
	return 0;
}
