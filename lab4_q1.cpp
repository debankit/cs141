#include <iostream>
using namespace std;

// main function
int main()
{
	float lc,lm,lk;
	//enter length in centimetre
	cout<< "enter length in centimetre upto two decimal points"<< endl;
	//store it in a variable
	cin>> lc;
	//convert it into metre and kilometre
	lm= lc/100.0;
 	lk= lc/100000.0;
	//print it in the terminal
	cout<< "length in metre is= "<< lm<< endl;
	cout<< "length in kilomtre is= "<< lk<<endl;

}

