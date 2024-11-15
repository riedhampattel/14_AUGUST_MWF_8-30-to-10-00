#include<iostream>
using namespace std;
class Parent//base class
{
	public :
		void display()
		{
			cout<<"\nHello from Parent class";
		}		
};
class Child : public Parent//derived class
{
	
};
int main()
{
	Child c1;
	c1.display();
	return 0;
}
