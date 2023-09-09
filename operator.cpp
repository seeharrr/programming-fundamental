#include<iostream>
using namespace std;
int main()
{
int a , b;

cout<<"enter a =";
cin>>a;
cout<<"enter b =";
cin>>b;

//Arithmetic operators
cout<<"result of arithmetic operators"<<endl;
cout<<" addition ="<<a+b<<endl;
cout<<" substraction ="<<a-b<<endl;
cout<<" multiplication ="<<a*b<<endl;
cout<<" division ="<<a/b<<endl;
cout<<" reminder ="<<a%b<<endl;	

// Comparison operators
cout<<"result of comparison operators "<<endl;
cout<< (a>b)<<endl;
cout<< (a<b)<<endl;
cout<< (a>=b)<<endl;
cout<< (a<=b)<<endl;
cout<< (a!=b)<<endl;
cout<< (a==b)<<endl;

// logic operators
bool junior = true;
bool senior = false;
cout<<"result of logic operators "<<endl;
cout<<( junior && senior)<<endl;
cout<< (junior || senior)<<endl;
cout <<( junior)<<endl;

// Assignment opreators
cout<<"result of assignment operators"<<endl;
int marks = 5;
cout<<"the marks  ="<<marks<<endl;
//Compound assignment operators
cout<<"result of compound assignment operators"<<endl;
int score = 10;
cout<<"the score ="<<score<<endl;
score += 10;
score -= 5;
score *= 6;
score /= 5;
score %= 5;

return 0 ;	
	
}
