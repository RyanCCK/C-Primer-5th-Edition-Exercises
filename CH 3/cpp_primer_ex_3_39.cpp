#include <iostream>
#include <cstring>

using namespace std;


int main()
{
	const char c1[] {'w', 'o', 'r', 'd', '\0'};
	const char c2[] {'W', 'o', 'r', 'd', '\0'};
	
	cout << strcmp(c1, c2);
}