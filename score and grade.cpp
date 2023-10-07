#include<iostream>
using namespace std;
int  main ()
{
int score , grade;
cout<<"enter score";
cin>>score;

if(score>= 90)
{
cout<<"grade A";
	}	
else if(score>80 & score<90)
{
cout<<"grade B";
	}
else if (score>70 & score<80)
{
cout<<"grade C";
	}
else if (score>60 & score<70)
{
cout<<"grade D";
	}
else if (score < 50) 
{
	cout<<"grade F";
	}
else
{
	cout<<"error";
	}			
	
	return 0 ;
}
