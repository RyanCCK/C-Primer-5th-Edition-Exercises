#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
	//Read strings and store in a vector 
	string temp;
	vector<string> vString;
	while(cin >> temp)
		vString.push_back(temp);
	for(auto x : vString)
		cout << x << endl;
}