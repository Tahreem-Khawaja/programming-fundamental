#include<iostream>
using namespace std;
int main(){
	int n, i, a;
	i=1;
	cout<<"Enter number";
	cin>>n;
	cout<<"Enter the limit";
	cin>>a;
	while(i<=a)
	{
		cout<<n<<"x"<<i<<"="<<n*i<<endl;
		i++;
	}
	return 0;
}
