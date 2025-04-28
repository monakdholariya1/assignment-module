// Number Guessing Game o Write a C++ program that asks the user to guess a number between 1 and 100. The program should provide hints if the guess is too high or too low. Use loops to allow the user multiple attempts.

#include<iostream>
#include <cstdlib>
#include <ctime> 

using namespace std;
int main()
{
	srand(time(0));
    int secretNumber = rand() % 100 + 1; 
    int num;
    do
    {
	cout<<"guess a number between 1 and 100 : ";
	cin>>num;
	if(num>secretNumber)
	{
		cout<<" guess is too high\n";
	}
	else if(num<secretNumber)
	{
		cout<<" guess is too low\n";
	}
	else
	{
		cout<<"congratulations you are win";
	}
    }while(num!=secretNumber);
}

