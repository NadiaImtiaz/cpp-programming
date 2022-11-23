#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Please enter your choice"<<endl;
	cout<<"1 For fah to cel"<<endl;
	cout<<"2 For cel to fah"<<endl;
	cin>>number;
	if(number=32)
	{
		int fah;
		cout<<"Enter Temperature in Fahrenheit ";
		cin>> fah;
		int cel=(fah-32)*5/9;
		cout<<"Equivalant temperare in Celcius is "<<cin<<endl;
	}
	else if(number=0)
	{
		int cel1;
		cout<<"Enter Temperature in celcius ";
		cin>> cel1;
		int fah2=cel1*(5/9)+32;
		cout<<"Equivalant Celcius in temperare is"<<cin<<endl;
	}
}
