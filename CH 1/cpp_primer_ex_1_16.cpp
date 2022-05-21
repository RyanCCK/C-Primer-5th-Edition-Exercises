#include <iostream>

using namespace std;


int main()
{
	//Compute the sum of any number of user-entered integers
	int val, sum = 0;
	cout << "Enter some integers (terminate with ctrl+Z): ";
	while(cin >> val)
		sum += val;
	
	cout << "\n\nThe sum is: " << sum;
}