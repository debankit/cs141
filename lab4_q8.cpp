#include <iostream>
using namespace std;

int main()
{
	//declare the required variables
	float m1,m2,m3,m4,m5,t, avg,per;
	//ask the user for markd in five subjects and store it in different variables
	cout<<"Enter the marks of subject 1 "<<endl;
	cin>>m1;
	cout<<"Enter the marks of subject 2 "<<endl;
	cin>>m2;
	cout<<"Enter the marks of subject 3"<<endl;
	cin>>m3;
	cout<<"Enter the marks of subject 4 "<<endl;
	cin>>m4;
	cout<<"Enter the marks of subject 5"<<endl;
	cin>>m5;
	//find the total, average and percentage
	t= m1+m2+m3+m4+m5;
	avg= t/5;
	per= (t/500)*100;
	// print the results in the terminal
	cout<<"Total marks= "<<t<<endl;
	cout<<"Average= "<<avg<<endl;
	cout<<"Percentage= "<<per<<"%";

}

