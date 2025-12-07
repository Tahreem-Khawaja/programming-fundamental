#include<iostream>
using namespace std;
int main(){
	int age;
	double income;
	//input from user
	cout<<"Enter your age :";
	cin>>age;
	cout<<"Enter your final income :";
	cin>>income;
	
	//check the age requirement
	if ( age<18){
	
	cout<<"You are not eligible for a loan beacause you are under 18 years of age";
}
else{
	//age is 18 or above, now check income
	if ( income < 30000){
	cout<<"You meet the age requirement but are not elgible for a loan because your income is below $30000.";
	}
	else{
    	cout<<"Congratulations! You are eligible for a loan."<<endl;}
    }
	return 0;
}

