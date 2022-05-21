#include <iostream>
#include <vector>

using namespace std;


int main()
{
	vector<int> v (10, 1);
	
	for(auto it = v.begin(); it != v.end(); ++it)
		*it = 2*(*it);
	
	for(auto i : v) cout << i << endl;
}