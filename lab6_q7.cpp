#include <iostream>

using namespace std;

//function for upper case
char toUpper(char c)
{
	char u;
	int n= (int)c-97;
	u=(char)(n+ 65);
	return u;
}

//function for lower case
char toLower(char c)
{
	char u;
	int n=(int)c-65;
	u=(char) (n+97);
	return u;
}

//main funtion or driver function
int main()
{
	char c, a;
	cout<<"Enter an alphabet "<<endl;
	cin>>c;
	if(c>=97 && c<=122)
	{
		a= toUpper(c);
		cout<<"Modified character= "<<a<<endl;	
	}
	else if(c>=65 && c<=90)
	{
		a=toLower(c);
		cout<<"Modified character= "<<a<<endl;	
	}
	else
		cout<<"Invalid Input";	
	
}
