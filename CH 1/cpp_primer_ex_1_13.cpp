#include <iostream>

using namespace std;


int main()
{
	int sum = 0;
	
	//Calculate sum of integers from 50 to 100 inclusive
	for(int i=50; i<=100; ++i)
		sum += i;
	
	//Print sum
	cout << sum << '\n' << endl;
	
	//Print integers counting down from 10 to 1
	for(int i=10; i>0; --i)
		cout << i << '\n';
}