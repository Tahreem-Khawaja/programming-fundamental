#include<iostream>
using namespace std;
int main(){
	string username, password, role;
	//ask user for username and password
	cout<<"Enter the username:";
	cin>>username;
	cout<< "Enter the password:";
	cin>>password;
	//authentication check
	if(username =="Admin" && password=="123"){
	cout<< "Authentication Successful!"<<endl;
	//ask for role only if authenticated 
	cout<<"Enter your (Admin /Guest /other):";
	cin>>role;
	//role Based access 
	if (role=="Admin")
{
		cout<<"full access"<<endl;
	}
	else if (role == "guest"){
		cout<<" limited access"<<endl;
	}
}
else{
	cout<< "Autjentication failed. Access Denied."<<endl;
}
return 0;
}
