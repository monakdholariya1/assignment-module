//14. Variable Scope o Write a program that demonstrates the difference between local and global variables in C++. Use functions to show scope.

#include<iostream>
using namespace std;
int globel = 100;
void showglobel()
{
    globel+=50;
	cout<<globel<<endl;	
}
void showlocal()
{
	int local = 100;
	cout<<local<<endl;
	cout<<globel;
}
int main()
{
	showglobel();
	showlocal();
}


