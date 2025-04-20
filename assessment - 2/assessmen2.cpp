#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main()
{
   srand(time(0)); 
   int number = (rand()%3)+1; 
  string name;
  int round,choice,i,satyam_score=0,computer_score=0;
  int roun=0;
  cout<<"*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*"<<endl;  
    cout<<endl; 
  cout<<"               NAME                  "<<endl;
  cout<<endl; 	
  cout<<"*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*"<<endl; 
    cout<<endl;  
  cout<<"Enter toyr name : ";
  cin>>name;
  cout<<endl;
  cout<<"*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*"<<endl;  
  cout<<"\n";
  cout<<"               ROUND                 "<<endl;
  cout<<endl; 	
  cout<<"*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*"<<endl;  
  cout<<endl;
  cout<<"Satyam how many round you want to play : ";
  cin>>round;
  cout<<endl;
  cout<<"*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*"<<endl;  
  cout<<"\n";
  cout<<"               GAME                 "<<endl;
  cout<<endl;
  cout<<"*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*"<<endl;
  cout<<endl;
  int roundr = 1;
  for(i=0;i<round;i++)
  {
  cout<<"round :"<<roundr<<"/3"<<endl;
  if(roundr)
  {
  roundr++;
  }

  cout<<endl;
  cout<<"1).ROCK"<<endl;
  cout<<"2).PAPER"<<endl;
  cout<<"3).SCISSOR"<<endl;
  cout<<endl;

  cout<<"Select your choice : ";
  cin>>choice;
  cout<<endl;
  cout<<"computer choice is :"<<number<<endl;
  cout<<endl;
  	if (choice == number) {
        cout << "Result: It's a Draw!\n";
    } 
    else if ((choice == 1 && number == 3) ||
             (choice == 2 && number == 1) ||
             (choice == 3 && number == 2)) {
        cout << "Result: You Win!\n";
    } 
    else {
        cout << "Result: Computer Wins!\n";
    }
    cout<<endl;
    if((choice == 1 && number == 3)||
    (choice == 2 && number == 1) ||
    (choice == 3 && number == 2))
             {
             	satyam_score++;
             
			 }
			 
	else if((choice == 3 && number == 1)||
    (choice == 1 && number == 2) ||
    (choice == 2 && number == 3))
			{
				computer_score++;
			
			}
    cout<<"-*satyam_score = "<<satyam_score<<endl;		 
  cout<<"_*computer score = "<<computer_score<<endl;
  cout<<endl;
    cout<<"*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*"<<endl;
    cout<<endl;
    }
}


