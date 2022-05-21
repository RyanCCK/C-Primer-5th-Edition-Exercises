#include <iostream>
#include <string>

using std::cout; 
using std::string;


int main()
{
	string str("this string");
	for(auto & c : str)
		c = 'X';	
	cout << str;
	
	//Rewritten using a while loop
	/*
	string::size_type index = 0;
	while(index < str.size())
		str[index] = 'X';
	*/
	
	//Rewritten using a for loop
	/*
	for(string::size_type i = 0; i<str.size(); ++i)
		str[i] = 'X';
	*/
}