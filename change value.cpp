#include<iostream>
using  namespace std;
int main ()
{
int a = 1;
int b = 2;
int c = 3;
int d ;

d = a;
a = c;
b = b;
c = d;

cout<<"a ="<<a<<endl;
cout<<"b ="<<b<<endl;
cout<<"c ="<<c<<endl;
cout<<"d ="<<d<<endl;	
	
	
	return 0 ;
}
