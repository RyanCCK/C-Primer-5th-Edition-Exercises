#include <iostream>
#include <iterator>

using namespace std;


int main()
{
	int ia[3][4] = {{0, 1, 2, 3},{4, 5, 6, 7},{8, 9, 10, 11}};
	
	//Print all elements of ia using range for
	for(const int (&i) [4] : ia)
	{
		for(int j : i) cout << j << ' ';
		cout << endl;
	}
	
	cout << endl;
	
	//Print all elements of ia using for with subscripts
	for(int i = 0; i < 3; ++i)
	{
		for(int j = 0; j < 4; ++j)
			cout << ia[i][j] << ' ';
		cout << endl;
	}
	
	cout << endl;
	
	//Print all elements of ia using for with pointers
	for(int (*ip) [4] = ia; ip < ia+3; ++ip)
	{
		for(int * ij = *ip; ij < *ip+4; ++ij)
			cout << *ij << ' ';
		cout << endl;
	}
}