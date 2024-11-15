#include<iostream>
using namespace std;
class Demo
{
	public :
		Demo()//default constructor
		{
			cout<<"\nDefault constructor called";
		}
		~Demo()
		{
			cout<<"\nDestructor called";
		}
};
int main()
{
	Demo d1,d2;
	return 0;
}
