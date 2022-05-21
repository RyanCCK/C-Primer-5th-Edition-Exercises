#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
	//Read ints and store in a vector 
	int temp;
	vector<int> vInt;
	while(cin >> temp)
		vInt.push_back(temp);
	for(auto x : vInt) 
		cout << x << endl;
}