// Multiplication Table o Write a C++ program to display the multiplication table of a given number using a for loop.

#include<iostream>
using namespace std;
int main()
{
	int num,i;
	cout<<"enter the number of multiplication table : ";
	cin>>num;
	for(i=1;i<=10;i++)
	{
	    cout<<num<<" * "<<i<<" = "<<num*i<<endl;
	}
}

