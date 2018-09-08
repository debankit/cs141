#include <iostream>

using namespace std;

//input function for unit cost
float unitc()
{
	float uct;
	cout<<"Enter the unitcost ";
	cin>>uct;

	return uct;
}

//input function for number of units
float unit()
{
	float un;
	cout<<"Enter the number of units ";
	cin>>un;
	return un;
}
//input functions for tax rate
float rate()
{
	float r;
	cout<<"Enter the tax rate ";
	cin>>r;
	return r;
}

// function for a calculation
void calculation(float uc, float un, float r, float &st, float &tot)
{
	st= (r/100) * uc* un;
	tot= (uc*un) + st;
}

//print function
void print(float uc, float un, float r, float st, float tot)
{
	cout<<"Cost of each unit= "<<uc<<endl;
	cout<<"Number of units bought= "<<un<<endl;
	cout<<"Tax rate on each unit= "<<r<<" %"<<endl;
	cout<<"Total sales tax= "<<st<<endl;
	cout<<"Total amount due= "<<tot<<endl;
}

//main function or driver function
int main()
{
	float unitCost,unitsPurch,taxRate,salesTax,totalDue;
	unitCost= unitc();
	unitsPurch= unit();
	taxRate= rate();
	cout<<endl;
	calculation(unitCost, unitsPurch, taxRate, salesTax, totalDue);
	print(unitCost, unitsPurch, taxRate, salesTax, totalDue);
}
