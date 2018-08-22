#include <iostream>
using namespace std;

int main()
{
	//declare variables days, weeks and years
	int d,w,y;
	// ask the user to enter the number of days
	cout<<" Enter the number of days"<<endl;
	//store it in the variable days
	cin>> d;
	//convert it into years and weeks
	y= d/365;
	d= d%365;
	w= d/7;
	d= d%7;
	//print it in the terminal
	cout<<"Number of yeras= "<<y<<endl;
	cout<<"Number of weeks= "<<w<<endl;
	cout<<"Number of days= "<<d<<endl;

}

