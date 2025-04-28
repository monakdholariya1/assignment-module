//15.Array Sum and Average o Write a C++ program that accepts an array of integers, calculates the sum and average, and displays the results.

#include<iostream>
using namespace std;
int main()
{
	int arr[50],size,i,sum=0;
	float avg;
	cout<<"enter the size : ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"enter the element : ";
		cin>>arr[i];
		sum = sum+arr[i];
	}
	cout<<"sum is = "<<sum<<endl;
	cout<<"avg is = "<<(float)sum/(float)size;
}

