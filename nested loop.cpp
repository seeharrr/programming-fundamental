#include<iostream>
using namespace std;
int main()
{
int a , b ;

cout<<"enter a";
cin>>a;
cout<<"enter b";
cin>>b;

for (a=1 ; a<=5 ; a++ )
{
	cout<<"*"<<endl;
}
for (b=1 ; b<=a ; b++)
{
cout<<"*";		
}

	return 0 ;
}
