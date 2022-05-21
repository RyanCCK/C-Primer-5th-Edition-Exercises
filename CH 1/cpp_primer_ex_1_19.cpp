#include <iostream>

using namespace std;


int main()
{
	//Get lower bound and upper bound from user
	int lowerBound, upperBound;
	cout << "Enter an integer lower bound: ";
	cin >> lowerBound;
	cout << "Enter an integer upper bound: ";
	cin >> upperBound;
	
	//Print all values between lesser and greater values, inclusive
	if(lowerBound <= upperBound)
	{
		while(lowerBound <= upperBound)
		{
			cout << lowerBound << endl;
			++lowerBound;
		}
	}
	else
	{
		while(upperBound <= lowerBound)
		{
			cout << upperBound << endl;
			++upperBound;
		}
	}
}