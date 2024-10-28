#include<iostream>
using namespace std;
void display(int num)
{
	if(num>0)
	{
		cout<<"\nHello";
		num--;
		display(num);
	}
}
int main()
{
	display(8);
	return 0;
}
