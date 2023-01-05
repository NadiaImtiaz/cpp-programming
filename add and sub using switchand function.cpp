#include<iostream>
using namespace std;
int Add(int,int);
int Sub(int,int);
int main()
{
	int valueOne;
	int valueTwo;
	
	int choice;
	cout<<"Enter your choice: \nPress 1 for Add=\nPress 2 for Sub=\n"<<endl;
	cin>>choice;
   
    cout<<"Please enter value number one=";
	cin>>valueOne;
	cout<<"Please enter value number two=";
	cin>>valueTwo;
	
	
	switch(choice)
	{
		case 1:
			cout<<Add(valueOne,valueTwo);
			break;
		case 2:
			cout<<Sub(valueOne,valueTwo);
			break;
		default:
			cout<<"Not valid input";
	} 
}

int Add(int valueOne ,int valueTwo )
{
	return valueOne+valueTwo;	
}

int Sub(int valueOne ,int valueTwo )
{
	return valueOne-valueTwo;	
}
