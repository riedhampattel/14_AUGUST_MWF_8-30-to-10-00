#include<iostream>
using namespace std;
class Student
{
	public :
		int id,maths,english;
		string name;
		void set(int id,string name,int maths,int english)
		{
			this->id = id;
			this->name = name;
			this->maths = maths;
			this->english = english;
		}
};
class Address
{
	private :
		string city;
		Student *a;
	public :
		void set(string city,Student *obj)
		{
			this->city = city;
			a = obj;
		}
		void display()
		{
			cout<<"\nid = "<<a->id;
			cout<<"\nName = "<<a->name;
			cout<<"\ncity = "<<city;
		}
};
int main()
{
	Student s1,s2;
	s1.set(101,"Rahul",78,75);
	s2.set(102,"Mehul",50,47);
	
	Address a1;
	a1.set("Surat",&s1);
	a1.display();
	
	a1.set("Ahmedabad",&s2);
	a1.display();
	return 0;
}
