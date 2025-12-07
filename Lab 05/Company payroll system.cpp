#include <iostream>
using namespace std;
int main()
{
	int basic_salary;
	char grade;
	int experience;
	int gross_salary;
	int bonus, tax;
	int net_salary;
	
	//entering grade and experiences
	cout<<"Enter your Grade A,B,C : ";
	cin>>grade;
	cout<<"Enter your experience: ";
	cin>>experience;
	
	//Salaries
	if(grade=='A'||grade=='a')
	basic_salary=50000;	
	if(grade=='B'||grade=='b')
	basic_salary=30000;	
	if(grade=='C'||grade=='c')
	basic_salary=20000;	
	
	//adding bonus
	if(experience>=10)
	bonus=0.10*basic_salary;
	if(experience>=5&& experience<=9)
	bonus=0.05*basic_salary;
	if(experience<5)
	bonus=0; 
	
	gross_salary=bonus+basic_salary;
	 
	//Tax deduction
	if(gross_salary>40000)
	tax=0.20*gross_salary;
	if(gross_salary>=30000&&gross_salary<=40000)
	tax=0.10*gross_salary;
	if(gross_salary<30000)
	tax=0;
	net_salary=gross_salary-tax;
	
	//Output section
	cout<<"----Payroll Summary----";
	cout<<"\nBasic Salary: $"<<basic_salary;
	cout<<"\nBonus: $"<<bonus;
	cout<<"\nGross Salary: $"<<gross_salary;
	cout<<"\nTax: $"<<tax;
	cout<<"\nNet Salary: $"<<net_salary;	
	return 0;
}
