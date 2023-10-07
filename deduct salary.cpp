#include<iostream>
using namespace  std ;
int  main ()
{
float salary;
 cout<<"enter salary";
 cin>>salary;
 
 if(salary >= 20000)
 {
 salary = salary - 7.0/100;
 cout<<"total salary ="<<salary<<endl;
}
 else if (salary>10000 & salary <20000)
{
salary = salary - 1000;
 cout<<"total salary ="<<salary<<endl;
}
 else if (salary<=10000)
 {	
 cout<<"deduct nothing"<<endl;
}
else
{
cout<<"error";	
}
		
	return 0;
}
