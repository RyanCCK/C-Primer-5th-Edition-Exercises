#include <iostream>

using namespace std;


int main()
{
	//Calculate sum of integers from 50 to 100 inclusive
	int val = 50, sum = 0;
	while(val <= 100)
	{
		sum += val;
		++val;
	}
	
	//Print sum
	cout << sum;
}