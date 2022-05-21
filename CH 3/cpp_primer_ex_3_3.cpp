#include <iostream>
#include <string>

using namespace std;


int main()
{
	//Read two strings 
	string s1, s2;
	cin >> s1 >> s2;
	
	//Print out which string is greater, or if they are equal 
	/*
	cout << endl;
	if(s1 == s2) cout << "Both strings are equal." << endl;
	else if(s1 > s2) cout << s1 << " is greater than " << s2 << endl;
	else cout << s2 << " is greater than " << s1 << endl;
	*/
	
	//Print out which string is longer, or if both are the same length
	
	cout << endl;
	if(s1.size() == s2.size()) cout << "Both strings have the same length." << endl;
	else if(s1.size() > s2.size()) cout << s1 << " is longer than " << s2 << endl;
	else cout << s2 << " is longer than " << s1 << endl;
	
}