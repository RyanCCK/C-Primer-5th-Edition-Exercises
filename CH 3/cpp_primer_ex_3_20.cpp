#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int temp;
	vector<int> vInt;
	
	//Read all ints from std input 
	while(cin >> temp)
		vInt.push_back(temp);
	
	//Print the sums of all adjacent elements in the vector
	//	(i.e. v[0]+v[1], v[1]+v[2], ...
	for(int i=0; i<vInt.size()-1; ++i)
	{
		cout << vInt[i] + vInt[i+1] << ' ';
	}
	
	cout << endl << endl;
	
	//Print the sums of the outermost elements, then move inward and find sum, 
	//	then move inward again... until at innermost two elements 
	// 	(if odd number of elements, do NOT sum middle element with itself
	for(int i=0; i<vInt.size()/2; ++i)
	{
		cout << vInt[i] + vInt[vInt.size()-1-i] << ' ';
	}
	//Print middle element if vector is of odd size 
	if(vInt.size()%2 == 1) cout << vInt[vInt.size()/2];
}