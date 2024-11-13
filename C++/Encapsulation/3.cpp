//Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to set and get these variables, as well as to validate if the date is valid.
#include<iostream>
using namespace std;
class Date
{
	private :
		int day,year;
		string month;
		int flag = 0;
	public :
		void set()
		{
			int d,m,y;
			cout<<"\nEnter the date = ";
			cin>>d;
			cout<<"\nEnter the month = ";
			cin>>m;
			cout<<"\nEnter the year = ";
			cin>>y;
			if(m==2 && y%4==0 && (d>=1 && d<=29))
			{
				day = d;
				month = "february";
				year = y;
			}
			else if(m==2 && (d>=1 && d<=28))
			{
				day = d;
				month = "february";
				year = y;
			}
			else if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && (d>=1 && d<=31))
			{
				day = d;
				switch(m)
				{
					case 1 :
						month = "january";
					break;
					case 3 :
						month = "march";
					break;
					case 5 :
						month = "may";
					break;
					case 7 :
						month = "july";
					break;
					case 8 :
						month = "august";
					break;
					case 10 :
						month = "october";
					break;
					case 12 :
						month = "december";
					break;
				}
				year = y;
			}
			else if((m==4 || m==6 || m==9 || m==11) && (d>=1 && d<=30))
			{
				day = d;
				switch(m)
				{
					case 4 :
						month = "april";
					break;
					case 6 :
						month = "june";
					break;
					case 9 :
						month = "september";
					break;
					case 11 :
						month = "november";
					break;
				}
				year = y;
			}
			else
			{
				flag = 1;
			}
		}
		void get()
		{
			if(flag==0)
			{
				cout<<endl<<day<<" - "<<month<<" - "<<year;
			}
			else
			{
				cout<<"\nInvalid date format";
			}
		}
};
int main()
{
	Date d1,d2;
	d1.set();
	d2.set();
	
	d1.get();
	d2.get();
	return 0;
}
