#include <iostream>

using namespace std;

//function for sum of all even numbers
int sumEvenNumbers(int a,int b)
{
	int s=0;
	for(int i=a;i<=b;i++)
	{
		if((i%2)==0)
			s=s+i;
	}
	return s;
}

//function for sum of all odd numbers
int sumOddNumbers(int a,int b)
{
	int s=0;
	for(int i=a;i<=b;i++)
	{
		if((i%2)!=0)
			s=s+i;
	}
	return s;
}

//function for sum of squares of even numbers
int sumSquareEvenNumbers(int a, int b)
{
	int s=0;
	for(int i=a;i<=b; i++)
	{
		if((i%2)==0)
			s=s+ (i*i);
	}
	return s;
}

//function for sum of squares of odd numbers
int sumSquareOddNumbers(int a, int b)
{
	int s=0;
	for(int i=a;i<=b; i++)
	{
		if((i%2)!=0)
			s=s+ (i*i);
	}
	return s;
}

int main()
{
	int a1,a2,sumEven, sumOdd, sumSquareEven, sumSquareOdd;
	cout<<"Enter the first number "<<endl;
	cin>>a1;
	cout<<"Enter the second number "<<endl;
	cin>>a2;
	sumEven= sumEvenNumbers(a1,a2);
	sumOdd= sumOddNumbers(a1,a2);
	sumSquareEven= sumSquareEvenNumbers(a1,a2);
	sumSquareOdd= sumSquareOddNumbers(a1,a2);
	cout<<"The sum of all even numbers betwwn these= "<<sumEven<<endl;
	cout<<"The sum of all odd numbers between these= "<<sumOdd<<endl;
	cout<<"The sum of squares of all even numbers between these= "<<sumSquareEven<<endl;
	cout<<"The sum of squaresof all odd numbers between these= "<<sumSquareOdd<<endl;
}

