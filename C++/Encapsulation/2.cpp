//Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.
#include<iostream>
using namespace std;
class BankAccount
{
	private :
		double acno,balance;
	public :
		void set(double a,double b)
		{
			acno = a;
			balance = b;
		}
		void deposit()
		{
			double amt;
			cout<<"\nEnter the amount = ";
			cin>>amt;
			if(amt>0)
			{
				balance = balance + amt;
			}
		}
		void withdraw()
		{
			double amt;
			cout<<"\nEnter the amount = ";
			cin>>amt;
			if(amt>0 && amt<=balance)
			{
				balance = balance - amt;
			}
		}
		void get()
		{
			cout<<"\nAccount no. = "<<acno;
			cout<<"\nBalance = "<<balance<<endl;
		}
};
int main()
{
	BankAccount b1,b2;
	b1.set(123456,25000);
	b2.set(654321,5000);
	b1.deposit();
	b2.withdraw();
	b1.withdraw();
	
	b1.get();
	b2.get();
	return 0;
}
