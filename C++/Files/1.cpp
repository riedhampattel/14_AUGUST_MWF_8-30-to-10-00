#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	//ifstream ---> read
	//ofstream ---> create, write
	ofstream MyFile("first.txt");
	MyFile<<"This is my first file"<<endl;
	MyFile<<"This is my first file"<<endl;
	MyFile<<"This is my first file"<<endl;
	MyFile.close();
	cout<<"\nOperation successfull";
	return 0;
}
