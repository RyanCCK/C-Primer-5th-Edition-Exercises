#include <iostream>
#include <cstring>

using namespace std;


int main()
{
	const char c1[] = "hello";
	const char c2[] = " world!";
	char combine[strlen(c1)+strlen(c2)];
	strcpy(combine, c1);
	strcat(combine, c2);
	
	for(auto i : combine)
		cout << i;
}