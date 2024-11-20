#include<iostream>
using namespace std;
class Demo
{
	private :
		int id;
		string name;
		double percentage;
	public :
		void set(int id,string name,double percentage)
		{
			this->id = id;
			this->name = name;
			this->percentage = percentage;
		}
		void display()
		{
			cout<<"\nId = "<<id;
			cout<<"\nName = "<<name;
			cout<<"\nPercentage = "<<percentage;
		}
};
int main()
{
	Demo d1;
	d1.set(101,"Rahul",98.56);
	d1.display();
	return 0;
}
