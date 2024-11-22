#include<iostream>
using namespace std;
class Shape//abstract class
{
	public :
		virtual void shape() = 0;//pure virtual function
};
class Circle : public Shape//derived class
{
	public :
		void shape()
		{
			cout<<"\nThis is circle class";
		}
};
class Square : public Shape//derived class
{
	public :
		void shape()
		{
			cout<<"\nThis is square class";
		}
};
int main()
{
	Shape *s1;
	Circle c1;
	s1 = &c1;
	s1->shape();
	Square sq;
	s1 = &sq;
	s1->shape();
	return 0;
}
