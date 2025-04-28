//16 . Matrix Addition o Write a C++ program to perform matrix addition on two 2x2 matrices.

#include<iostream>
using namespace std;
int main()
{
	int arr[50][50],arr2[50][50],sum[50][50],size,i,k;
	float avg;
	cout<<"enter the size : ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		for(k=0;k<size;k++)
		{
		cout<<"enter the element a : ";
		cin>>arr[i][k];
		
	    }
	}
	cout<<"\n";
	for(i=0;i<size;i++)
	{
		for(k=0;k<size;k++)
		{
		cout<<"enter the element b : ";
		cin>>arr2[i][k];
	    }
	}
	for(i=0;i<size;i++)
	{
		for(k=0;k<size;k++)
		{
		sum[i][k]=arr[i][k]+arr2[i][k];
	    }
	}
	for(i=0;i<size;i++)
	{
		for(k=0;k<size;k++)
		{
		cout<<sum[i][k]<<" ";
	    }
	cout<<endl;
	}
	
	
}

