//18.Write a C++ program that defines a class Calculator with functions for addition, subtraction, multiplication, and division. Create objects to use these functions.


#include<iostream>
using namespace std;
class calculater{
	public:
		int a,b;
		void input()
		{
			cout<<"enter the element of a : ";
			cin>>a;
			cout<<"enter the element of b : ";
			cin>>b;
		}
		void add()
		{
			int sum = a+b;
			cout<<sum<<endl;
		}
		void sub()
		{
			int sub = a-b;
			cout<<sub<<endl;
		}
		void mul()
		{
			int mul = a*b;
			cout<<mul<<endl;
		}
		void div()
		{
			int div = a/b;
			cout<<div;
		}
};
int main()
{
	calculater c;
	c.input();
	c.add();
	c.sub();
	c.mul();
	c.div();
}





