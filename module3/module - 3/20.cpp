// 20.Inheritance Example o Write a program that implements inheritance using a base class Person and derived classes Student and Teacher. Demonstrate reusability through inheritance.

#include<iostream>
using namespace std;
class person{
	public:
	void display()
	{
		cout<<"this is a person class\n";
	}
};
class student:public person{
	public:
	void display2()
	{

	}
};
class teacher:public person{
	public:
	void display3()
	{
		
	}
};
int main()
{
	student s;
	s.display();
	teacher t;
	t.display();
}

