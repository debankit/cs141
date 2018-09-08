#include <iostream>

using namespace std;

//function for call by value
int cv(int a, int b)
{
	if(a<b)
		return a;
	else
		return b;
}

// function for call by reference of maximum value
void cr(int a, int b, int &min)
{
	if(a<b)
		min=a;
	else
		min=b;
}

// main function or driver function
int main()
{
	int a1,a2,min;
	cout<<"Enter the first number ";
	cin>> a1;
	cout<<"Enter the second number ";
	cin>> a2;
	min=cv(a1,a2);
	cout<<  "The smaller number is= "<<min<<endl;
	cr(a1,a2,min);
	cout<<"The smaller number is= "<<min<<endl;
}
