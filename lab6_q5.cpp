#include <iostream>

using namespace std;

//function for call by value of addition
int cvsum(int a, int b)
{
	int sum;
	sum=a+b;
	return sum;
}

// function for call by reference of addition
void crsum(int a, int b, int &sum)
{
	sum=a+b;
}

//function for call by value
int cvmax(int a, int b)
{
	int max;
	if(a>b)
		return a;
	else
		return b;
}

// function for call by reference of maximum value
void crmax(int a, int b, int &max)
{
	if(a>b)
		max=a;
	else
		max=b;
}

//function for call by value
int cvmin(int a, int b)
{
	if(a<b)
		return a;
	else
		return b;
}

// function for call by reference of maximum value
void crmin(int a, int b, int &min)
{
	if(a<b)
		min=a;
	else
		min=b;
}

//main function or driver function
int main()
{
	char c;
	int a1,a2,sum1,sum2,max1,max2,min1,min2;
	cout<<"Enter the first  number "<<endl;
	cin>>a1;
	cout<<"Enter the second number "<<endl;
	cin>>a2;
	cout<<" Enter a for sum of two numbers "<<endl;
	cout<<" Enter b to find max of two numbers "<<endl;
	cout<<" Enter c to find min of two numbers "<<endl;
	cin>>c;
	if(c=='a')
	{
		sum1=cvsum(a1,a2);
		cout<<"Sum= "<<sum1<<endl;
		crsum(a1,a2,sum2);
		cout<<"Sum= "<<sum2<<endl;
	}
	else if(c=='b')
	{
		max1=cvmax(a1,a2);
		cout<<"Greater number= "<<max1<<endl;
		crmax(a1,a2,max2);
		cout<<"Greaternumber= "<<max2<<endl;
	}
	else if(c=='c')
	{
		min1=cvmin(a1,a2);
		cout<<"Smaller number= "<<min1<<endl;
		crmin(a1,a2,min2);
		cout<<"Smaller number= "<<min2<<endl;
	}
	else
		cout<<"Invalid Input";
}
















