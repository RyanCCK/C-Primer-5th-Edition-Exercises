#include <iostream>
#include <vector>

using namespace std;


int main()
{
	vector<int> amountEachGrade (11, 0);
	auto itr = amountEachGrade.begin();
	int grade;
	
	cout << "Enter grades, or ctrl+Z to stop: " << endl;
	while(cin >> grade)
	{
		if(grade >= 0 && grade <= 100)
		{
			itr += grade/10;
			++*itr;
			itr -= grade/10;
		}
	}
	
	cout << "\n\nThe amount of each grade is: " << endl;
	for(int i=0; i<=10; ++i)
	{
		cout << i*10 << ": " << *itr << endl;
		++itr;
	}
}