#include <iostream>
using namespace std;
int main(){
	char S;
	cout <<"Enter the colour of signal: ";
	cin>>S;
	if(S=='R'|| S=='r')
	cout<<"Stop";
	if (S=='G' || S=='g')
	cout<<"GO";
	if(S=='Y' || S=='y')
	cout<<"Slow down";
	return 0;
}
