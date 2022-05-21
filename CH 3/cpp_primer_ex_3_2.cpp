#include <iostream>
#include <string>

using namespace std;


int main()
{
	string s;
	
	//Read standard input one line at a time, then re-print
	/*
	while(getline(cin, s))
	{
		cout << s << endl;
	}
	*/
	
	//Read standard input one whitespace-separated token at a time, then re-print
	
	while(cin >> s)
	{
		cout << s << endl;
	}
	
}