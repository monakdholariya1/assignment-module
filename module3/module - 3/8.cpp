//1. Grade Calculator o Write a C++ program that takes a student's marks as input and calculates the grade based on if-else conditions.

#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"enter the marks : ";
	cin>>marks;
	if(marks>95&&marks<100)
	{
		cout<<"A grade..";
	}
	else if(marks>80&&marks<95)
	{
		cout<<"B grade..";
	}
	else if(marks>65&&marks<80)
	{
		cout<<"C grade..";
	}
	else
	{
		cout<<"D grade..";
	}
}


