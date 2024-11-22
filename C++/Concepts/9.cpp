#include<iostream>
using namespace std;
class base
{
	public :
		virtual void display()
		{
			cout<<"\nThis is base class";	
		}	
		void show()
		{
			cout<<"\nThis is base class - show";
		}
};
class derived : public base
{
	public :
		void display()
		{
			cout<<"\nThis is derived class";
		}
		void show()
		{
			cout<<"\nThis is derived class - show";
		}
};
int main()
{
	base *b;
	derived d;
	b = &d;
	
	b->display();
	
	b->show();
	return 0;
}
