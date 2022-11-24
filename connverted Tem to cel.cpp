#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Please enter your choice\n 1 For fah to cel\n 2 For cel to fah";
	cin>>number;
	if(number==1)
	{
		int fah;
		cout<<"Enter Temperature in Fahrenheit ";
		cin>> fah;
		int cel=(fah-32)*5/9;
		cout<<"Equivalant temperare in Celcius is "<<cel<<endl;
	}
	else if(number==2)
	{
		int cel;
		cout<<"Enter Temperature in celcius ";
		cin>> cel;
		int fah=cel*(5/9)+32;
		cout<<"Equivalant Celcius in temperare is"<< fah<<endl;
	}
}
