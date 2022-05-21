#include <iostream>
#include <string>
#include "Sales_data.h"

using namespace std;


//Implements several functions; they are separated by comments. Comment out whichever ones are not being used.
int main()
{
	//(From Exercise 1.20)
	//Reads a set of book sales transactions and writes them to std::cout
	//(Can also be used for Exercise 1.22 with slight modification)
	Sales_data transaction;
	int avgPrice;
	while(cin >> transaction.bookNumber)
	{
		cin >> transaction.unitsSold >> avgPrice;
		transaction.revenue = transaction.unitsSold * avgPrice;
		//For Exercise 1.20
		//(If for Exercise 1.22, print only total revenue, tracked through each iteration of loop)
		cout << transaction.bookNumber << ' ' << transaction.unitsSold << ' ' 
			 << avgPrice << ' ' << transaction.revenue;
	}
	
	
	//(From Exercise 1.21)
	//Read two transactions; iff ISBNs match, print their sum
	Sales_data book1, book2;
	cin >> book1.bookNumber >> book1.unitsSold >> book1.revenue;
	cin >> book2.bookNumber >> book2.unitsSold >> book2.revenue;
	if(book1.bookNumber == book2.bookNumber)
	{
		cout << "\n\nISBN: " << book1.bookNumber << "\nTotal Units Sold: " << book1.unitsSold + book2.unitsSold 
			 << "\nTotal Revenue: " << (book1.revenue*book1.unitsSold) + (book2.revenue*book2.unitsSold) << "\nAverage Price: " 
			 << (book1.revenue + book2.revenue)/(book1.unitsSold + book2.unitsSold);
	}
}