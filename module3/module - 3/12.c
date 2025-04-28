//12 . Simple Calculator Using Functions o Write a C++ program that defines functions for basic arithmetic operations (add, subtract, multiply, divide). The main function should call these based on user input.

#include<iostream>
using namespace std;
int sum(int a,int b)
{
	int sum=a+b;
	return sum;
}
int sub(int a,int b)
{
	int sub=a-b;
	return sub;
}
int mul(int a,int b)
{
	int mul=a*b;
	return mul;
}int div(int a,int b)
{
	int div=a/b;
	return div;
}
int main()
{
	int a,b;
	cout<<"enter the number a : ";
	cin>>a;
	cout<<"enter the number b : ";
	cin>>b;
	
	int result = sum(a,b);
	int result1 = sub(a,b);
	int result2 = mul(a,b);
	int result3 = div(a,b);
	cout<<"sum is = "<<result<<endl;
	cout<<"sub is = "<<result1<<endl;
	cout<<"mul is = "<<result2<<endl;
	cout<<"div is = "<<result3;
}

