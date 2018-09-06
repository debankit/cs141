//Inverted right triangle star pattern
#include <iostream>

using namespace std;
//main function
int main()
{
	int n;
	cout<<"Enter number of rows";
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		for(int j=i;j>=1;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

