//Square star pattern
#include <iostream>

using namespace std;

//main function
int main()
{
	int n;
	cout<<"Enter the number of rows ";
	cin>>n;
	//for number of rows
	for(int i=1;i<=n;i++)
	{
		//printing characters in each row
		for(int j=1;j<=n;j++)
		{
			cout<<"*";
		}
	cout<<endl;
	}

}


