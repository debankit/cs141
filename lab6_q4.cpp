//Hollow mirrored rhombus star pattern
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
		for(int j=1;j<=i;j++)
		{
			cout<<" ";
		}
		if(i==1 || i==n)
		{
			//printing characters in first and last row
			for(int a=1;a<=n;a++)
			{
				cout<<"*";
			}
		}
		else
		{
			cout<<"*";
			//for spaces
			for(int a=1;a<= (n-2);a++)
			{
				cout<<" ";
			}
			cout<<"*";
		}
	cout<<endl;
	}

}


