//3.	Variables and Constants o Write a C++ program that demonstrates the use of variables and constants. Create variables of different data types and perform operations on them.
#include<iostream>
using namespace std;
int main()
{
	int age=10;
	char ch='a';
	string s="monank";
	float f=95.45;
	bool b = true;
	
	const float pi=3.14;
	
	cout<<age<< endl;
	cout<<ch<< endl;
	cout<<s<< endl;
	cout<<f<< endl;
	cout<<(b?"yes":"no")<<endl;
	
	int year = 30-age;
	float circle = 2*pi*5;
	
	cout<<year;
	cout<<circle;
}

