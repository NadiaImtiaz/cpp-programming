#include<iostream>
using namespace std;
int main()
{
	char i=89;
	while(i==89)
	{
	int valueOne;
	int valueTwo;
	
		cout<<"Enter a Temperture: ";
		cin>> valueOne;	
		cout<<"Press 1 for fah to cel=\nPress 2 for cel to feh=\n";
		cin>> valueTwo;
	
	switch(valueTwo)
	{
		case 1:
			cout<<"\n\tEquivalant temperare in Celcius is: "<<(valueOne-32)*5/9;
			break;
		case 2:
			cout<<"\n\tEquivalant Celcius in temperare is: "<<valueOne*(5/9)+32;
			break;
		default:
		 	cout<<"Invalid";		
	}
		cout<<"\n\tDo You want make more Convergence:\n\nPress Y to continue and press N to stop=\n";
		cin>>i;	
	}
	cout<<"\n\t\t\tTHANK YOU.";
}
