#include<iostream>
using namespace std;

//main function
int main()
{
	//declaring variables
	char a;
	//asking the user to enter an alphabet
	cout<< "Enter an alphabet"<< endl;
	//storing the character
	cin>>a;
	//using conditional statement
	if(65<=a && a<=90)
	{
		cout<< a<<" is a uppercase alphabet "<<endl;
	}
	else if(97<=a && a<=122)
	{
		cout<<a<<" is a lowercase alphabet"<<endl;
	}
	else
		cout<<" not valid input";
	
}

