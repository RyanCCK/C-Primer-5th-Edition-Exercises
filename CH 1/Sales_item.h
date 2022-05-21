#include <iostream>
#include <string>

class Sales_item
{
	private:
	std::string mIsbn;
	int numSold;
	double totalRevenue=0, avgPrice;
	
	public:
	std::string isbn();
	
	Sales_item& operator= (const Sales_item&);
	
	Sales_item& operator+ (const Sales_item& item);
	
	Sales_item& operator+= (const Sales_item& item);
	
	friend std::istream& operator>> (std::istream& in, Sales_item& item);
	
	friend std::ostream& operator<< (std::ostream& out, const Sales_item& item);
};

std::istream& operator>> (std::istream& in, Sales_item& item);
	
std::ostream& operator<< (std::ostream& out, const Sales_item& item);