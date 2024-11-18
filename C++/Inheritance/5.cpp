#include<iostream>
using namespace std;
class GrandFather
{
	public :
		void displayg()
		{
			cout<<"\nHello from GrandFather";
		}
};
class Father : public GrandFather
{
	public :
		void displayf()
		{
			cout<<"\nHello from Father";
		}
};
class Uncle : public GrandFather
{
	public :
		void displayu()
		{
			cout<<"\nHello from Uncle";
		}
};
class Cousin : public Uncle
{	
};
class Son : public Father
{
};
int main()
{
	Uncle u;
	u.displayg();
	Father f;
	f.displayg();
	Cousin c;
	c.displayg();
	Son s;
	s.displayg();
	return 0;
}
