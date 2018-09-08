#include <iostream>

using namespace std;

//function for call by value
int cv(int a, int b)
{
	int max;
	if(a>b)
		return a;
	else
		return b;
}

// function for call by reference of maximum value
void cr(int a, int b, int &max)
{
	if(a>b)
		max=a;
	else
		max=b;
}

// main function or driver function
int main()
{
	int a1,a2,max;
	cout<<"Enter the first number ";
	cin>> a1;
	cout<<"Enter the second number ";
	cin>> a2;
	max=cv(a1,a2);
	cout<<  "The greater number is= "<<max<<endl;
	cr(a1,a2,max);
	cout<<"The greater number is= "<<max<<endl;
}
