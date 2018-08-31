#include<iostream>
using namespace std;

//main function
int main()
{
	//declaring variables
	int n,i=1,m;
	//asking the user to enter a number
	cout<< "Enter a number"<< endl;
	//storing the number
	cin>>n;
	//using conditional statement
	while(i<=10)
	{
		m=n*i;
		cout<<n<<" * "<<i<<" = "<<m<<endl;
		i++;
	}
}	

