2#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	age<13?cout<<"Age "<<age<<" falls under the category: child":
	(age<=19?cout<<"Age "<<age<<" falls under the category: teenager":
	cout<<"Age"<<" falls under the category: adult");
	return 0;
}
