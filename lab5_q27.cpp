#include<iostream>
using namespace std;

//main function
int main()
{
	//declaring variables
	int n,s,i=1;
	//asking the user to enter a number
	cout<< "Enter a number"<< endl;
	//storing the number
	cin>>n;
	//using conditional statement
	while(i<=n)
	{
		s=s+i;
		i++;
	}
	cout<<"The sum of numbers from to 1 to "<<n<<" is= "<<s<<endl;
	
}

