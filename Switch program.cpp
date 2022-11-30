#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Please enter a number";
	cin>>n;
	switch(n)
	{
		case 1:
		   cout<<"You pressed One";
		   break;
		case 2:
			cout<<"You pressed two";
			break;
		case 3:
			cout<<"You pressed Three";
			break;
		default:
			cout<<"value not match";
	}
}
