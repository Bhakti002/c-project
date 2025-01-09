//take number and check it is positive and negative or Zero

#include<iostream>
using namespace std;
int main()
{
	int num1;
	cout<<"enter any number:";
	cin>>num1;
	
	if(num1>0)
	{
		cout<<"Positive";	
	}
	
	else if(num1<0)
	{
		cout<<"Negative";
	}
	else
	{
		cout<<"Zero";
	}
	
	
	
	return 0;
}
