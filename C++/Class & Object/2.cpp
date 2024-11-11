#include<iostream>
using namespace std;
class Student
{
	public :
		int id;
		string name;
		void set(int i,string n)
		{
			id = i;
			name = n;
		}
};
int main()
{
	Student s1;
	s1.set(101,"Rahul");
	Student s2;
	s2.set(102,"Rohan");
	Student s3;
	cout<<"\nStudent id = "<<s1.id;
	cout<<"\nStudent name = "<<s1.name<<endl;
	cout<<"\nStudent id = "<<s2.id;
	cout<<"\nStudent name = "<<s2.name<<endl;
	cout<<"\nStudent id = "<<s3.id;
	cout<<"\nStudent name = "<<s3.name<<endl;
	return 0;
}