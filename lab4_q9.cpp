#include <iostream>
using namespace std;

int main()
{
	//declare variable p,t,r
	float p,t,r,si;
	//ask the user to enter principal amount, time and rate of interest
	cout<<"Enter the Principal amount "<<endl;
	cin>>p;
	cout<<"Enter the time "<<endl;
	cin>>t;
	cout<<"Enter the rate of interest "<<endl;
	cin>>r;
	//compute simple interest
	si=(p*t*r) /100;
	//print the interest in the terminal
	cout<<"Simple interest= "<<si;

}

