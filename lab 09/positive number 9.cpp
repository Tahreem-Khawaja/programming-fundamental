#include<iostream>
using namespace std;
int main(){
	int number;
	while(true)
	{
		cout<<"Enter the postive number";
		cin>>number;
		if(number<=0)
		cout<<"Error: Please enter the positive number";
		cin>>number;
	}
	return 0;
}

