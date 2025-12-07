#include<iostream>
using namespace std;
int main (){
	char grade;
	int years;
	double basicSalary , bonus =0 , gross, tax = 0, netSalary;
	cout <<"Enter Employee Grade (A/B/C): ";
	cin >> grade;
	cout<<"Enter Years of Service: ";
	cin>>years;
	
	// Step 1: Basic salary according to grade
	if (grade == 'A'|| grade == 'a'){
		basicSalary = 50000;
	}
	else if (grade == 'B' || grade == 'b'){
		basicSalary = 30000;
	}
	else if (grade =='C' || grade =='c'){
		basicSalary = 20000;
	}
	else{
		cout << "Invalid grade!";
		return 0;
	}
	// step 2: Bonus
	if (years >= 10){
		bonus = basicSalary * 0.10;
	}
	else if (years >= 5){
		bonus = basicSalary * 0.05;
	}
	//step 3: Gross salary
	gross = basicSalary = bonus;
	//step 4: Tax calculation
	if (gross > 40000){
		tax = 0.02;
	}
	else if (gross >= 30000){
		tax = gross * 0.10;
	}
	//step 5: Net salary 
	netSalary = gross- tax;
	cout<< "Basic salary:"<<basicSalary<<endl;
	cout<< "Bonus :"<< bonus << endl;
	cout<< "Gross Salary:"<<gross<<endl;
	cout<< "Ta Deduction: " << netSalary << endl;
	cout<< "Net Salary: "<< netSalary << endl;
	return 0;
}
