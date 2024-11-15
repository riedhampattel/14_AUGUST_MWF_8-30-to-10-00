#include<iostream>
using namespace std;
class Demo
{
	public :
		Demo(int id,string name)
		{
			cout<<"\nParameterized constructor called";
			cout<<"\nId = "<<id;
			cout<<"\nname = "<<name;
		}
};
int main()
{
	Demo d1(101,"Rahul");
	return 0;
}
