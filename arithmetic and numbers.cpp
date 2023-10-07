#include<iostream>
using namespace std;
int main()
{
int num1, num2  ; 

cout<<"enter number1";
cin>>num1;
cout<<"number2";
cin>>num2;
char op;
cout<<"enter operations";
cin>>op;

switch (op)
{
	case  '+' :
		cout<<"sum ="<<num1 + num2<<endl;
		break;
	case  '-' :
		cout<<"subtract ="<<num1 - num2<<endl;
	break;
	case '*' :
		cout<<"multiply ="<<num1 * num2<<endl;
		break;
	case '/':
	cout<<"division ="<<num1 / num2<<endl;
	break;
	case '%':
	cout<<"reminder ="<<num1 % num2<<'reminder'<<endl;
	break;
}	
	
	return 0;
}
