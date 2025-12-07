 #include<iostream>
using namespace std;
int main(){
	int marks;
	cout <<"Enter the marks out of 100 :";
	cin>>marks;
	if( marks >=90)
	{
	cout<<"A+";
	}
    if( marks >=80 && marks <=89)
	{
	cout<<"A";
	}
	if(  marks >=70 && marks <=79)
	{
    cout<<"B";
	}
	if( marks  >=60 && marks <=69)
	{
	cout<< "C";
	}
	if( marks <60)
	{
	cout<< "Fail";
	}
	return 0;
}
