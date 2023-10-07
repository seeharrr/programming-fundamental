#include<iostream>
using namespace std;
int main ()
{
double salary , netsalary ;
cout<<"enter salary : $";
cin>>salary;

if (salary>= 2000)
{
netsalary = salary * 0.93;

	}	
else if (salary>=1000 & salary<20000)
{
netsalary = salary - 1000;
}
else if (salary<10000)
{
	netsalary = salary ;
	}	
else
{
	cout<<"netsalary after deduction : $"<<netsalary<<endl;
	}	
	
	return 0 ;
}
