#include<iostream>
using namespace std;

//main function
int main()
{
	//declaring variables
	int a;
	//asking the user to enter a year
	cout<< "Enter a year"<< endl;
	//storing them in two variables
	cin>>a;
	//using conditional statement
	if(a%4==0)
	{
		cout<< a<<" is a leap year "<<endl;
	}
	else
	{
		cout<<a<<" is not a leap year "<<endl;
	}
	
}

