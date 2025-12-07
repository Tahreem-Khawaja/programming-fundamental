#include<iostream>
using namespace std;
int main(){
	int temp;
	cout<<"Enter the temprature in Celsius :";
	cin >>temp;
	if(temp>=40)
	{
		cout <<"It is extremely hot ! Stay indoor to avoide health risks.";
	}
	else if (temp>=30 && temp<=39)
	{
		cout <<"The weather is hot. drink plenty of water to stay hydrated. ";
	}
	else if (temp>=20 && temp<=29)
	{
			cout <<"The weather is pleasent. Great time for outdoor activities.";
	}
	else 
	{
		// temp<20
		cout<< " It is cold. Wear warm cloths to stay comfortable.";
	}
	return 0;
}
