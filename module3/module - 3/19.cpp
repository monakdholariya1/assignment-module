//19.Class for Bank Account o Create a class BankAccount with data members like balance and member functions like deposit and withdraw. Implement encapsulation by keeping the data members private.
#include<iostream>
using namespace std;

class bankaccount{
	private:
		int balance;
	public:
	
		void deposit(int amount)
		{
			if(amount>0)
			{
				balance+=amount;
				cout<<"deposit : "<<amount<<endl;
			}
			else
			{
				cout<<"invalid deposit amount\n";
			}
		}
		void withdraw(int amount)
		{
		    if(amount>0&&amount<=balance)
			{
				balance-=amount;
				cout<<"withdraw : "<<amount<<endl;
			}
			else
			{
				cout<<"invalid withdraw amount\n";
			}
		}
		void currentbalance()
		{
			cout<<"current balance is : "<<balance<<endl;
		}
};
int main()
{
	bankaccount b;
	b.deposit(500);
	b.currentbalance();
	b.withdraw(200);
	b.currentbalance();
}


