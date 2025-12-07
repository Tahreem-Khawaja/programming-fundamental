#include <iostream>
using namespace std;
int main()
{
	int account_balance;
	int withdrawl_amount;
	int remaining_balance;
	cout<<"Enter your account balance: ";
	cin>>account_balance;
	cout<<"Enter your withdrawl amount: ";
	cin>>withdrawl_amount;
	if(withdrawl_amount<=account_balance)
	{
	remaining_balance=account_balance-withdrawl_amount;
	cout<<"Your remaining balance is: "<<remaining_balance;
	}
	else
	{
	cout<<"Insufficient balance.";
	}
	return 0;
}
