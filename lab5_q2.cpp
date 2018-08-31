#include<iostream>
using namespace std;

//main function
int main()
{
	//declaring variables
	int a,b,c;
	//asking the user to enter three numbers
	cout<< "Enter three integer numbers with spaces in between"<< endl;
	//storing them in three variables
	cin>>a >>b>> c;
	//using conditional statement
	if(a>b)
	{
		if(a>c)
		{
			cout<< "the greater number is= "<<a<<endl;
		}
	}
	else
	{
		if(b>c)
		{
			cout<<"the greater number is= "<<b<<endl;
		}
		else
		{
			cout<<"the greater number is= "<<c<<endl;
		}	
	}
	
}

