//Write a C++ program to find the Armstrong number for a given range of number.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int start,end,i,j,digit=0,rem,power;
	cout<<"\nEnter the starting point = ";
	cin>>start;
	cout<<"\nEnter the ending point = ";
	cin>>end;
	
	for(i=start;i<=end;i++)
	{
		int num = i;
		int temp = i;
		int sum = 0;
		digit=0;
		while(num!=0)
		{
			num = num/10;
			digit++;
		}
		for(j=1;j<=digit;j++)
		{
			rem = temp%10;
			power = pow(rem,digit);
			sum = sum + power;
			temp = temp/10;
		}
		if(sum==i)
		{
			cout<<"\n"<<sum;
		}
	}
	return 0;
}
