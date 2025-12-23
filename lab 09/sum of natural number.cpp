#include<iostream>
using namespace std;
int main (){
	int i = 1;
	int sum = 0;
	while(i <= 5)
	{
		sum += i;
		i++;
	}
	cout<<"The sum of first five natural number is"<<sum<<endl;
	return 0;
}
