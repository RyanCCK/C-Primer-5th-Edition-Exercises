#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
	vector<int> v1;
	vector<int> v2 (10);
	vector<int> v3 (10, 42);
	vector<int> v4 {10};
	vector<int> v5 {10, 42};
	vector<string> v6 {10};
	vector<string> v7 {10, "hi"};
	
	cout << "\nv1: ";
	for(auto x : v1) cout << x << ' ';
	cout << endl << endl;
	
	cout << "v2: ";
	for(auto x : v2) cout << x << ' ';
	cout << endl << endl;
	
	cout << "v3: ";
	for(auto x : v3) cout << x << ' ';
	cout << endl << endl;
	
	cout << "v4: ";
	for(auto x : v4) cout << x << ' ';
	cout << endl << endl;
	
	cout << "v5: ";
	for(auto x : v5) cout << x << ' ';
	cout << endl << endl;
	
	cout << "v6: ";
	for(auto x : v6) cout << x << ' ';
	cout << endl << endl;
	
	cout << "v7: ";
	for(auto x : v7) cout << x << ' ';
	cout << endl << endl;
}