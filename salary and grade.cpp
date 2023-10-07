#include<iostream>
using namespace  std ;
int main ()
{
int  grade , bonus;
double salary ;

 cout<<"enter  grade ";
 cin>>grade;
 cout<<"enter salary";
 cin>>salary;
 
 salary = salary + bonus ;
 
 if(grade > 15)
 {
 	bonus = 0.50 * salary;
 	cout<<"total salary after bonus ="<<'total salary'<<endl;
	 }
else if (grade <= 15)
{
	bonus = 0.25 * salary;
	cout<<" total salary after bonus ="<<'total salary'<<endl;
	}
else 
{
	cout<<" invalid"<<endl;
	}
				
		
	return 0 ;
}
