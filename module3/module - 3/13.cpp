//13 .Factorial Calculation Using Recursion o Write a C++ program that calculates the factorial of a number using recursion.

#include<iostream>
using namespace std;
int fact(int num)
{
	if(num!=0)
	{
		return num * fact(num-1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int num;
	cout<<"enter the number";
	cin>>num;
	int r = fact(num);
	cout<<r;
}

