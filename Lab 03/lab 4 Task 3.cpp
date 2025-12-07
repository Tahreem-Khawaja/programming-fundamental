#include<iostream>
using namespace std;
int main(){
	//price of items
	float Item1=12.95, Item2=24.95, Item3=6.95, Item4=14.95, Item5=3.95;
	const float sales_tax_rate=(6.0/100);
	float sales_tax;
	cout<<"price of item 1:$"<<Item1<<endl;
	cout<<"price of item 2:$"<<Item2<<endl;
	cout<<"price of item 3:$"<<Item3<<endl;
	cout<<"price of item 4:$"<<Item4<<endl;
	cout<<"price of item 5:$"<<Item5<<endl;
	float subtotal;
	subtotal=Item1+Item2+Item3+Item4+Item5;
	cout<<"the subtotal of all item is "<<subtotal<<endl;
	 //sales tax
	 sales_tax=sales_tax_rate*subtotal;
	 cout<<"sales tax 6% is: "<<sales_tax<<endl;
	cout<<"total amount is: "<<subtotal+sales_tax;
	return 0;
}
