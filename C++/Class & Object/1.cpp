#include<iostream>
using namespace std;
class Student
{
	public :
	int id=101;
	string name="Sushant";
	
};
int main()
{
	Student s1;
	cout<<"\nStudent id = "<<s1.id;
	cout<<"\nStudent name = "<<s1.name;
	return 0;
}