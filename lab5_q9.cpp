#include<iostream>
using namespace std;

//main function
int main()
{
	//declaring variables
	char a;
	//asking the user to enter a character
	cout<< "Enter a character"<< endl;
	//storing the character
	cin>>a;
	//using conditional statement
	if((65<=a && a<=90) || (97<=a && a<=122))
	{
		cout<< a<<" is an alphabet "<<endl;
	}
	else if(48<=a&& a<=57)
	{
		cout<<a<<" is a number "<<endl;
	}
	else
		cout<< a<<" is a special character";
	
}

