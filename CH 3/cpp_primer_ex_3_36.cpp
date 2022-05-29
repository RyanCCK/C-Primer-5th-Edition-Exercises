#include <iostream>
#include <cstddef>
#include <iterator>

using namespace std;


int main()
{
	//Compares two arrays for equality using pointers
	
	const size_t sz = 5;
	int arr1[sz] {1, 2, 3, 4, 5};
	int arr2[sz] {1, 2, 3, 4, 6};
	
	auto beg1 = arr1;
	auto end1 = arr1 + (end(arr1) - begin(arr1));
	auto beg2 = arr2;
	auto end2 = arr2 + (end(arr2) - begin(arr2));

	bool equal = true;
	while(beg1 != end1 || beg2 != end2)
	{
		if((beg1 == end1 && beg2 != end2)|| (beg2 == end2 && beg1 != end1))
		{
			equal = false;
			break;
		}
		else if(*beg1 != *beg2)
		{
			equal = false;
			break;
		}
		++beg1; ++beg2;
	}
	
	cout << equal;
}