#include<iostream>
using namespace std;

//main function
int main()
{
	//declaring variables
	int n,i=1,s=0;
	//asking the user to enter a number
	cout<< "Enter a number"<< endl;
	//storing the number
	cin>>n;
	//using conditional statement
	while(i<=n)
	{
		s=s+i;
		i+=2;
	}
	cout<<"The sum of odd numbers from 1 to "<<n<<" is= "<<s<<endl;	
}

