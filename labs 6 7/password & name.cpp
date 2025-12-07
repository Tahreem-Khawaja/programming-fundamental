#include<iostream>
using namespace std;
int main(){
	string correct_username = "admin";
	string correct_password = "12345";
	string username, password;
	cout<<"Enter the username :";
	cin>>username;
	cout<<"Enter the password :";
	cin>>password;
	if (username==correct_username && password== correct_password)
	{
		cout<<"Access Granted."<<endl;
	}
	else if (username== correct_username && password != correct_password)
	{
		cout<<"Wrong password."<<endl;
	}
	else{
		cout<<"User Not found."<<endl;
	}
	return 0;
}
