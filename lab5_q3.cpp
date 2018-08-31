#include<iostream>
using namespace std;

//main function
int main()
{
	//declaring variables
	int a;
	//asking the user to enter a number
	cout<< "Enter a number "<< endl;
	//storing them in two variables
	cin>>a;
	//using conditional statement
	if(a>0)
	{
		cout<< a<<" is positive ";
	}
	else 
	{
		if(a==0)
		{
			cout<<a <<" is equal to zero ";
		}
		else
			cout<<a<<" is a negative number";
	}
	
}

