#include<iostream>
using namespace std;
class Shape
{
	public :
		void shape(double r)
		{
			cout<<"\nArea of circle is = "<<3.14*(r*r);
		}
		void shape(int side)
		{
			cout<<"\nArea of square is = "<<side*side;
		}
		void shape(int l,int b)
		{
			cout<<"\nArae of Rectangle is = "<<l*b;
		}
		void shape(double b,double h)
		{
			cout<<"\nArea of triangle is = "<<0.5*(b*h);
		}
};
int main()
{
	Shape s1;
	s1.shape(2.5);
	Shape s2;
	s2.shape(5);
	Shape s3;
	s3.shape(4,5);
	Shape s4;
	s4.shape(3.6,7.1);
	return 0;
}
