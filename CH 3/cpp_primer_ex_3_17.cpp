#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;


int main()
{
	string temp;
	vector<string> vStr;
	
	//Read in a sequence of words
	while(cin >> temp)
		vStr.push_back(temp);
	
	//Convert each word to upper case
	for(auto & x : vStr)
	{
		for(int i=0; i<x.length(); ++i)
			x[i] = toupper(x[i]);
	}
	
	//Print eight converted words per line
	for(int i=0; i<vStr.size(); ++i)
	{
		if(i%8 == 0) cout << endl;
		cout << vStr[i] << ' ';
	}
}