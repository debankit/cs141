#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	//declare the required variables
	float p,t,r,n,a,ci;
	//ask the user for the principal amount, rate of interest, time and number of times copmponded anually
	cout<<"Enter the Principal amount ";
	cin>>p;
	cout<<"Enter the time";
	cin>>t;
	cout<<"Enter the rate of interest";
	cin>>r;
	cout<<"Enter the number of times compounded anually";
	cin>>n;
	//compute the compound interest
	a=1+r/(n*100);
	ci= p* pow(a,n*t);
	//print the interest in the terminal
	cout<<"The compound interest is= "<<ci;

}

