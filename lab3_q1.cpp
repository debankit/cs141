//defining library
#include <iostream>
using namespace std;
//defining main function
int main()
{
	//declaring variables with different data types inside main function
	int a; float f; char c; double d; bool b;

	/*printing default values of data types in terminal
	and printing the size of all types of variables in the terminal*/ 

	cout<< "value of int type= "<<a << endl;
	cout<< "size of int type= "<<sizeof(a)<< endl;
	cout<< "value of float type= "<< f<< endl;
	cout<< "size of float type= "<<sizeof(f)<< endl;
	cout<< "value of double type= "<< d<< endl;
	cout<< "size of double type= "<< sizeof(d)<<endl;
	cout<< "value of character type= "<< c<<endl;
	cout<< "size of character type= "<< sizeof(c)<< endl;
	cout<< "value of boolean type= "<< b<<endl;
	cout<< "size of boolean type= "<< sizeof(b)<< endl;
	
}

