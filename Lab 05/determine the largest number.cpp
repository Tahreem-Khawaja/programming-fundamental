#include<iostream>
using namespace std;
int main (){
	int a, b, c;
	cout<<"Enter a first number :";
	cin>>a;
	cout<<"Enter a second number :";
	cin>>b;
	cout<<"Enter a third number :";
	cin>>c;
	if(a>b&&a>c){
		cout<<a <<" is largest"<<endl;}
		if(c>a&&c>b){
			cout<<c <<" is largest"<<endl;}
			if(b>a&&b>c){
				cout<<b<<" is largest"<<endl;}
					return 0;
}
