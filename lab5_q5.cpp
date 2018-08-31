#include<iostream>
using namespace std;

//main function
int main()
{
	//declaring variables
	int a;
	//asking the user to enter two numbers
	cout<< "Enter a number "<< endl;
	//storing them in two variables
	cin>>a ;
	//using conditional statement
	if(a%2==0)
	{
		cout<< a<<" is an even number "<<endl;
	}
	else
	{
		cout<<a<<" is an odd number"<<endl;
	}
	
}

