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
	if(a%5==0 && a%11==0)
	{
		cout<< a<<" is divisible by 5 and 11 "<<endl;
	}
	else
	{
		cout<< a<<" is not divisible by 5 and 11 "<<endl;
	}
	
}

