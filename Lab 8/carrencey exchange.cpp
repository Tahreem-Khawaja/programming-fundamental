#include<iostream>
using namespace std;
int main(){
	int choice;
	int rate;
	int amount;
	cout<<"Enter the number to corresponding choice: "<<endl;
	cout<<"1. USD to PKR"<<endl;
	cout<<"2. USD to INR"<<endl;
	cout<<"3. USD to Euros"<<endl;
	cin>>choice;
	cout<<"Enter the amount in USD: ";
	cin>>amount;
	switch(choice)
	{
		case 1:
			cout<<"You choosed to convert USD to PKR."<<endl;
			cout<<"Enter exchange rate,1 USD in PKR  is :";
			cin>>rate;
			cout<<amount<<" in PKR is "<<amount*rate;
			break;
		case 2:
			cout<<"You choosed to convert USD to INR."<<endl;
			cout<<"Enter the exchange rate, 1 USD in INR is:";
			cin>>rate;
			cout<<amount<<" in INR is "<<amount*rate;
			break;
		case 3:
		    cout<<"You choosed to convert USD to Euro."<<endl;
			cout<<"Enter the exchange rate, 1 USD in Euro is:";
			cin>>rate;
			cout<<amount<<" in Euro is "<<amount*rate;
			break;
		deafault:
		    cout<<"Invalid choice";
		    break;
				}
		return 0;
}
