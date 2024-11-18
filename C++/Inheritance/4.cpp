#include<iostream>
using namespace std;
class Parent
{
	public :
		void display()
		{
			cout<<"\nHello from Parent class";
		}
};
class Child1 : public Parent
{
	
};
class Child2 : public Parent
{
	
};
int main()
{
	Child1 c1;
	Child2 c2;
	c1.display();
	c2.display();
	return 0;
}
