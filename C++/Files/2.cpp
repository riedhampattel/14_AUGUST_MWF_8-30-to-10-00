#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	//ifstream ---> read
	//ofstream ---> create, write
	string text;
	ifstream MyFile("first.txt");
	while(getline(MyFile,text))
	{
		cout<<text;
	}
	MyFile.close();
	return 0;
}
