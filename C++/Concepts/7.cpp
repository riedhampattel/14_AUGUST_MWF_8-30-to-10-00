#include<iostream>
using namespace std;
class Shape//abstract class
{
	public :
		virtual void shape()
		{
			cout<<"\nThis is Shape class";
		}
};
class Circle : public Shape//derived class
{
	public :
		void shape(int area)
		{
			cout<<"\nThis is Circle class";
			cout<<"\nArea = "<<area;
		}
};
int main()
{
	Shape s1;
	Circle c1;
	s1.shape();
	c1.shape(5);
	return 0;
}
