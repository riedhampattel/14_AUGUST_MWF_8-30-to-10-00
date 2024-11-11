//Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.
#include<iostream>
using namespace std;
class Circle
{
	private :
		double radius;
	public :
		void set(double r)
		{
			radius = r;	
		}
		double area()
		{
			return 3.14*(radius*radius);	
		}			
		double circumference()
		{
			return 2*(3.14*radius);
		}
};
int main()
{
	Circle c1;
	c1.set(5.8);
	double ans1 = c1.area();
	double ans2 = c1.circumference();
	cout<<"\nArea of the circle = "<<ans1;
	cout<<"\nCircumference of the circle = "<<ans2<<endl;
	
	Circle c2;
	c2.set(2.5);
	double ans3 = c2.area();
	double ans4 = c2.circumference();
	cout<<"\nArea of the circle = "<<ans3;
	cout<<"\nCircumference of the circle = "<<ans4;
	return 0;
}