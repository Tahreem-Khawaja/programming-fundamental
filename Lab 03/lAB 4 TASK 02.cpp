#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	// initializing test scores
	float score1=85.5, score2=90.75, score3=88.25;
	float average;
	average=(score1+score2+score3)/3;
	cout<<"the average of "<< score1 << " " <<score2<< " "<< score3 << "= "<< fixed << setprecision(2)<<average;
	return 0;
}
	
	

