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
	
	//Print all values in the range lower bound to upper bound, inclusive
	while(lowerBound <= upperBound)
	{
		cout << lowerBound << '\n';
		++lowerBound;
	}
}