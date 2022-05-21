#include <iostream>
#include <string>
#include <cctype>

using namespace std;


int main()
{
	string in, s;
	
	cout << "Enter your string: ";
	getline(cin, in);
	
	for(auto c : in)
		if(!ispunct(c)) s += c;
	
	cout << s;
}