#include <iostream>

using namespace std;


int main()
{
	int vals[10];
	
	for(int i=0; i<sizeof(vals)/sizeof(vals[0]); ++i)
		vals[i] = i+1;
	
	cout << "Vals:\n";
	
	for(auto i : vals) cout << i << ' ';
	
	cout << endl << endl;
	
	
	int valsCopy[10];
	
	for(int i=0; i<sizeof(vals)/sizeof(vals[0]); ++i)
		valsCopy[i] = vals[i];
	
	cout << "Vals COPY:\n";
	
	for(auto i : valsCopy) cout << i << ' ';
}