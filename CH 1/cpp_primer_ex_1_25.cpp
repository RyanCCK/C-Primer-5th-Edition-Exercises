#include <iostream>
#include "Sales_item.h"

using namespace std;


//Program to read in any amount of valid sales items,
//printing cumulative total for each consecutive sequence
//of sales items with same ISBNs
int main()
{
	Sales_item total;
	if(cin >> total)
	{
		Sales_item trans;
		while(cin >> trans)
		{
			if(total.isbn() == trans.isbn())
				total += trans;
			else
			{
				//Print total for previous consecutive sales item(s) with same ISBN
				cout << '\n' << total << '\n' << endl;
				total = trans;
			}
		}
		//Print total for last consecutive sales item(s) with same ISBN
		cout << '\n' << total << '\n' << endl;
	}
	else 
	{
		cerr << "No data found" << endl;
		return -1;
	}
	
	return 0;
}