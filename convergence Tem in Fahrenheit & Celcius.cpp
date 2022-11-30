#include<iostream>
using namespace std;
int main()
{
	int i=89;
	while(i==89)
	{
		int number;
		cout<<"\tPlease enter your choice\n\t1 For fah to cel\n\t2 For cel to fah\n\t  =";
		cin>>number;
		if(number==1)
	{
		int fah;
		cout<<"\nEnter Temperature in Fahrenheit: ";
		cin>> fah;
		int cel=(fah-32)*5/9;
		cout<<"Equivalant temperare in Celcius is: "<<cel<<endl;
	}
	else if(number==2)
	{
		int cel;
		cout<<"\nEnter Temperature in celcius: ";
		cin>> cel;
		int fah=cel*(5/9)+32;
		cout<<"Equivalant Celcius in temperare is: "<< fah<<endl;
	}
		cout<<"\nDo You want make more convergence:\nPress Y to continue and press N to stop=\n";
		cin>>i;			
	}
	
		cout<<"\t\tThanks for using program.";
}
