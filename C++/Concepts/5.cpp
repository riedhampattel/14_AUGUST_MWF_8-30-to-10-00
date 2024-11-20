#include<iostream>
using namespace std;
class Demo
{
	public :
		void display();
};
void Demo :: display()
{
	cout<<"\nHello World!";
}
int main()
{
	Demo d1;
	d1.display();
	return 0;
}
