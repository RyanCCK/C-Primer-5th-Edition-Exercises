#include <iostream>
#include <string>
#include "Sales_item.h"

using namespace std;



string Sales_item::isbn()
{
	return mIsbn;
}
	
Sales_item& Sales_item::operator= (const Sales_item&) = default;
	
Sales_item& Sales_item::operator+ (const Sales_item& item)
{
	if(this->mIsbn == item.mIsbn)
	{
		numSold += item.numSold;
		totalRevenue += item.totalRevenue;
		avgPrice = totalRevenue/numSold;
	}
		
	return *this;
}
	
	
Sales_item& Sales_item::operator+= (const Sales_item& item)
{
	return *this+item;
}


istream& operator>> (istream& in, Sales_item& item)
{
	in >> item.mIsbn >> item.numSold >> item.avgPrice;
	item.totalRevenue += item.numSold * item.avgPrice;
	return in;
}


ostream& operator<< (ostream& out, const Sales_item& item)
{
	out << item.mIsbn << " " << item.numSold << " " << item.totalRevenue << " " << item.avgPrice;
	return out;
}