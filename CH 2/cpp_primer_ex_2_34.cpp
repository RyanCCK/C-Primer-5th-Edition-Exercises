#include <iostream>

using namespace std;


int main()
{
	int i = 0;
    auto &r = i;
    const int ci = i;
    const int &cr = ci;
    
    auto a = r;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;
	
	cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << ' ' << g << endl;
	
	//Determine which of the below statements compile. If any do not, explain why.
	a = 42;
	b = 42;
	c = 42;
	//DOES NOT COMPILE: Invalid conversion from 'int' to 'int *'
	//d = 42;
	//DOES NOT COMPILE: Invalid conversion from 'int' to 'const int *'
	//e = 42;
	//DOES NOT COMPILE: Assignment of read-only reference '&g'
	//g = 42;
	
	cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << ' ' << g << endl;
	
	return 0;
}