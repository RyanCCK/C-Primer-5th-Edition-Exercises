#include <iostream>
#include <string>

using namespace std;


int main()
{
	//Read all strings from standard input, concatenating them into one string, separated by whitespace
	string in, total;
	while(cin >> in)
		total += in + ' ';
	cout << total;
}
