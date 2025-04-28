//4.	Type Conversion o Write a C++ program that performs both implicit and explicit type conversions and prints the results.

#include<iostream>
using namespace std;
int main()
{
	int a=10;
    double d = a;
    
    cout<<"impicit type Conversion : \n";
    cout<<a<<endl;
    cout<<d<<endl;
    
    double pi = 3.14;
    int b = pi;
    
    cout<<pi<<endl;
    cout<<b<<endl;
    
    cout<<"explicit type Conversion : ";
    
    double num = 99.95;
    int n = (int)num;
    
    cout<<num<<endl;
    cout<<n;
}

