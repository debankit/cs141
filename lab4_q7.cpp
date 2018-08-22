#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	//declare variables to store the side of a equilateral triangle and area of it
	float s,a;
	//ask the user to enter the side of an equilateral triangle
	cout<<"Enter the side of an equilateral triangle "<<endl;
	cin>>s;
	//compute the area and store it in a variable
	a= sqrt(3)/4 *s*s;
	cout<<"The area of the equilateral triangle is= "<<a;
	//print the area in the terminal
}

