#include<iostream>
using namespace std ;
int main()
{
float grade , salary;
cout<<"enter grade";
cin>>grade;
cout<<"enter salary";
cin>>salary;

if(grade>15)
{
salary = salary + 50.0/100;
cout<<"total salary ="<<salary<<endl;
}
else if (grade<=15)
{
	salary = salary + 25.0/100;
	cout<<"total salary ="<<salary<<endl;
}
else 
{
	cout<<"nothing";
}	
	
	
	return 0;
}
