#include<iostream>
using namespace std;
int main()
{
	int a=5;
	int b=20;
	{
	cout<<"Before swap:"<<endl;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
    }
	a=a*b;        // a=100
	b=a/b;        // b=5
	a=a/b;        // a=20
	{
	cout<<"After swap:"<<endl;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
    }
}
