#include <iostream>
using namespace std;

int main()
{
	//declare the required variables
	float a1,a2,a3;
	//ask the user two angles of a triangle
	cout<<" enter angle 1 of a triangle"<<endl;
	cin>> a1;
	cout<<"enter angle 2 of the same triangle"<<endl;
	cin>> a2;
	//store it n two variables
	//find the third angle
	a3= 180-(a1+a2);
	//print the third angle in the terminal
	cout<<"The third angle of the triangle is= "<<a3;

}

