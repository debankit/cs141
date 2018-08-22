#include <iostream>
using namespace std;

int main()
{
	//declare variables c and f
	float c,f;
	// ask the user for temperature in fahrenheit and store it in f
	cout<< "Enter temperature in fahrenheit upto two decimal places"<< endl;
	cin>> f;
	// convert the temperature in celcius and store it in c
	c=(f-32)/9*5;
	//print the temperature into celcius and print it in the terminal
	cout<< " The temperature in celcius is= "<< c;


}

