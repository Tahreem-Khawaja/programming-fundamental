#include<iostream>
using namespace std;
int main(){
    string Correct_password = "123";
	string user_input;
	do
	{
		cout<<"Enter the Correct_password"<<endl;
		cin>>user_input;
		if (user_input != Correct_password)
		cout<<"Incorrect_password. Please try again"<<endl;
	}while(user_input!=Correct_password);
	cout<<"Password_accepted. Welcome"<<endl;
	return 0;
}
