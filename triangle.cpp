#include<iostream>
using  namespace std ;
int  main()
{
int a,b ,c , sum  ;
float s , area , sqrt ;

cout<<"enter a";
cin>>a;
cout<<"enter b";
cin>>b;
cout<<"enter c";
cin>>c;

sum = a +b +c;
s = sum/2;
cout<<"the  value of s ="<<s<<endl;

area=sqrt(s *(s-a )*(s-b )*(s-c)) ;
cout<<"area of triangle of three sides ="<<area<<endl;
	
	
	return 0;
}
