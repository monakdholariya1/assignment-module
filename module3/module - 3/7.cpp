// 7.Operator Demonstration o Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise operators. Perform operations using each type of operator and display the results.

#include<iostream>
using namespace std;
int main()
{
	int a,b,age;
	cout<<"enter the number a = ";
	cin>>a;
	cout<<"enter the number b = ";
	cin>>b;
	cout<<"enter the age = ";
	cin>>age;
	int sum = a+b;
	cout<<"sum is ="<<sum<<endl;
	if(a==b)
	{
		cout<<"both are same\n";
	}
	else
	{
		cout<<"both are different\n";
	}
	if(age>18&&age<30)
	{
	    cout<<"voting for vote\n";
	}	
	else
	{
		cout<<"not voting for vote\n";
	}
	int result = a&b;
	cout<<result;
}



