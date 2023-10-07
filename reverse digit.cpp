#include<iostream>
using namespace std ;
int main()
{
int n ,a,b;
cout<<"enter 3-digits"<<"\n";
cin>>n;
a=n/100;
n=n%100;
b=n/10;
n=n%10;
cout<<"the reverse numbers"<<n<<b<<a;	
	
	
	
	
	
	return 0;
}
