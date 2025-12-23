#include<iostream>
using namespace std;
int main(){
	int a, b, choice;
	char o;
	cout<<"Enter a number to a corresponding choice ; "<<endl;
	cout<<"1, Addition"<<endl;
	cout<<"2 Subtraction"<<endl;
	cout<<"3. Multiplication"<<endl;
	cout<<"4. Division"<<endl;
	cin>>choice;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the seconde number: ";
	cin>>b;
	switch(choice)
	{
		case 1:
		cout<<"The sum of"<<a<<" and "<<b<<" is "<<a+b;
		break;
		case 2:
			cout<<"The difference of "<<a<<" and "<<b<<" is "<<a-b;
			break;
	    case 3:
	    	cout<<"The product of "<<a<<" and "<<b<<" is "<<a*b;
	    	break;
	    case 4:
		    cout<<"The division of "<<a<<" and "<<b<<" is "<<a/b;
			break;
			default :
			cout<<"Invalid choice";
		}
		return 0;
}
