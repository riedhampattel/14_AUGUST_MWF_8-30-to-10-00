#include<iostream>
using namespace std;
class GrandFather
{
	public :
		GrandFather()
		{
			cout<<"\nHello from GrandFather";
		}
		void diplay()
		{
			cout<<"\nHello from GrandFather";
		}
};
class Father : virtual public GrandFather
{
	public :
		Father()
		{
			cout<<"\nHello from Father";
		}
};
class Mother : virtual public GrandFather
{
	public :
		Mother()
		{
			cout<<"\nHello from Mother";
		}
};
class Son : public Father,public Mother
{
	public :
		Son()
		{
			cout<<"\nHello from Son";
		}
};
int main()
{
	Son s;
	s.diplay();
	return 0;
}
