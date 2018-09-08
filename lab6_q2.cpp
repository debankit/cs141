#include <iostream>

using namespace std;

//function for call by value
int cv(int a, int b)
{
	int sum;
	sum=a+b;
	return sum;
}

// function for call by reference of addition
void cr(int a, int b, int &sum)
{
	sum=a+b;
}

// main function or driver function
int main()
{
	int a1,a2,s;
	cout<<"Enter the first number ";
	cin>> a1;
	cout<<"Enter the second number ";
	cin>> a2;
	s=cv(a1,a2);
	cout<<  "The sum is= "<<s<<endl;
	cr(a1,a2,s);
	cout<<"The sum is= "<<s<<endl;
}
