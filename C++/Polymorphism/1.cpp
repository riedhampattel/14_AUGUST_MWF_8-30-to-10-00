#include<iostream>
using namespace std;
class Shape
{
	public :
		Shape(double r)
		{
			cout<<"\nArea of circle is = "<<3.14*(r*r);
		}
		Shape(int side)
		{
			cout<<"\nArea of square is = "<<side*side;
		}
		Shape(int l,int b)
		{
			cout<<"\nArae of Rectangle is = "<<l*b;
		}
		Shape(double b,double h)
		{
			cout<<"\nArea of triangle is = "<<0.5*(b*h);
		}
};
int main()
{
	Shape s1(4.5);
	Shape s2(5);
	Shape s3(4,5);
	Shape s4(4.0,6.0);
	return 0;
}
