#include<iostream>
using namespace std;
int main(){
	int sub1, sub2, sub3;
	int total_marks;
	float percentage;
	char grade1, grade2, grade3;
	//total marks of each subject are 100
	cout<<"Enter your marks in subject 1: ";
	cin>>sub1;
	cout<<"Enter your marks in subject 2:";
	cin>>sub2;
	cout<<"Enter your marks in subject 3:";
	cin>>sub3;
	//total marks
	total_marks=sub1+sub2+sub3;
	cout<<"You got"<<total_marks<<" out of 300."<<endl;
	//percentage
	percentage=(total_marks/300.0)*100;
	cout<<"Your percentage is:"<<percentage<<endl;
	//grade of subject 1
	if(sub1 >=90)
	grade1 ='A';
	else if (sub1 >=80)
	grade1 = 'B';
	else if (sub1>=70)
	grade1 = 'C';
	else if(sub1 >=60)
	grade1 = 'D';
	else
	grade1 ='F';
	cout<<"\n your grade in subject 1: "<<grade1;
	//grade of subject2 
	if (sub2>=90)
	grade2 = 'A';
	else if (sub2>=80)
	grade2 = 'B';
	else if (sub2>=70)
	grade2 = 'C';
	else if (sub2>=60)
	grade2 = 'D';
	else
	grade2 = 'F';
	cout<<"\n your grade in subject 2: "<<grade2;
	//grade of subject 3
	if (sub3 >=90)
	grade3 = 'A';
	else if (sub3 >=80)
	grade3 = 'B';
	else if (sub3 >=70)
	grade3 = 'C';
	else if (sub3 >=60)
	grade3 = 'D';
	else
	grade3= 'F';
	cout<<"\n your grade in subject 3:"<<grade3;
	//checking either one of the grade is F or not 
	if (grade1=='F' || grade2=='F' || grade3=='F')
	{
		cout<<"\n\n not eligible for scholarship.";
	}
	else
	{
		//checking type of scholarship
		if((grade1=='A'||grade2=='A'||grade3=='A') && total_marks>=270)
		{
			cout<<"\n Eligible for merit scholarship.";
		}
		
	}
	return 0;
}
