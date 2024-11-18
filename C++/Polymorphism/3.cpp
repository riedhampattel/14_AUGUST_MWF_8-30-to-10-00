#include<iostream>
using namespace std;
class Demo
{
	public :
		int a;
		int b;
		Demo()
		{
			a = 0;
			b = 0;	
		}
		void display()
		{
			cout<<"\nValue of a = "<<a;
			cout<<"\nValue of b = "<<b<<endl;
		}
		Demo operator&(Demo &obj)
		{
			Demo temp;
			temp.a = a + obj.a;
			temp.b = b + obj.b;
			return temp;
		}
};
int main()
{
	int x=10,y=20;
	int ans = x + y;
	cout<<"\nValue of ans = "<<ans;
	Demo d1;
	d1.a = 10;
	d1.b = 20;
	d1.display();
	Demo d2;
	d2.a = 30;
	d2.b = 40;
	d2.display();
	Demo d3;
	Demo d4;
	d3 = d1 & d2;
	d3.display();
	return 0;
}
