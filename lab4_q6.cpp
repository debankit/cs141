#include <iostream>
using namespace std;

int main()
{
	//declare the required variables
	float b,h,ar;
	//ask the user for the base and height of a triangle
	cout<<"Enter the base of a triangle ";
	cin>>b;
	cout<<"Enter the height of the triangle ";
	cin>>h;
	//compute the area of the triangle
	ar= 1/2.0 *b*h;
	//print the area in the terminal
	cout<<"The area of the triangle is= "<<ar;

}

