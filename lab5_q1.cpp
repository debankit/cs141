#include<iostream>
using namespace std;

//main function
int main()
{
	//declaring variables
	int a,b;
	//asking the user to enter two numbers
	cout<< "Enter two number with a space in between"<< endl;
	//storing them in two variables
	cin>>a >>b;
	//using conditional statement
	if(a>b)
	{
		cout<< "the greater number is= "<<a<<endl;
	}
	else
	{
		cout<<"the greater number is= "<<b<<endl;
	}
	
}

