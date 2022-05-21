#include <iostream>

using namespace std;


//Print strings using escape characters
int main()
{
	//Print 2M followed by a newline
	cout << "2\x4d\n";
	//Print in the stated order: 2, a tab, M, a newline
	cout << "2\t\x4d\n";
	
	return 0;
}