#include<iostream>
using namespace std;

//main function
int main()
{
	//declaring variables
	char a;
	//asking the user to enter an alphabet
	cout<< "Enter a an alphabet"<< endl;
	//storing the alphabet
	cin>>a;
	//using conditional statement
	if(a=='a' || a=='e'|| a=='i'|| a=='o'||a=='u'|| a=='A'|| a=='E'|| a=='I'|| a=='O'|| a=='U')
	{
		cout<< a<<" is a vowel";
	}
	else
	{
		cout<<a<<" is not a vowel";
	}
	
}

