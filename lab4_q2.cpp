#include <iostream>
using namespace std;

int main()
{
	// declare variables celcius and fahrenheit
	float c,f;
	//ask user to enter temperature in celcius
	cout<< "Enter temperature in celcius"<<endl;
	//store it in celcius variable
	cin>> c;
	//convert it into fahrenheit and store it in fahrenheit variable
	f= (c/5)*9 +32;
	//print the fahrenheit value in the terminal
	cout<< " The tamperature in fahrenheit is= "<< f<< endl;
}

