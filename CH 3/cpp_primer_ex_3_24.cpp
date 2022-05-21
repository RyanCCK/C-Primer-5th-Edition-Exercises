#include <iostream>
#include <vector>

using namespace std;


int main()
{
	vector<int> vals {5, 10, 4, 6, -9, 2, 1};
	
	//Print sum of all adjacent elements
	for(auto first = vals.begin(); first != vals.end() && first+1 != vals.end(); ++first)
		cout << *first + *(first+1) << ' ';
	
	cout << endl << endl;
	
	//Print sum of outermost elements (moving inward)
	for(auto first = vals.begin(), last = vals.end()-1; first <= last; ++first, --last)
	{
		if(first != last)
			cout << *first+*last << ' ';
		else cout << *first;
	}
}