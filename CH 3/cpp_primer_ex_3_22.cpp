#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;


int main()
{
	vector<string> text {"First sentence.", "Followed by another.", "And finally, a sentence!", "", "One more."};
	for(auto it = text.begin(); it != text.end() && !it->empty(); ++it)
	{
		for(auto st = it->begin(); st != it->end(); ++st)
			*st = toupper(*st);
	}
	
	for(auto str : text) cout << str << endl;
}