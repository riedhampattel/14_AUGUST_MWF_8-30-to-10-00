#include<iostream>
using namespace std;
class Parent
{
	public :
		void display()
		{
			cout<<"\nHello from parent class";
		}
};
class Child : public Parent
{
};
class GrandChild : public Child
{
};
int main()
{
	Child c1;
	c1.display();
	GrandChild gc1;
	gc1.display();
	return 0;
}
