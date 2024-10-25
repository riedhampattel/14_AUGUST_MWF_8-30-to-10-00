/*
Write a c++ program to dislay this pattern

    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/
#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int spc = 4;
	for(i=1;i<=5;i++)
	{
		for(j=spc;j>=1;j--)
		{
			cout<<" ";
		}
		for(k=1;k<=i;k++)
		{
			cout<<"* ";
		}
		cout<<endl;
		spc--;
	}
	int star = 4;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<" ";
		}
		for(k=star;k>=1;k--)
		{
			cout<<"* ";
		}
		cout<<endl;
		star--;
	}
	return 0;
}
